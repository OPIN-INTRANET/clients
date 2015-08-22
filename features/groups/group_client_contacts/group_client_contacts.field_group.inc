<?php
/**
 * @file
 * group_client_contacts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function group_client_contacts_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_client_contacts|node|client|form';
  $field_group->group_name = 'group_client_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '2',
    'children' => array(
      0 => 'field_client_contacts',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-client-contacts field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_client_contacts|node|client|form'] = $field_group;

  return $export;
}
