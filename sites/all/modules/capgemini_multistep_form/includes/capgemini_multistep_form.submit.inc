<?php

/**
 * @file 
 * Handles the form submission of the customer survey form
 */


/**
 * Handles what to do with the submitted form depending on what stage has been
 * completed.
 * 
 * @see customer_survey_form()
 * @see customer_survey_form_validate()
 * 
 * @param type $form
 * @param type $form_state 
 */
function capgemini_multistep_form_form_submit($form, &$form_state) {
  
  switch ($form_state['stage']) {
    
    case 'personal_details':
      $form_state['multistep_values'][$form_state['stage']] = $form_state['values'];
      if ($form_state['triggering_element']['#value'] != 'Back') {
        capgemini_multistep_form_personal_details_submit($form, $form_state);
        $form_state['complete'] = TRUE;
      }
     break;
 
    default:
      $form_state['multistep_values'][$form_state['stage']] = $form_state['values'];
      $form_state['new_stage'] = capgemini_multistep_form_move_to_next_stage($form, $form_state);
     break;
 
  } 

  if (isset($form_state['complete'])) drupal_goto('complete-page');   
  
  if ($form_state['triggering_element']['#value'] == 'Back') {
    $form_state['new_stage'] = capgemini_multistep_form_move_to_previous_stage($form, $form_state);
  } 
  
  if (isset($form_state['multistep_values']['form_build_id'])) {
    $form_state['values']['form_build_id'] = $form_state['multistep_values']['form_build_id'];
  }
  $form_state['multistep_values']['form_build_id'] = $form_state['values']['form_build_id'];
  $form_state['stage'] = $form_state['new_stage'];
  $form_state['rebuild'] = TRUE;
    
}

 /**
  * Handles the submission of the final stage
  * 
  * Sends an email to the user confirming their entry
  * 
  * @param type $form
  * @param type $form_state 
  */
function capgemini_multistep_form_personal_details_submit($form, &$form_state) {
  
  $multstep_values = $form_state['multistep_values'];
    
  $module = 'capgemini_multistep_form';
  $key = 'capgemini_multistep_form_complete';

  $to = $multstep_values['personal_details']['email'] . '; ' . variable_get('site_mail', 'mejdoubi.meriem@gmail.com');
  $from = variable_get('site_mail', 'mejdoubi.meriem@gmail.com');

  $params = array(
    'body' => 'Thank you for filling in our survey. You have now been entered into our prize draw.',
    'subject' => 'Thank you for filling in our survey, ' . $multstep_values['personal_details']['name'],  
  );
 
  $language = language_default();
  $send = TRUE;
  $result = drupal_mail($module, $key, $to, $language, $params, $from, $send);
  if ($result['result'] == TRUE) {
    drupal_set_message(t('Your message has been sent.'));
  }
  else {
    drupal_set_message(t('There was a problem sending your message and it was not sent.'), 'error');
  }


$multstep_values = $form_state['multistep_values'];
    $lastname = $multstep_values['personal_details']['lastname'];
    $fisrtname = $multstep_values['personal_details']['firstname'];
    $email = $multstep_values['personal_details']['email'];
    $opinion = $multstep_values['personal_details']['opinion'];
    $room_rate = $multstep_values['rate_the_room']['room_rating'];
    $service_rate = $multstep_values['rate_the_service']['service_rating']; 

  //$values = $form_state['multistep_values'];
 /* $room_rating = $form_state['values']['rate_the_room']['room_rating'];
  $service_rating = $form_state['values']['rate_the_service']['service_rating'];
  $lastname = $form_state['values']['personal_details']['lastname'];
  $firstname = $form_state['values']['personal_details']['firstname'];
  $email = $form_state['values']['personal_details']['email'];
  $opinion = $form_state['values']['personal_details']['opinion'];*/

  db_insert('capgemini_hotel_opinion')
      ->fields(array(
        'lastname' => $lastname,
        'firstname' => $fisrtname,
        'email' => $email,
        'room_rate' => $room_rate,
        'service_rate' => $service_rate,
        'opinion' => $opinion,
        'created' => REQUEST_TIME,
      ))
      ->execute(); 
    
}

/**
 * Returns what to show on the completion page.
 * 
 * @return type 
 */
function capgemini_multistep_form_complete() {
  // Load the modal library and add the modal javascript.
  ctools_include('modal');
  ctools_modal_add_js();
  $link = '<div id="magical-modal-link">' . l('Opinions', 'admin/content/capgemini/opinion/popup/nojs', array('attributes' => array('class' => 'ctools-use-modal'))) . '</div>'; 
  //return $link. 'Thank you for completing our survey. You have been sent an email confirming you\'ve been entered into our prize draw';  
   return $link; 
}
