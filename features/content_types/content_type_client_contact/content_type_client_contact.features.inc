<?php
/**
 * @file
 * content_type_client_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_client_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_client_contact_node_info() {
  $items = array(
    'client_contact' => array(
      'name' => t('Client Contact'),
      'base' => 'node_content',
      'description' => t('A client\'s contact details for contract management.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
