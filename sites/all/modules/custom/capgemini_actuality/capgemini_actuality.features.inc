<?php
/**
 * @file
 * capgemini_actuality.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function capgemini_actuality_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function capgemini_actuality_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function capgemini_actuality_node_info() {
  $items = array(
    'actuality' => array(
      'name' => t('Actuality'),
      'base' => 'node_content',
      'description' => t('Actualités'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
