<?php

function generateur_faux_contenus_setting() {
  $form = array();

  $form['api_rest'] = array(
    '#type' => 'textfield',
    '#title' => t('API Rest'),
    '#default_value' => variable_get('api_rest', NULL),
    '#size' => 40,
    '#maxlength' => 255,
    '#required' => TRUE,
  );

  return system_settings_form($form);
}