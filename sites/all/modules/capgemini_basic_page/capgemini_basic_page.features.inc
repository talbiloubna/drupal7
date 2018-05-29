<?php
/**
 * @file
 * capgemini_basic_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function capgemini_basic_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function capgemini_basic_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function capgemini_basic_page_node_info() {
  $items = array(
    'capgemini_basic_page' => array(
      'name' => t('Capgemini Basic Page'),
      'base' => 'node_content',
      'description' => t('Capgemini basic page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
