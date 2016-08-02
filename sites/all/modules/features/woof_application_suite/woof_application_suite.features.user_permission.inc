<?php
/**
 * @file
 * woof_application_suite.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function woof_application_suite_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create animal_request content'.
  $permissions['create animal_request content'] = array(
    'name' => 'create animal_request content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create application content'.
  $permissions['create application content'] = array(
    'name' => 'create application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any animal_request content'.
  $permissions['delete any animal_request content'] = array(
    'name' => 'delete any animal_request content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any application content'.
  $permissions['delete any application content'] = array(
    'name' => 'delete any application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own animal_request content'.
  $permissions['delete own animal_request content'] = array(
    'name' => 'delete own animal_request content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own application content'.
  $permissions['delete own application content'] = array(
    'name' => 'delete own application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in application_statuses'.
  $permissions['delete terms in application_statuses'] = array(
    'name' => 'delete terms in application_statuses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any animal_request content'.
  $permissions['edit any animal_request content'] = array(
    'name' => 'edit any animal_request content',
    'roles' => array(
      'Counselor' => 'Counselor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any application content'.
  $permissions['edit any application content'] = array(
    'name' => 'edit any application content',
    'roles' => array(
      'Counselor' => 'Counselor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own animal_request content'.
  $permissions['edit own animal_request content'] = array(
    'name' => 'edit own animal_request content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own application content'.
  $permissions['edit own application content'] = array(
    'name' => 'edit own application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in application_statuses'.
  $permissions['edit terms in application_statuses'] = array(
    'name' => 'edit terms in application_statuses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
