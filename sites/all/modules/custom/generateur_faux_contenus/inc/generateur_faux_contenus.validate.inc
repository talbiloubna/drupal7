<?php


/**
 * validate textField for fields number
 */
function generateur_faux_contenus_user_form_validate($form, &$form_state) {
  if (!is_numeric($form_state['values']['nbField'])) {
    form_set_error('nbField', t('Field number must be numeric'));
  }
}