<?php
/**
 * @file
 * field_client_contacts.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function field_client_contacts_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_client_contacts'
  $field_bases['field_client_contacts'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_client_contacts',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'client_contact' => 'client_contact',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
