<?php

/**
 * @file
 * Handles the form submission of the customer survey form
 */

/**
 * Implements hook_form().
 *
 * @return array $form
 */
function generateur_faux_contenus_form($form, &$form_state) {

  $form = [];

  $options = [];
  $options['Node'] = 'Node';
  $options['User'] = 'User';
  $options['Taxonomie'] = 'Taxonomie';

  $form['entity'] = [
    '#title' => t('Entity Type'),
    '#description' => '',
    '#type' => 'select',
    '#name' => 'entity',
    '#required' => TRUE,
    '#options' => $options,
    '#ajax' => [
      'callback' => 'generateur_faux_contenus_ajax_callback',
      'wrapper' => 'ajax-example-form-node',
      'effect' => 'fade',
    ],
  ];

  $form['container'] = [
    '#prefix' => '<div id="ajax-example-form-node">',
    '#suffix' => '</div>',

  ];

  $form['container-domain'] = [
    '#prefix' => '<div id="ajax-domain-name">',
    '#suffix' => '</div>',

  ];

  $form['container-password'] = [
    '#prefix' => '<div id="ajax-password">',
    '#suffix' => '</div>',

  ];

  return $form;
}


/**
 * generate form for node
 *
 * @return array
 */
function generateur_faux_contenus_node_form() {

  $types = node_type_get_types();
  $checkboxes = [];
  foreach ($types as $val) {
    $checkboxes[$val->type] = $val->name;
  }

  $form = [];
  $form['content'] = [
    '#prefix' => '<div id="ajax-example-form-node">',
    '#suffix' => '</div>',
    '#type' => 'checkboxes',
    '#options' => $checkboxes,
    '#default_value' => 0,
    '#description' => t(''),
  ];

  $form['nbField'] = [
    '#prefix' => '<div id="ajax-example-form-node">',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => 'Nb Enregistrements ',
    '#default_value' => '',
    '#size' => 20,
    '#maxlength' => 4,
    '#required' => TRUE, //make this field required
  ];


  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Add Content'),
    '#ajax' => [
      'callback' => '_submit',
      'wrapper' => 'demo-demo-form',
      'method' => 'replace',
      'effect' => 'fade',
    ],

  ];


  return $form;
}


/**
 * generate form for user
 *
 * @return array
 */

function generateur_faux_contenus_user_form() {


  $form['nbField'] = [
    '#prefix' => '<div id="ajax-example-form-node">',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => 'Nb Enregistrements',
    '#default_value' => '',
    '#size' => 20,
    '#maxlength' => 4,
    '#required' => TRUE, //make this field required
  ];



  $form['domainName'] = [
    '#prefix' => '<div id="ajax-example-form-node">',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => t('Domain Name'),
    '#default_value' => '',
    '#size' => 20,
    '#maxlength' => 255,
    '#required' => TRUE, //make this field required
  ];

  $form['password'] = [
    '#prefix' => '<div id="ajax-example-form-node">',
    '#suffix' => '</div>',
    '#type' => 'password_confirm',
    '#required' => TRUE ,
    '#size' => 25,

  ];

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Add Users'),
    '#ajax' => [
      'callback' => '_submit',
      'wrapper' => 'demo-demo-form',
      'method' => 'replace',
      'effect' => 'fade',
    ],

  ];

  return $form;
}


/**
 * generate form for taxonomy
 *
 * @return array
 */
function generateur_faux_contenus_taxonomy_form() {
  $names = taxonomy_vocabulary_load_multiple(FALSE, []);

  $checkboxes = [];
  foreach ($names as $val) {
    $checkboxes[$val->vid] = $val->name;
  }


  $form = [];
  $form['content'] = [
    '#prefix' => '<div id="ajax-example-form-node">',
    '#suffix' => '</div>',
    '#type' => 'checkboxes',
    '#options' => $checkboxes,
    '#default_value' => 0,
    '#description' => t(''),
  ];

  $form['nbField'] = [
    '#prefix' => '<div id="ajax-example-form-node">',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => 'Nb Enregistrements',
    '#default_value' => '',
    '#size' => 20,
    '#maxlength' => 4,
    '#required' => TRUE, //make this field required
  ];

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Add Taxonomy'),
    '#ajax' => [
      'callback' => '_submit',
      'wrapper' => 'demo-demo-form',
      'method' => 'replace',
      'effect' => 'fade',
    ],

  ];


  return $form;
}


/**
 * generate form for node
 *
 * @return array
 */
function generateur_faux_contenus_nodes_form() {

  $types = node_type_get_types();
  $checkboxes = [];
  foreach ($types as $val) {
    $checkboxes[$val->type] = $val->name;
  }

  $form = [];
  $form['content'] = [
    '#prefix' => '<div id="ajax-example-form-node">',
    '#suffix' => '</div>',
    '#type' => 'checkboxes',
    '#options' => $checkboxes,
    '#default_value' => 0,
    '#description' => t(''),
  ];

  $form['nbField'] = [
    '#prefix' => '<div id="ajax-example-form-node">',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => 'Nb Enregistrements ',
    '#default_value' => '',
    '#size' => 20,
    '#maxlength' => 4,
    '#required' => TRUE, //make this field required
  ];


  $form['submit_button'] = array(
    '#type' => 'submit',
    '#value' => t('Add Content!'),
  );

  return $form;
}

