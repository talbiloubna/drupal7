<?php
/**
 * @file
 * capgemini_actuality.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 * features[field_base][] = field_date_actualite
 */
function capgemini_actuality_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_date_actualite'.
  $field_bases['field_date_actualite'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date_actualite',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'repeat' => 0,
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  return $field_bases;
}
