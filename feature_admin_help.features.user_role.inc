<?php
/**
 * @file
 * feature_admin_help.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function feature_admin_help_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '4',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '3',
  );

  return $roles;
}
