<?php
/**
 * @file
 * woof_application_suite.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function woof_application_suite_taxonomy_default_vocabularies() {
  return array(
    'application_statuses' => array(
      'name' => 'Application Status',
      'machine_name' => 'application_statuses',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
