<?php

/**
* @file
* Handles the opinions of the customer survey
* All hooks are in the .module file.
*/

/**
* customer survey opinions
* showing customer opinions.
*/
function capgemini_multistep_form_opinion_list() {
  $headers = array('Opinion ID', 'firstName', 'LastName', 'Email', 'Room rate', 'Service Rate', 'Opinion', 'created', 'Operations');
  $rows = array();

  $results = db_query("SELECT * FROM {capgemini_hotel_opinion} ORDER BY created DESC")->fetchAll();

  foreach ($results as $opinion) {
    $rows[$opinion->opinion_id] = array(
      $opinion->opinion_id,
      $opinion->firstname,
      $opinion->lastname,
      $opinion->email,
      $opinion->room_rate,
      $opinion->service_rate,
      $opinion->opinion,
      format_date($opinion->created),
      capgemini_multistep_form_opinions_operation($opinion->opinion_id) ,
    );
  }
  $form['opinions'] = array(
    '#type' => 'tableselect',
    '#header' => $headers,
    '#options' => $rows,
    '#empty' => t('No opinions available.'),
  );

  return $form;
}

function capgemini_multistep_form_opinions_operation($opinion_id){

  $edit = l(t('edit'), 'admin/content/capgemini/opinion/edit/' . $opinion_id);
  $delete = l(t('delete'), 'admin/content/capgemini/opinion/delete/' . $opinion_id);
  return $edit . ' ' . $delete;

} 


/**
* Implements hook_block_view().
*/
function capgemini_multistep_form_edit_block_view($block_name = " ")
{

// in my example I show the form only in the front page.
// You can show it where you want, obviously
  if (drupal_is_front_page())
  {
    return NULL;
  }

  $form = drupal_get_form("capgemini_multistep_form_opinions_edit_form");
  $block = array
  (
// "subject" => t("Subject"),
    "content" => $form,
  );
// $block['content'][] .= "<br /><a href=”add”>Back to Listing</a>";
  return $block;
}
/*
* Form edit
*/

function capgemini_multistep_form_opinions_edit_form($form, &$form_state){

  $oid = arg(5);
  $result = db_query("SELECT * FROM {capgemini_hotel_opinion}
   WHERE opinion_id = :tid", array(":tid" => $oid));

  $record = $result->fetchObject();

  $form['room_rating'] = array(
    "#type" => "radios",
    "#title" => 'How would you rate the room you stayed in?',
    "#default_value" => t($record->room_rate),
    "#required" => TRUE,
    "#options" => array(1 => 1, 2 => 2, 3 => 3, 4 => 4, 5 => 5),

  );

  $form['service_rating'] = array(
    "#type" => "radios",
    "#title" => 'How would you rate our service?',
    "#default_value" => t($record->service_rate),
    "#required" => TRUE,
    "#options" => array(1 => 1, 2 => 2, 3 => 3, 4 => 4, 5 => 5),

  );

// Textarea for the body
  $form['lastname'] = array(
    "#type" => "textfield",
    "#title" => t("LastName"),
    "#value" => t($record->lastname),
    "#required" => TRUE,
  );

// Textarea for the body
  $form['firstname'] = array(
    "#type" => "textfield",
    "#title" => t("FisrtName"),
    "#value" => t($record->firstname),
    "#required" => TRUE,
  );

  $form['email'] = array(
    "#type" => "textfield",
    "#title" => t("Email"),
    "#value" => t($record->email),
    "#required" => TRUE,
  );

  $form['opinion'] = array(
    "#type" => "textarea",
    "#title" => t("Your opinion"),
    "#value" => t($record->opinion),
    "#required" => TRUE,
  );

// hidden for the body
  $form['opinion_id'] = array(
    "#type" => "hidden",
    "#value" => t($oid),
  );


// now I add also a button
  $form['submit'] = array
  (
    "#type" => "submit",
    "#value" => t("Save"),
  );

  $form['#submit'][] = "capgemini_multistep_form_opinions_submit_form";
  return $form;


}

function capgemini_multistep_form_opinions_edit_form_validate($form, &$form_state){
  //validate firstname
    if($form_state['input']['firstname'] == ""){
      $array = form_set_error('firstnameeror',t('Please enter your firstname'));
    }
  //validate lastname
    if($form_state['input']['lastname'] == ""){
      $array = form_set_error('lastnameeror',t('Please enter your lastname'));
    }
  //validation mail
    if (!valid_email_address($form_state['input']['email'])) { 
      form_set_error('emailerror',t('You must enter a valid email address'));   
    }
    //validate room_rate
    if ($form_state['input']['room_rating'] > 5 || $form_state['input']['room_rating'] < 1 ) { 
      form_set_error('room_ratingerror',t('You must enter a valid room_rate (between 1 and 5)'));   
    }
    //validate service_rate
    if ($form_state['input']['service_rating'] > 5 || $form_state['input']['service_rating'] < 1 ) { 
      form_set_error('service_ratingerror',t('You must enter a valid service_rate (between 1 and 5)'));   
    }
}

/*
* update submit
*/
function capgemini_multistep_form_opinions_submit_form($form, &$form_state){

  $oid = $form_state['values']['opinion_id'];
  $lastname = $form_state['input']['lastname'];
  $fisrtname = $form_state['input']['firstname'];
  $email = $form_state['input']['email'];
  $opinion = $form_state['input']['opinion'];
  $room_rate = $form_state['input']['room_rating'];
  $service_rate = $form_state['input']['service_rating']; 


  $data = array(
      "lastname" => $lastname,
      "firstname" => $fisrtname,
      "email" => $email,
      "opinion" => $opinion,
      "room_rate" => $room_rate,
      "service_rate" => $service_rate,
    );


    $num_updated = db_update("capgemini_hotel_opinion")
        ->fields($data)
        ->condition("opinion_id", $oid, "=")
        ->execute();
    drupal_set_message(t("Record has been Updated!"));
    drupal_goto('admin/content/capgemini/opinion');
}

/*
* delete entry
*/
function capgemini_multistep_form_delete() {

  $id = arg(5);
   // var_dump($id);
    //die('eee');

  db_delete("capgemini_hotel_opinion")
  ->condition("opinion_id", $id)
  ->execute();
  drupal_set_message(t("Record has been deleted!"));
  drupal_goto('admin/content/capgemini/opinion');
}

