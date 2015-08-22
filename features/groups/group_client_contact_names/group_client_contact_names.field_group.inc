<?php
/**
 * @file
 * group_client_contact_names.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function group_client_contact_names_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_client_contact_names|node|client_contact|form';
  $field_group->group_name = 'group_client_contact_names';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '-2',
    'children' => array(
      0 => 'field_client_contact_first_name',
      1 => 'field_client_contact_last_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-client-contact-names field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_client_contact_names|node|client_contact|form'] = $field_group;

  return $export;
}
