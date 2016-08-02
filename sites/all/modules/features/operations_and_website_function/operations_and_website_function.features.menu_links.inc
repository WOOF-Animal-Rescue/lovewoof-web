<?php
/**
 * @file
 * operations_and_website_function.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function operations_and_website_function_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:node/5.
  $menu_links['main-menu_about-us:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:node/117.
  $menu_links['main-menu_contact-us:node/117'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/117',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'identifier' => 'main-menu_contact-us:node/117',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 0,
  );
  // Exported menu link: main-menu_donate:node/2.
  $menu_links['main-menu_donate:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'Donate to WOOF Animal Rescue',
      ),
      'identifier' => 'main-menu_donate:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_resources:node/1.
  $menu_links['main-menu_resources:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(
      'identifier' => 'main-menu_resources:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-sitemap_about-us:node/5.
  $menu_links['menu-sitemap_about-us:node/5'] = array(
    'menu_name' => 'menu-sitemap',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => 'About WOOF Animal Rescue',
      ),
      'identifier' => 'menu-sitemap_about-us:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-sitemap_contact-us:<front>.
  $menu_links['menu-sitemap_contact-us:<front>'] = array(
    'menu_name' => 'menu-sitemap',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact Us',
      ),
      'identifier' => 'menu-sitemap_contact-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-sitemap_donate:node/2.
  $menu_links['menu-sitemap_donate:node/2'] = array(
    'menu_name' => 'menu-sitemap',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'Donate to WOOF Animal Rescue',
      ),
      'identifier' => 'menu-sitemap_donate:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-sitemap_events:events.
  $menu_links['menu-sitemap_events:events'] = array(
    'menu_name' => 'menu-sitemap',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Calendar of upcoming events',
      ),
      'identifier' => 'menu-sitemap_events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-sitemap_privacy-policy:node/4.
  $menu_links['menu-sitemap_privacy-policy:node/4'] = array(
    'menu_name' => 'menu-sitemap',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => 'Your privacy is important to us',
      ),
      'identifier' => 'menu-sitemap_privacy-policy:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-sitemap_resources:node/1.
  $menu_links['menu-sitemap_resources:node/1'] = array(
    'menu_name' => 'menu-sitemap',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources for animal lovers',
      ),
      'identifier' => 'menu-sitemap_resources:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Contact Us');
  t('Donate');
  t('Events');
  t('Home');
  t('Privacy Policy');
  t('Resources');

  return $menu_links;
}
