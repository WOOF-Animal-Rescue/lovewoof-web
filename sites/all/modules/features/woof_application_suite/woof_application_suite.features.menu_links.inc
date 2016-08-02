<?php
/**
 * @file
 * woof_application_suite.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function woof_application_suite_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_animal-request:node/add/animal-request.
  $menu_links['navigation_animal-request:node/add/animal-request'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/animal-request',
    'router_path' => 'node/add/animal-request',
    'link_title' => 'Animal Request',
    'options' => array(
      'identifier' => 'navigation_animal-request:node/add/animal-request',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_application:node/add/application.
  $menu_links['navigation_application:node/add/application'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/application',
    'router_path' => 'node/add/application',
    'link_title' => 'Application',
    'options' => array(
      'identifier' => 'navigation_application:node/add/application',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Animal Request');
  t('Application');

  return $menu_links;
}
