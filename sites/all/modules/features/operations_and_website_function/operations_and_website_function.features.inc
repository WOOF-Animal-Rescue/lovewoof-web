<?php
/**
 * @file
 * operations_and_website_function.features.inc
 */

/**
 * Implements hook_views_api().
 */
function operations_and_website_function_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function operations_and_website_function_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An Event content type that allows for recording of all event that the organization holds that need to be publicly viewable'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a piece of content that describes a partner or sponsor of ours. This could also include a code snippet they provide. '),
      'has_title' => '1',
      'title_label' => t('Partner Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
