<?php
/**
 * @file
 * field_client_address.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function field_client_address_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_client_address'
  $field_bases['field_client_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_client_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  return $field_bases;
}
