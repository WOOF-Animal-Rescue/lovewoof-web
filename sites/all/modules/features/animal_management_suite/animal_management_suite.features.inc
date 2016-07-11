<?php
/**
 * @file
 * animal_management_suite.features.inc
 */

/**
 * Implements hook_views_api().
 */
function animal_management_suite_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function animal_management_suite_node_info() {
  $items = array(
    'animal' => array(
      'name' => t('Animal'),
      'base' => 'node_content',
      'description' => t('Add a new animal that is a part of the WOOF Family. Make sure to indicate as much information as possible, as this will help them get adopted faster!'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'foster_parent' => array(
      'name' => t('Foster Parent'),
      'base' => 'node_content',
      'description' => t('Describes a Foster Parent for the WOOF organization'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'fundraiser' => array(
      'name' => t('Fundraiser'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Fundraiser Name'),
      'help' => '',
    ),
    'success_story' => array(
      'name' => t('Success Story'),
      'base' => 'node_content',
      'description' => t('A short success story with a picture of an animal that was successfully rescued and adopted.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
