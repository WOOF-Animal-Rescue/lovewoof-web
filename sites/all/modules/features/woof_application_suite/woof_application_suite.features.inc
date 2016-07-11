<?php
/**
 * @file
 * woof_application_suite.features.inc
 */

/**
 * Implements hook_views_api().
 */
function woof_application_suite_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function woof_application_suite_node_info() {
  $items = array(
    'animal_request' => array(
      'name' => t('Animal Request'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Request Name'),
      'help' => '',
    ),
    'application' => array(
      'name' => t('Application'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Application Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
