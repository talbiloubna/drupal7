<?php
/**
 * @file
 * capgemini_actuality.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 * features[fe_block_boxes][] = adress
 */
function capgemini_actuality_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Adresse Capgemini';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'adress';
  $fe_block_boxes->body = '<p>&nbsp;Bâtiment B7-Parc Technopolis - Sala Al Jadida، Rocade S, Salé RABAT</p>
';

  $export['adress'] = $fe_block_boxes;

  return $export;
}
