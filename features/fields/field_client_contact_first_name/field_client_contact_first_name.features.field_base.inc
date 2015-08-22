<?php
/**
 * @file
 * field_client_contact_first_name.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function field_client_contact_first_name_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_client_contact_first_name'
  $field_bases['field_client_contact_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_client_contact_first_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
