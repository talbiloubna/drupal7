<?php
/**
 * @file
 * capgemini_actuality.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 * features[language][] = en
 */
function capgemini_actuality_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => 0,
  );
  return $languages;
}
