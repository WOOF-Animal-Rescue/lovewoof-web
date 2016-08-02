<?php
/**
 * @file
 * animal_management_suite.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function animal_management_suite_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-sitemap.
  $menus['menu-sitemap'] = array(
    'menu_name' => 'menu-sitemap',
    'title' => 'Sitemap',
    'description' => 'Footer sitemap',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer sitemap');
  t('Main menu');
  t('Management');
  t('Sitemap');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');

  return $menus;
}
