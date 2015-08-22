<?php
/**
 * @file
 * content_type_client.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_client_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_client_node_info() {
  $items = array(
    'client' => array(
      'name' => t('Client'),
      'base' => 'node_content',
      'description' => t('A client information for contract management.'),
      'has_title' => '1',
      'title_label' => t('Client'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
