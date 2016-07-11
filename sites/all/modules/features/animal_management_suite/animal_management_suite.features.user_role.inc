<?php
/**
 * @file
 * animal_management_suite.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function animal_management_suite_user_default_roles() {
  $roles = array();

  // Exported role: Counselor.
  $roles['Counselor'] = array(
    'name' => 'Counselor',
    'weight' => 4,
  );

  // Exported role: Foster Parent.
  $roles['Foster Parent'] = array(
    'name' => 'Foster Parent',
    'weight' => 3,
  );

  return $roles;
}
