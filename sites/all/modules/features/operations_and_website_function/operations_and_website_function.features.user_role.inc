<?php
/**
 * @file
 * operations_and_website_function.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function operations_and_website_function_user_default_roles() {
  $roles = array();

  // Exported role: Content Editor.
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => 7,
  );

  // Exported role: Operations.
  $roles['Operations'] = array(
    'name' => 'Operations',
    'weight' => 6,
  );

  return $roles;
}
