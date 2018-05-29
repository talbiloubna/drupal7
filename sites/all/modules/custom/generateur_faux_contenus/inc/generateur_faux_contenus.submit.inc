<?php
/**
 * @file
 * Handles the form submission of the customer survey form
 */

//variable_get()

/**
 * implements hook_submit to add node
 *
 * @param $form
 * @param $form_state
 *
 * @throws \Exception
 */
function generateur_faux_contenus_node_form_submit($form, &$form_state) {

  global $user;
  global $language;

  $apiRest= variable_get('api_rest');
  $nbEnregistrements = $form_state['values']['nbField'];
  $contentTypes = array_values($form['content']['#value']);

  $dataParagraphs = 'amount=3&what=paragraphs'; // Parameters to pass to URL

  $optionsParagraphs = [
    'method' => 'POST', // HTTP Request Type
    'data' => $dataParagraphs, // Parameters
    'headers' => [
      'Content-Type' => 'application/x-www-form-urlencoded',
    ],
    'context' => stream_context_create(
      [
        'ssl' => ['verify_peer'=> false ]
      ]
    )
  ];

  $dataWords = 'amount=3&what=words'; // Parameters to pass to URL

  $optionsWords = [
    'method' => 'POST', // HTTP Request Type
    'data' => $dataWords, // Parameters
    'headers' => [
      'Content-Type' => 'application/x-www-form-urlencoded',
    ],
    'context' => stream_context_create(
      [
        'ssl' => ['verify_peer'=> false ]
      ]
    )
  ];


  //print_r($json_response);
  //die('dd');

  for ($i = 0; $i < $nbEnregistrements; $i++) {

    foreach ($contentTypes as &$value) {
      $resultParagraphs = drupal_http_request($apiRest, $optionsParagraphs); // Make request
      $json_response_paragraphs = drupal_json_decode($resultParagraphs->data);

      $resultWords = drupal_http_request($apiRest, $optionsWords); // Make request
      $json_response_words = drupal_json_decode($resultWords->data);

      // add node properties
      $newNode = (object) NULL;
      $newNode->type = $value;
      $newNode->title = $json_response_words['feed']['lipsum'];

      $node_wrapper = entity_metadata_wrapper('node', $newNode);
      $node_wrapper->promote = 0;
      $node_wrapper->language->set('und');
      $newNode->body[$newNode->language][0]['value'] = $json_response_paragraphs['feed']['lipsum'];
      $newNode->body[$newNode->language][0]['summary'] = text_summary($json_response_paragraphs['feed']['lipsum']);
      $newNode->body[$newNode->language][0]['format'] = filter_default_format();

      $newNode->uid = $user->uid;
      $newNode->created = strtotime("now");
      $newNode->changed = strtotime("now");
      $newNode->status = 1;
      $newNode->language = $language->language;
      $newNode->comment = 0;
      $newNode->promote = 0;
      $newNode->moderate = 0;
      $newNode->sticky = 0;

      // save node
      node_save($newNode);
    }
  }
}


/**
 * implements hook_submit to add user
 *
 * @param $form
 * @param $form_state
 *
 * @throws \Exception
 */
function generateur_faux_contenus_user_form_submit($form, &$form_state) {

  $apiRest= variable_get('api_rest');
  $nbEnregistrements = $form_state['values']['nbField'];
  $domainName = $form_state['values']['domainName'];
  $password = $form_state['values']['password'];


  $data = 'amount=2&what=words'; // Parameters to pass to URL

  $options = [
    'method' => 'POST', // HTTP Request Type
    'data' => $data, // Parameters
    'headers' => [
      'Content-Type' => 'application/x-www-form-urlencoded',
    ],
    'context' => stream_context_create(
      [
        'ssl' => ['verify_peer'=> false ]
      ]
    )
  ];


  if (!form_get_errors()) {
    for ($i = 0; $i < $nbEnregistrements; $i++) {

      $result = drupal_http_request($apiRest, $options); // Make request
      $json_response = drupal_json_decode($result->data);


      $mail = "";
      $words = explode(' ', $json_response['feed']['lipsum']);
      foreach ($words as $word) {
        $mail .= $word;
      }

      $mail = strtolower(rtrim($mail,"."));

      $user = [
        'name' => $mail.uniqid(rand()).'@'.$domainName,
        'pass' => $password,
        'mail' => $mail.uniqid(rand()).'@'.$domainName,
        'status' => 1,

      ];

      user_save(NULL, $user);
    }

  }

}


/**
 * implements hook_submit to add taxonomy
 *
 * @param $form
 * @param $form_state
 */
function generateur_faux_contenus_taxonomy_form_submit($form, &$form_state) {
  $apiRest= variable_get('api_rest');
  $terms = array_values($form['content']['#value']);
  $nbEnregistrements = $form_state['values']['nbField'];

  $data = 'amount=3&what=words'; // Parameters to pass to URL

  $options = [
    'method' => 'POST', // HTTP Request Type
    'data' => $data, // Parameters
    'headers' => [
      'Content-Type' => 'application/x-www-form-urlencoded',
    ],
    'context' => stream_context_create(
      [
        'ssl' => ['verify_peer'=> false ]
      ]
    )
  ];


  for ($i = 0; $i < $nbEnregistrements; $i++) {

    foreach ($terms as &$value) {
      $result = drupal_http_request($apiRest, $options); // Make request
      $json_response = drupal_json_decode($result->data);

      $term = new stdClass();
      $term->name = rtrim($json_response['feed']['lipsum'],".");
      $term->vid = $value;
      taxonomy_term_save($term);
    };


  }

}


/**
 * implements hook_submit to add node
 *
 * @param $form
 * @param $form_state
 *
 * @throws \Exception
 */
function generateur_faux_contenus_nodes_form_submit($form, &$form_state) {


  $nbEnregistrements = $form_state['values']['nbField'];
  $contentTypes = array_values($form['content']['#value']);

  // Reset counter for debug information.
  $_SESSION['http_request_count'] = 0;

  $batch = generateur_faux_contenus_nodes_batch($nbEnregistrements, $contentTypes);
  batch_set($batch);

}


function generateur_faux_contenus_nodes_batch($nbEnregistrements, $contentTypes){
  global $user;

  $apiRest= variable_get('api_rest');

  $dataParagraphs = 'amount=3&what=paragraphs'; // Parameters to pass to URL

  $optionsParagraphs = [
    'method' => 'POST', // HTTP Request Type
    'data' => $dataParagraphs, // Parameters
    'headers' => [
      'Content-Type' => 'application/x-www-form-urlencoded',
    ],
    'context' => stream_context_create(
      [
        'ssl' => ['verify_peer'=> false ]
      ]
    )
  ];

  $dataWords = 'amount=3&what=words'; // Parameters to pass to URL

  $optionsWords = [
    'method' => 'POST', // HTTP Request Type
    'data' => $dataWords, // Parameters
    'headers' => [
      'Content-Type' => 'application/x-www-form-urlencoded',
    ],
    'context' => stream_context_create(
      [
        'ssl' => ['verify_peer'=> false ]
      ]
    )
  ];


  drupal_set_message(t('@num nodes added', array('@num' => $nbEnregistrements)));

  $operations = array();

  for ($i = 0; $i < $nbEnregistrements; $i++) {

    $operations[] = array(
      'generateur_faux_contenus_nodes_add_batch',
      array(
        $user,
        $apiRest,
        $contentTypes,
        $optionsParagraphs,
        $optionsWords,
        t('(Operation @operation)',
          array('@operation' => $i)),
      ),
    );
  }
  $batch = array(
    'operations' => $operations,
    //'finished' => 'batch_example_finished',
  );
  return $batch;
}


function generateur_faux_contenus_nodes_add_batch($user,$apiRest,$contentTypes,$optionsParagraphs,$optionsWords, $operation_details, &$context){
  global $language;
  foreach ($contentTypes as &$value) {
    $resultParagraphs = drupal_http_request($apiRest, $optionsParagraphs); // Make request
    $json_response_paragraphs = drupal_json_decode($resultParagraphs->data);


    $resultWords = drupal_http_request($apiRest, $optionsWords); // Make request
    $json_response_words = drupal_json_decode($resultWords->data);

    // add node properties
    $newNode = (object) NULL;
    $newNode->type = $value;
    $newNode->title = $json_response_words['feed']['lipsum'];

    $node_wrapper = entity_metadata_wrapper('node', $newNode);
    $node_wrapper->promote = 0;
    $node_wrapper->language->set('und');
    $newNode->body[$newNode->language][0]['value'] = $json_response_paragraphs['feed']['lipsum'];
    $newNode->body[$newNode->language][0]['summary'] = text_summary($json_response_paragraphs['feed']['lipsum']);
    $newNode->body[$newNode->language][0]['format'] = filter_default_format();

    $newNode->uid = $user->uid;
    $newNode->created = strtotime("now");
    $newNode->changed = strtotime("now");
    $newNode->status = 1;
    $newNode->language = $language->language;
    $newNode->comment = 0;
    $newNode->promote = 0;
    $newNode->moderate = 0;
    $newNode->sticky = 0;

    // save node
    node_save($newNode);
  }

  $context['message'] = t('Add Node') . ' ' . $operation_details;

}