<?php
/**
 * @file
 * capgemini_basic_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function capgemini_basic_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-capgemini_basic_page-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'capgemini_basic_page-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'commerce_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'commerce_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
