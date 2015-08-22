<?php
/**
 * @file
 * group_client_contact_info.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function group_client_contact_info_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
