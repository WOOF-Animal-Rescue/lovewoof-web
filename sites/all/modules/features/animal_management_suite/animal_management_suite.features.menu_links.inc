<?php
/**
 * @file
 * animal_management_suite.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function animal_management_suite_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_our-animals:our-animals.
  $menu_links['main-menu_our-animals:our-animals'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'our-animals',
    'router_path' => 'our-animals',
    'link_title' => 'Our Animals',
    'options' => array(
      'identifier' => 'main-menu_our-animals:our-animals',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_success-stories:success-stories.
  $menu_links['main-menu_success-stories:success-stories'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'success-stories',
    'router_path' => 'success-stories',
    'link_title' => 'Success Stories',
    'options' => array(
      'attributes' => array(
        'title' => 'Success Stories of some of our rescued animals',
      ),
      'identifier' => 'main-menu_success-stories:success-stories',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: management_manage-animals:manage-animals.
  $menu_links['management_manage-animals:manage-animals'] = array(
    'menu_name' => 'management',
    'link_path' => 'manage-animals',
    'router_path' => 'manage-animals',
    'link_title' => 'Manage Animals',
    'options' => array(
      'identifier' => 'management_manage-animals:manage-animals',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: menu-sitemap_our-animals:<front>.
  $menu_links['menu-sitemap_our-animals:<front>'] = array(
    'menu_name' => 'menu-sitemap',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Our Animals',
    'options' => array(
      'attributes' => array(
        'title' => 'Browse the animals who are currently looking for their forever home',
      ),
      'identifier' => 'menu-sitemap_our-animals:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-sitemap_success-stories:success-stories.
  $menu_links['menu-sitemap_success-stories:success-stories'] = array(
    'menu_name' => 'menu-sitemap',
    'link_path' => 'success-stories',
    'router_path' => 'success-stories',
    'link_title' => 'Success Stories',
    'options' => array(
      'attributes' => array(
        'title' => 'Success Stories about our animals finding their forever homes!',
      ),
      'identifier' => 'menu-sitemap_success-stories:success-stories',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Manage Animals');
  t('Our Animals');
  t('Success Stories');

  return $menu_links;
}
