<?php
/**
 * @file
 * field_client_contact_email.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function field_client_contact_email_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_client_contact_email'
  $field_bases['field_client_contact_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_client_contact_email',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  return $field_bases;
}
