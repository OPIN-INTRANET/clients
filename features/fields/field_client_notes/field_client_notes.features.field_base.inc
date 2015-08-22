<?php
/**
 * @file
 * field_client_notes.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function field_client_notes_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_client_notes'
  $field_bases['field_client_notes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_client_notes',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
