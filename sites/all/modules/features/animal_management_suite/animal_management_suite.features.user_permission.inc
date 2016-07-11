<?php
/**
 * @file
 * animal_management_suite.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function animal_management_suite_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create animal content'.
  $permissions['create animal content'] = array(
    'name' => 'create animal content',
    'roles' => array(
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create foster_parent content'.
  $permissions['create foster_parent content'] = array(
    'name' => 'create foster_parent content',
    'roles' => array(
      'Counselor' => 'Counselor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fundraiser content'.
  $permissions['create fundraiser content'] = array(
    'name' => 'create fundraiser content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create success_story content'.
  $permissions['create success_story content'] = array(
    'name' => 'create success_story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any animal content'.
  $permissions['delete any animal content'] = array(
    'name' => 'delete any animal content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any foster_parent content'.
  $permissions['delete any foster_parent content'] = array(
    'name' => 'delete any foster_parent content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any fundraiser content'.
  $permissions['delete any fundraiser content'] = array(
    'name' => 'delete any fundraiser content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any success_story content'.
  $permissions['delete any success_story content'] = array(
    'name' => 'delete any success_story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own animal content'.
  $permissions['delete own animal content'] = array(
    'name' => 'delete own animal content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own foster_parent content'.
  $permissions['delete own foster_parent content'] = array(
    'name' => 'delete own foster_parent content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own fundraiser content'.
  $permissions['delete own fundraiser content'] = array(
    'name' => 'delete own fundraiser content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own success_story content'.
  $permissions['delete own success_story content'] = array(
    'name' => 'delete own success_story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in adoption_status'.
  $permissions['delete terms in adoption_status'] = array(
    'name' => 'delete terms in adoption_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in animal_types'.
  $permissions['delete terms in animal_types'] = array(
    'name' => 'delete terms in animal_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in breeds'.
  $permissions['delete terms in breeds'] = array(
    'name' => 'delete terms in breeds',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in genders'.
  $permissions['delete terms in genders'] = array(
    'name' => 'delete terms in genders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any animal content'.
  $permissions['edit any animal content'] = array(
    'name' => 'edit any animal content',
    'roles' => array(
      'Counselor' => 'Counselor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any foster_parent content'.
  $permissions['edit any foster_parent content'] = array(
    'name' => 'edit any foster_parent content',
    'roles' => array(
      'Counselor' => 'Counselor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fundraiser content'.
  $permissions['edit any fundraiser content'] = array(
    'name' => 'edit any fundraiser content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any success_story content'.
  $permissions['edit any success_story content'] = array(
    'name' => 'edit any success_story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own animal content'.
  $permissions['edit own animal content'] = array(
    'name' => 'edit own animal content',
    'roles' => array(
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own foster_parent content'.
  $permissions['edit own foster_parent content'] = array(
    'name' => 'edit own foster_parent content',
    'roles' => array(
      'Counselor' => 'Counselor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fundraiser content'.
  $permissions['edit own fundraiser content'] = array(
    'name' => 'edit own fundraiser content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own success_story content'.
  $permissions['edit own success_story content'] = array(
    'name' => 'edit own success_story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in adoption_status'.
  $permissions['edit terms in adoption_status'] = array(
    'name' => 'edit terms in adoption_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in animal_types'.
  $permissions['edit terms in animal_types'] = array(
    'name' => 'edit terms in animal_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in breeds'.
  $permissions['edit terms in breeds'] = array(
    'name' => 'edit terms in breeds',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Operations' => 'Operations',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in genders'.
  $permissions['edit terms in genders'] = array(
    'name' => 'edit terms in genders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
