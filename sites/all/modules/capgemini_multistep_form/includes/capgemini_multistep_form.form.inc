<?php

/**
 * @file
 * Handles the form elements of the customer survey form
 * All hooks are in the .module file.
 */

/**
 * Master form which calls an individual form for each step.
 * 
 * @see customer_survey_form_validate().
 * @see customer_survey_form_submit().
 * 
 * @param type $form
 * @param string $form_state
 * @return type 
 */
function capgemini_multistep_form_form($form, &$form_state) {
     
  drupal_add_css(drupal_get_path('module', 'capgemini_multistep_form') . '/css/capgemini_multistep_form.css');
  if (!isset($form_state['stage'])) $form_state['stage'] = 'rate_the_room';
 
  $form = array();
  $form = capgemini_multistep_form_get_header($form, $form_state);

  switch ($form_state['stage']) {
    
    case 'rate_the_room':
      return capgemini_multistep_form_rate_the_room_form($form, $form_state);
     break;  
 
    case 'rate_the_service': 
      return capgemini_multistep_form_rate_the_service_form($form, $form_state);  
     break;
 
    case 'personal_details': 
      return capgemini_multistep_form_personal_details_form($form, $form_state);  
     break;
 
    default:
      return capgemini_multistep_form_rate_the_room_form($form, $form_state);
     break; 
  }
  
  return $form;
    
}


/**
 * Form for the rate_the_room step.
 * 
 * @see customer_survey_form().
 *  
 * @param type $form
 * @param type $form_state
 * @return type 
 */
function capgemini_multistep_form_rate_the_room_form($form, &$form_state) {
    
  $values = isset($form_state['multistep_values']['rate_the_room']) ? $form_state['multistep_values']['rate_the_room'] : array();

  $form['rate_the_room']['room_rating'] = array(
    '#type' => 'radios',
    '#title' => 'How would you rate the room you stayed in?',
    '#options' => array(1 => 1, 2 => 2, 3 => 3, 4 => 4, 5 => 5),
    '#default_value' => isset($values['room_rating']) ? $values['room_rating'] : NULL,
  );
  
  $form['next'] = array(
    '#type' => 'submit',
    '#value' => t('Next')
  );
    
  return $form;
}


/**
 * Form for the rate_the_service step.
 * 
 * @see customer_survey_form().
 *  
 * @param type $form
 * @param type $form_state
 * @return type 
 */
function capgemini_multistep_form_rate_the_service_form($form, &$form_state) {
    
  $values = isset($form_state['multistep_values']['rate_the_service']) ? $form_state['multistep_values']['rate_the_service'] : array();

  $form['rate_the_service']['service_rating'] = array(
    '#type' => 'radios',
    '#title' => 'How would you rate our service?',
    '#options' => array(1 => 1, 2 => 2, 3 => 3, 4 => 4, 5 => 5),
    '#default_value' => isset($values['service_rating']) ? $values['service_rating'] : NULL,
  );
  
  $form['back'] = array(
    '#type' => 'submit',
    '#value' => t('Back')
  );
  
  $form['next'] = array(
    '#type' => 'submit',
    '#value' => t('Next')
  );
    
  return $form;
}


/**
 * Form for the personal_details step.
 * 
 * @see customer_survey_form().
 *  
 * @param type $form
 * @param type $form_state
 * @return type 
 */
function capgemini_multistep_form_personal_details_form($form, &$form_state) {

  $values = isset($form_state['multistep_values']['personal_details']) ? $form_state['multistep_values']['personal_details'] : array();

  $form['personal_details']['lastname'] = array(
    '#type' => 'textfield',
    '#title' => 'Last Name',
    '#default_value' => isset($values['lastname']) ? $values['lastname'] : NULL,
    '#required' => TRUE, //make this field required
  );

    $form['personal_details']['firstname'] = array(
    '#type' => 'textfield',
    '#title' => 'First Name',
    '#default_value' => isset($values['firstname']) ? $values['firstname'] : NULL,
    '#required' => TRUE, //make this field required
  );

  
  $form['personal_details']['email'] = array(
    '#type' => 'textfield',
    '#title' => 'Email',
    '#default_value' => isset($values['email']) ? $values['email'] : NULL,
    '#required' => TRUE, //make this field required
  );
 
    $form['personal_details']['opinion'] = array(
    '#type' => 'textarea',
    '#title' => 'Your opinion',
    '#default_value' => isset($values['opinion']) ? $values['opinion'] : NULL,
    '#required' => TRUE, //make this field required
  );
  $form['back'] = array(
    '#type' => 'submit',
    '#value' => t('Back')
  );
  
  $form['next'] = array(
    '#type' => 'submit',
    '#value' => t('Submit')
  );
  
  return $form;
}
