<?php
/**
 * @file
 * group_client_other_info.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function group_client_other_info_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
