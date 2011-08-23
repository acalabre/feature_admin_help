<?php
/**
 * @file
 * feature_admin_help.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function feature_admin_help_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function feature_admin_help_node_info() {
  $items = array(
    'admin_faq' => array(
      'name' => t('Admin FAQ'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
