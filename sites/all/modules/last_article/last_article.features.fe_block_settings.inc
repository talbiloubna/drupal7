<?php
/**
 * @file
 * last_article.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function last_article_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-last_article-block'] = array(
    'cache' => -1,
    'delta' => 'last_article-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'danblog' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'danblog',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
  );

  return $export;
}
