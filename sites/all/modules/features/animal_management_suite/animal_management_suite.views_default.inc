<?php
/**
 * @file
 * animal_management_suite.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function animal_management_suite_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'active_foster_parents_references';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Active Foster Parents References';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Active Foster Parents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'foster_parent' => 'foster_parent',
  );
  /* Filter criterion: Content: Is Active (field_is_active) */
  $handler->display->display_options['filters']['field_is_active_value']['id'] = 'field_is_active_value';
  $handler->display->display_options['filters']['field_is_active_value']['table'] = 'field_data_field_is_active';
  $handler->display->display_options['filters']['field_is_active_value']['field'] = 'field_is_active_value';
  $handler->display->display_options['filters']['field_is_active_value']['value'] = array(
    1 => '1',
  );

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Active Foster Parents';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['active_foster_parents_references'] = $view;

  $view = new view();
  $view->name = 'active_fundraisers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Active Fundraisers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Active Fundraisers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_effective_fundraiser_url' => 0,
    'field_profile_picture' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_effective_fundraiser_url' => 0,
    'field_profile_picture' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Fundraiser (field_fundraiser) */
  $handler->display->display_options['relationships']['field_fundraiser_nid']['id'] = 'field_fundraiser_nid';
  $handler->display->display_options['relationships']['field_fundraiser_nid']['table'] = 'field_data_field_fundraiser';
  $handler->display->display_options['relationships']['field_fundraiser_nid']['field'] = 'field_fundraiser_nid';
  $handler->display->display_options['relationships']['field_fundraiser_nid']['label'] = 'Fundraiser';
  $handler->display->display_options['relationships']['field_fundraiser_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_fundraiser_nid']['delta'] = '-1';
  /* Field: Node ID (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Effective Fundraiser URL (hidden) */
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['id'] = 'field_effective_fundraiser_url';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['table'] = 'field_data_field_effective_fundraiser_url';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['field'] = 'field_effective_fundraiser_url';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['ui_name'] = 'Effective Fundraiser URL (hidden)';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['label'] = '';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['element_default_classes'] = FALSE;
  /* Field: Fundraiser Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_fundraiser_nid';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Fundraiser Title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_effective_fundraiser_url]';
  $handler->display->display_options['fields']['title_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'animal-spotlight-field animal-spotlight-title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Profile Pic */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['ui_name'] = 'Profile Pic';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_picture']['element_class'] = 'animal-spotlight-field animal-spotlight-thumbnail';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['relationship'] = 'field_fundraiser_nid';
  $handler->display->display_options['fields']['field_short_description']['ui_name'] = 'Short Description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_short_description']['element_class'] = 'animal-spotlight-field animal-spotlight-blurb';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_description']['element_default_classes'] = FALSE;
  /* Field: Donate Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Donate Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Donate Now';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_effective_fundraiser_url]';
  $handler->display->display_options['fields']['nothing']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'animal-spotlight-apply button-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'animal' => 'animal',
  );
  /* Filter criterion: Content: Is Active (field_is_active) */
  $handler->display->display_options['filters']['field_is_active_value']['id'] = 'field_is_active_value';
  $handler->display->display_options['filters']['field_is_active_value']['table'] = 'field_data_field_is_active';
  $handler->display->display_options['filters']['field_is_active_value']['field'] = 'field_is_active_value';
  $handler->display->display_options['filters']['field_is_active_value']['relationship'] = 'field_fundraiser_nid';
  $handler->display->display_options['filters']['field_is_active_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['active_fundraisers'] = $view;

  $view = new view();
  $view->name = 'animal_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Animal Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Animal Profile';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'WOOF! No animal has been selected to view a profile for!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Adoption Status';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'adoption_status' => 'adoption_status',
    'animal_types' => 0,
    'dog_breeds' => 0,
    'gender' => 0,
    'tags' => 0,
    'event_calendar_status' => 0,
  );
  /* Field: Node ID (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Rescue ID - RAW (hidden) */
  $handler->display->display_options['fields']['field_rescue_id']['id'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['field'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['ui_name'] = 'Rescue ID - RAW (hidden)';
  $handler->display->display_options['fields']['field_rescue_id']['label'] = '';
  $handler->display->display_options['fields']['field_rescue_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rescue_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rescue_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rescue_id']['type'] = 'computed_field_computed_value';
  /* Field: Links Subview */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Links Subview';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_type'] = 'div';
  $handler->display->display_options['fields']['view']['element_class'] = 'animal-profile-actions';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'our_animals_details_links_subview';
  $handler->display->display_options['fields']['view']['arguments'] = '[%field_rescue_id]';
  /* Field: Name (hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Name (hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Edit Link (contextual) */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['ui_name'] = 'Edit Link (contextual)';
  $handler->display->display_options['fields']['nothing_6']['label'] = '';
  $handler->display->display_options['fields']['nothing_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_6']['alter']['text'] = 'Edit [title]';
  $handler->display->display_options['fields']['nothing_6']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_6']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nothing_6']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'nothing_6' => 'nothing_6',
    'nid' => 0,
    'title' => 0,
  );
  /* Field: Adoption Status (display text) */
  $handler->display->display_options['fields']['field_displayed_text']['id'] = 'field_displayed_text';
  $handler->display->display_options['fields']['field_displayed_text']['table'] = 'field_data_field_displayed_text';
  $handler->display->display_options['fields']['field_displayed_text']['field'] = 'field_displayed_text';
  $handler->display->display_options['fields']['field_displayed_text']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_displayed_text']['ui_name'] = 'Adoption Status (display text)';
  $handler->display->display_options['fields']['field_displayed_text']['label'] = '';
  $handler->display->display_options['fields']['field_displayed_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_displayed_text']['element_class'] = 'profile-status-header animal-profile-field animal-profile-adoption-status';
  $handler->display->display_options['fields']['field_displayed_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_displayed_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_displayed_text']['element_default_classes'] = FALSE;
  /* Field: Details Header */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Details Header';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Details';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'animal-profile-header details-header';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Details Subview */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Details Subview';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_1']['element_class'] = 'animal-profile-details';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_1']['view'] = 'our_animals_details_subview';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[%field_rescue_id]';
  /* Field: Bio Header */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Bio Header';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Bio';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'animal-profile-header';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Bio */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['ui_name'] = 'Bio';
  $handler->display->display_options['fields']['field_bio']['label'] = '';
  $handler->display->display_options['fields']['field_bio']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bio']['element_class'] = 'animal-profile-field animal-profile-bio';
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['element_default_classes'] = FALSE;
  /* Field: Pictures Header */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Pictures Header';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Pictures';
  $handler->display->display_options['fields']['nothing_3']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_class'] = 'animal-profile-header';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Field: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['ui_name'] = 'Images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_images']['element_class'] = 'animal-profile-images';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'lightbox2__lightbox__thumbnail__original';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_images']['separator'] = '   ';
  /* Field: Videos Header */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Videos Header';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Videos';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_class'] = 'animal-profile-header';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: YouTube Video */
  $handler->display->display_options['fields']['field_youtube_video']['id'] = 'field_youtube_video';
  $handler->display->display_options['fields']['field_youtube_video']['table'] = 'field_data_field_youtube_video';
  $handler->display->display_options['fields']['field_youtube_video']['field'] = 'field_youtube_video';
  $handler->display->display_options['fields']['field_youtube_video']['ui_name'] = 'YouTube Video';
  $handler->display->display_options['fields']['field_youtube_video']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_video']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_youtube_video']['element_class'] = 'animal-profile-field animal-profile-youtube-field animal-profile-youtube';
  $handler->display->display_options['fields']['field_youtube_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_video']['empty'] = '<i>There are no videos for this animal.</i>';
  $handler->display->display_options['fields']['field_youtube_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_video']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_youtube_video']['settings'] = array(
    'youtube_size' => 'custom',
    'youtube_width' => '300',
    'youtube_height' => '210',
    'youtube_autoplay' => 0,
    'youtube_showinfo' => 0,
    'youtube_controls' => 1,
    'youtube_autohide' => 1,
    'youtube_iv_load_policy' => 1,
  );
  /* Field: Subview (Composite Animal Requests) */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['ui_name'] = 'Subview (Composite Animal Requests)';
  $handler->display->display_options['fields']['view_2']['label'] = '';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['view'] = 'composite_animal_requests';
  $handler->display->display_options['fields']['view_2']['arguments'] = '[%nid]';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = 'if($argument) { // Check that argument is present
    $myNode = node_load($argument); // Load node based on NID
    $myNodeRendered = node_view($myNode);
    $animalName = $myNode ->title; // Parse node data to get title
    $rescueID = $myNodeRendered[\'field_rescue_id\'][0][\'#markup\'];
    $myTitle = $animalName . \' (\' . $rescueID . \')\'; // Change the view\'s page title to computed title
    $handler->options[\'title\'] =  $myTitle;
}
return true;';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'animal' => 'animal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Animal Profile */
  $handler = $view->new_display('page', 'Animal Profile', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['path'] = 'animal-profile';
  $handler->display->display_options['menu']['title'] = 'Animal Profile';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;
  $export['animal_profile'] = $view;

  $view = new view();
  $view->name = 'animal_spotlight';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Animal Spotlight';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Animal Spotlight';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class'] = 'animal-slide';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_images' => 0,
    'field_bio' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_images' => 0,
    'field_bio' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_on_click'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Adoption Status';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'adoption_status' => 'adoption_status',
    'animal_types' => 0,
    'breeds' => 0,
    'genders' => 0,
    'tags' => 0,
  );
  /* Field: Node ID (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'animal-profile/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'animal-spotlight-field animal-spotlight-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Profile Pic */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['ui_name'] = 'Profile Pic';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_picture']['element_class'] = 'animal-spotlight-field animal-spotlight-thumbnail';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Short Blurb */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['ui_name'] = 'Short Blurb';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_short_description']['element_class'] = 'animal-spotlight-field animal-spotlight-blurb';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_short_description']['type'] = 'text_plain';
  /* Field: Apply Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Apply Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Adopt Me!';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'apply?nid=[nid]&i=Adopt';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'animal-spotlight-apply button-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Row Weight (field_row_weight) */
  $handler->display->display_options['sorts']['field_row_weight_value']['id'] = 'field_row_weight_value';
  $handler->display->display_options['sorts']['field_row_weight_value']['table'] = 'field_data_field_row_weight';
  $handler->display->display_options['sorts']['field_row_weight_value']['field'] = 'field_row_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'animal' => 'animal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Is Visible */
  $handler->display->display_options['filters']['field_visible_value']['id'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['table'] = 'field_data_field_visible';
  $handler->display->display_options['filters']['field_visible_value']['field'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['ui_name'] = 'Is Visible';
  $handler->display->display_options['filters']['field_visible_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_visible_value']['group'] = 1;
  /* Filter criterion: Taxonomy term: Visible To Public (field_visible_to_public) */
  $handler->display->display_options['filters']['field_visible_to_public_value']['id'] = 'field_visible_to_public_value';
  $handler->display->display_options['filters']['field_visible_to_public_value']['table'] = 'field_data_field_visible_to_public';
  $handler->display->display_options['filters']['field_visible_to_public_value']['field'] = 'field_visible_to_public_value';
  $handler->display->display_options['filters']['field_visible_to_public_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_visible_to_public_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_visible_to_public_value']['group'] = 1;
  /* Filter criterion: Taxonomy term: Can be Applied For (field_can_be_applied_for) */
  $handler->display->display_options['filters']['field_can_be_applied_for_value']['id'] = 'field_can_be_applied_for_value';
  $handler->display->display_options['filters']['field_can_be_applied_for_value']['table'] = 'field_data_field_can_be_applied_for';
  $handler->display->display_options['filters']['field_can_be_applied_for_value']['field'] = 'field_can_be_applied_for_value';
  $handler->display->display_options['filters']['field_can_be_applied_for_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_can_be_applied_for_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_can_be_applied_for_value']['group'] = 1;

  /* Display: Animal Spotlight */
  $handler = $view->new_display('block', 'Animal Spotlight', 'block');
  $handler->display->display_options['block_description'] = 'Animal Spotlight';
  $export['animal_spotlight'] = $view;

  $view = new view();
  $view->name = 'available_animals_select_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Animals Select List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Adoption Status';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'adoption_status' => 'adoption_status',
    'animal_types' => 0,
    'breeds' => 0,
    'genders' => 0,
    'tags' => 0,
  );
  /* Field: Content: Rescue ID */
  $handler->display->display_options['fields']['field_rescue_id']['id'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['field'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['label'] = '';
  $handler->display->display_options['fields']['field_rescue_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rescue_id']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'animal' => 'animal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Visible (field_visible) */
  $handler->display->display_options['filters']['field_visible_value']['id'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['table'] = 'field_data_field_visible';
  $handler->display->display_options['filters']['field_visible_value']['field'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_visible_value']['group'] = 1;
  $export['available_animals_select_list'] = $view;

  $view = new view();
  $view->name = 'available_animals_select_options';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Animals Webform Options';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Adoption Status Taxonomy */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['ui_name'] = 'Adoption Status Taxonomy';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Adoption Status';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'adoption_status' => 'adoption_status',
    'animal_types' => 0,
    'breeds' => 0,
    'genders' => 0,
    'tags' => 0,
  );
  /* Field: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Animal Name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Animal Name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Row Weight (field_row_weight) */
  $handler->display->display_options['sorts']['field_row_weight_value']['id'] = 'field_row_weight_value';
  $handler->display->display_options['sorts']['field_row_weight_value']['table'] = 'field_data_field_row_weight';
  $handler->display->display_options['sorts']['field_row_weight_value']['field'] = 'field_row_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'animal' => 'animal',
  );
  /* Filter criterion: Content: Visible (field_visible) */
  $handler->display->display_options['filters']['field_visible_value']['id'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['table'] = 'field_data_field_visible';
  $handler->display->display_options['filters']['field_visible_value']['field'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Taxonomy term: Visible To Public (field_visible_to_public) */
  $handler->display->display_options['filters']['field_visible_to_public_value']['id'] = 'field_visible_to_public_value';
  $handler->display->display_options['filters']['field_visible_to_public_value']['table'] = 'field_data_field_visible_to_public';
  $handler->display->display_options['filters']['field_visible_to_public_value']['field'] = 'field_visible_to_public_value';
  $handler->display->display_options['filters']['field_visible_to_public_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_visible_to_public_value']['value'] = array(
    1 => '1',
  );

  /* Display: Webform Options */
  $handler = $view->new_display('webform_select', 'Webform Options', 'webform_select_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['available_animals_select_options'] = $view;

  $view = new view();
  $view->name = 'cat_breeds';
  $view->description = 'Shows the available breeds for cats';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Cat Breeds';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'breeds' => 'breeds',
  );
  /* Filter criterion: Taxonomy term: Animal Type (field_animal_type) */
  $handler->display->display_options['filters']['field_animal_type_tid']['id'] = 'field_animal_type_tid';
  $handler->display->display_options['filters']['field_animal_type_tid']['table'] = 'field_data_field_animal_type';
  $handler->display->display_options['filters']['field_animal_type_tid']['field'] = 'field_animal_type_tid';
  $handler->display->display_options['filters']['field_animal_type_tid']['value'] = array(
    214 => '214',
  );
  $handler->display->display_options['filters']['field_animal_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_animal_type_tid']['vocabulary'] = 'animal_types';

  /* Display: Term Reference */
  $handler = $view->new_display('term_reference', 'Term Reference', 'term_reference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['cat_breeds'] = $view;

  $view = new view();
  $view->name = 'dog_breeds';
  $view->description = 'Shows the available breeds for dogs';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Dog Breeds';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'breeds' => 'breeds',
  );
  /* Filter criterion: Taxonomy term: Animal Type (field_animal_type) */
  $handler->display->display_options['filters']['field_animal_type_tid']['id'] = 'field_animal_type_tid';
  $handler->display->display_options['filters']['field_animal_type_tid']['table'] = 'field_data_field_animal_type';
  $handler->display->display_options['filters']['field_animal_type_tid']['field'] = 'field_animal_type_tid';
  $handler->display->display_options['filters']['field_animal_type_tid']['value'] = array(
    23 => '23',
  );
  $handler->display->display_options['filters']['field_animal_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_animal_type_tid']['vocabulary'] = 'animal_types';

  /* Display: Term Reference */
  $handler = $view->new_display('term_reference', 'Term Reference', 'term_reference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['dog_breeds'] = $view;

  $view = new view();
  $view->name = 'our_animals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Our Animals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Animals';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Read more...';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Thank you for your interest in rescuing an animal!

Unfortunately, we currently don\'t have any animals available for adoption today. Please check back later!

If you are interested in fostering, please use the <strong><a href="/contact">Contact Us</a></strong> form and mention your interest. Once we receive your interest, we\'ll reach out to talk with you about how you can get involved!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Adoption Status (field_adoption_status) */
  $handler->display->display_options['relationships']['field_adoption_status_tid']['id'] = 'field_adoption_status_tid';
  $handler->display->display_options['relationships']['field_adoption_status_tid']['table'] = 'field_data_field_adoption_status';
  $handler->display->display_options['relationships']['field_adoption_status_tid']['field'] = 'field_adoption_status_tid';
  $handler->display->display_options['relationships']['field_adoption_status_tid']['label'] = 'Adoption Status Taxonomy';
  $handler->display->display_options['relationships']['field_adoption_status_tid']['required'] = TRUE;
  /* Field: Banner Text */
  $handler->display->display_options['fields']['field_banner_text']['id'] = 'field_banner_text';
  $handler->display->display_options['fields']['field_banner_text']['table'] = 'field_data_field_banner_text';
  $handler->display->display_options['fields']['field_banner_text']['field'] = 'field_banner_text';
  $handler->display->display_options['fields']['field_banner_text']['relationship'] = 'field_adoption_status_tid';
  $handler->display->display_options['fields']['field_banner_text']['ui_name'] = 'Banner Text';
  $handler->display->display_options['fields']['field_banner_text']['label'] = '';
  $handler->display->display_options['fields']['field_banner_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_banner_text']['element_class'] = 'our-animals-banner-text';
  $handler->display->display_options['fields']['field_banner_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_banner_text']['hide_empty'] = TRUE;
  /* Field: Thumbnail */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['ui_name'] = 'Thumbnail';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_images']['element_class'] = 'our-animals-thumbnail';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_images']['separator'] = '|';
  /* Field: RescueID-for-title (hidden) */
  $handler->display->display_options['fields']['field_rescue_id_2']['id'] = 'field_rescue_id_2';
  $handler->display->display_options['fields']['field_rescue_id_2']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id_2']['field'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id_2']['ui_name'] = 'RescueID-for-title (hidden)';
  $handler->display->display_options['fields']['field_rescue_id_2']['label'] = '';
  $handler->display->display_options['fields']['field_rescue_id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rescue_id_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rescue_id_2']['element_default_classes'] = FALSE;
  /* Field: animal-name-for-title (hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'animal-name-for-title (hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'animal-profile/[title]/[field_rescue_id_2]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = '[title] ([field_rescue_id_2])';
  $handler->display->display_options['fields']['title_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_2']['element_class'] = 'our-animals-field our-animals-title';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_breed']['id'] = 'field_breed';
  $handler->display->display_options['fields']['field_breed']['table'] = 'field_data_field_breed';
  $handler->display->display_options['fields']['field_breed']['field'] = 'field_breed';
  $handler->display->display_options['fields']['field_breed']['ui_name'] = 'Breed (hidden)';
  $handler->display->display_options['fields']['field_breed']['label'] = '';
  $handler->display->display_options['fields']['field_breed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_breed']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_breed']['element_class'] = 'views-field animal-breed';
  $handler->display->display_options['fields']['field_breed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_breed']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_mix_breed']['id'] = 'field_mix_breed';
  $handler->display->display_options['fields']['field_mix_breed']['table'] = 'field_data_field_mix_breed';
  $handler->display->display_options['fields']['field_mix_breed']['field'] = 'field_mix_breed';
  $handler->display->display_options['fields']['field_mix_breed']['ui_name'] = 'Mix Breed Text (hidden)';
  $handler->display->display_options['fields']['field_mix_breed']['label'] = '';
  $handler->display->display_options['fields']['field_mix_breed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mix_breed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mix_breed']['element_default_classes'] = FALSE;
  /* Field: Breed Description */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Breed Description';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_breed][field_mix_breed]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'our-animals-field our-animals-breed';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Spayed Or Neutered Text (hidden) */
  $handler->display->display_options['fields']['field_fixed_description']['id'] = 'field_fixed_description';
  $handler->display->display_options['fields']['field_fixed_description']['table'] = 'field_data_field_fixed_description';
  $handler->display->display_options['fields']['field_fixed_description']['field'] = 'field_fixed_description';
  $handler->display->display_options['fields']['field_fixed_description']['ui_name'] = 'Spayed Or Neutered Text (hidden)';
  $handler->display->display_options['fields']['field_fixed_description']['label'] = '';
  $handler->display->display_options['fields']['field_fixed_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fixed_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fixed_description']['type'] = 'computed_field_computed_value';
  /* Field: Size (hidden) */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['ui_name'] = 'Size (hidden)';
  $handler->display->display_options['fields']['field_size']['label'] = '';
  $handler->display->display_options['fields']['field_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_size']['element_default_classes'] = FALSE;
  /* Field: Size And Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['ui_name'] = 'Size And Gender';
  $handler->display->display_options['fields']['field_gender']['label'] = '';
  $handler->display->display_options['fields']['field_gender']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gender']['alter']['text'] = '[field_size], [field_fixed_description][field_gender]';
  $handler->display->display_options['fields']['field_gender']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_gender']['element_class'] = 'our-animals-field our-animals-size-gender';
  $handler->display->display_options['fields']['field_gender']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gender']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gender']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gender']['group_column'] = 'value';
  /* Field: Age */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['ui_name'] = 'Age';
  $handler->display->display_options['fields']['field_dob']['label'] = '';
  $handler->display->display_options['fields']['field_dob']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dob']['alter']['text'] = '[field_dob] old';
  $handler->display->display_options['fields']['field_dob']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_dob']['element_class'] = 'our-animals-field our-animals-age';
  $handler->display->display_options['fields']['field_dob']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dob']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dob']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'raw time ago',
  );
  /* Field: RescueID-for-link (hidden) */
  $handler->display->display_options['fields']['field_rescue_id']['id'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['field'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['ui_name'] = 'RescueID-for-link (hidden)';
  $handler->display->display_options['fields']['field_rescue_id']['label'] = '';
  $handler->display->display_options['fields']['field_rescue_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rescue_id']['alter']['alt'] = 'Apply';
  $handler->display->display_options['fields']['field_rescue_id']['element_label_colon'] = FALSE;
  /* Field: animal-name-for-link (hidden) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'animal-name-for-link (hidden)';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Apply For Link */
  $handler->display->display_options['fields']['field_rescue_id_1']['id'] = 'field_rescue_id_1';
  $handler->display->display_options['fields']['field_rescue_id_1']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id_1']['field'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id_1']['ui_name'] = 'Apply For Link';
  $handler->display->display_options['fields']['field_rescue_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_rescue_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rescue_id_1']['alter']['text'] = '<a href="/apply?rid=[field_rescue_id_1-value]&tf=Immediately">Apply for [title_1]</a>';
  $handler->display->display_options['fields']['field_rescue_id_1']['alter']['path'] = '/apply&animal';
  $handler->display->display_options['fields']['field_rescue_id_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_rescue_id_1']['element_class'] = 'our-animals-field apply-link';
  $handler->display->display_options['fields']['field_rescue_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rescue_id_1']['element_default_classes'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'animal' => 'animal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Visible (field_visible) */
  $handler->display->display_options['filters']['field_visible_value']['id'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['table'] = 'field_data_field_visible';
  $handler->display->display_options['filters']['field_visible_value']['field'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_visible_value']['group'] = 1;

  /* Display: Our Animals */
  $handler = $view->new_display('page', 'Our Animals', 'page');
  $handler->display->display_options['display_description'] = 'The public view of our available animals';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'our-animals-animal';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node ID (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Rescue ID - RAW (hidden) */
  $handler->display->display_options['fields']['field_rescue_id']['id'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['field'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['ui_name'] = 'Rescue ID - RAW (hidden)';
  $handler->display->display_options['fields']['field_rescue_id']['label'] = '';
  $handler->display->display_options['fields']['field_rescue_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rescue_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rescue_id']['type'] = 'computed_field_computed_value';
  /* Field: Rescue ID - Computed (hidden) */
  $handler->display->display_options['fields']['field_rescue_id_1']['id'] = 'field_rescue_id_1';
  $handler->display->display_options['fields']['field_rescue_id_1']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id_1']['field'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id_1']['ui_name'] = 'Rescue ID - Computed (hidden)';
  $handler->display->display_options['fields']['field_rescue_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_rescue_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rescue_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rescue_id_1']['element_default_classes'] = FALSE;
  /* Field: Animal Name (hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Animal Name (hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'animal-profile/[nid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Animal Name (Rescue ID) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Animal Name (Rescue ID)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] ([field_rescue_id_1])';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'our-animals-title';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Thumbnail */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['ui_name'] = 'Thumbnail';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_picture']['element_class'] = 'our-animals-thumbnail';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Details Subview */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Details Subview';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_type'] = 'div';
  $handler->display->display_options['fields']['view']['element_class'] = 'our-animals-details';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'our_animals_details_subview';
  $handler->display->display_options['fields']['view']['arguments'] = '[%field_rescue_id]';
  /* Field: Bio */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['ui_name'] = 'Bio';
  $handler->display->display_options['fields']['field_bio']['label'] = '';
  $handler->display->display_options['fields']['field_bio']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_bio']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_bio']['alter']['max_length'] = '255';
  $handler->display->display_options['fields']['field_bio']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_bio']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['field_bio']['alter']['more_link_path'] = 'animal-profile/[nid]';
  $handler->display->display_options['fields']['field_bio']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_bio']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_bio']['alter']['preserve_tags'] = '<br>';
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_bio']['element_wrapper_class'] = 'our-animals-description';
  $handler->display->display_options['fields']['field_bio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['hide_empty'] = TRUE;
  /* Field: Banner Text */
  $handler->display->display_options['fields']['field_banner_text']['id'] = 'field_banner_text';
  $handler->display->display_options['fields']['field_banner_text']['table'] = 'field_data_field_banner_text';
  $handler->display->display_options['fields']['field_banner_text']['field'] = 'field_banner_text';
  $handler->display->display_options['fields']['field_banner_text']['relationship'] = 'field_adoption_status_tid';
  $handler->display->display_options['fields']['field_banner_text']['ui_name'] = 'Banner Text';
  $handler->display->display_options['fields']['field_banner_text']['label'] = '';
  $handler->display->display_options['fields']['field_banner_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_banner_text']['element_class'] = 'our-animals-banner-text';
  $handler->display->display_options['fields']['field_banner_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_banner_text']['hide_empty'] = TRUE;
  /* Field: Links Subview */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Links Subview';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_1']['element_class'] = 'our-animals-actions';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_1']['view'] = 'our_animals_details_links_subview';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[%field_rescue_id]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Row Weight (field_row_weight) */
  $handler->display->display_options['sorts']['field_row_weight_value']['id'] = 'field_row_weight_value';
  $handler->display->display_options['sorts']['field_row_weight_value']['table'] = 'field_data_field_row_weight';
  $handler->display->display_options['sorts']['field_row_weight_value']['field'] = 'field_row_weight_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'animal' => 'animal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Visible (field_visible) */
  $handler->display->display_options['filters']['field_visible_value']['id'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['table'] = 'field_data_field_visible';
  $handler->display->display_options['filters']['field_visible_value']['field'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_visible_value']['group'] = 1;
  /* Filter criterion: Adoption Status Visible to Public */
  $handler->display->display_options['filters']['field_visible_to_public_value']['id'] = 'field_visible_to_public_value';
  $handler->display->display_options['filters']['field_visible_to_public_value']['table'] = 'field_data_field_visible_to_public';
  $handler->display->display_options['filters']['field_visible_to_public_value']['field'] = 'field_visible_to_public_value';
  $handler->display->display_options['filters']['field_visible_to_public_value']['relationship'] = 'field_adoption_status_tid';
  $handler->display->display_options['filters']['field_visible_to_public_value']['ui_name'] = 'Adoption Status Visible to Public';
  $handler->display->display_options['filters']['field_visible_to_public_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'our-animals';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Our Animals';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Animal Sorter */
  $handler = $view->new_display('page', 'Animal Sorter', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sort Animals';
  $handler->display->display_options['display_description'] = 'Allows for sorting of animals that are currently shown to the public';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node' => 'edit_node',
    'field_images' => 'field_images',
    'field_rescue_id_2' => 'field_rescue_id_2',
    'title' => 'title',
    'field_adoption_status' => 'field_adoption_status',
    'field_breed' => 'field_breed',
    'field_dob_1' => 'field_dob_1',
    'field_dob' => 'field_dob',
    'field_size' => 'field_size',
    'field_fixed_description' => 'field_fixed_description',
    'field_gender' => 'field_gender',
    'field_foster_parent' => 'field_foster_parent',
    'field_microchip_num' => 'field_microchip_num',
    'field_spotlighted' => 'field_spotlighted',
    'field_visible' => 'field_visible',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_images' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rescue_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_adoption_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_breed' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dob_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dob' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fixed_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gender' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_foster_parent' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_microchip_num' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_spotlighted' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visible' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'WOOF! There are no animals to manage! If you expect any animals, please check the filter(s) for any mistakenly selected options.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Adoption Status (field_adoption_status) */
  $handler->display->display_options['relationships']['field_adoption_status_tid']['id'] = 'field_adoption_status_tid';
  $handler->display->display_options['relationships']['field_adoption_status_tid']['table'] = 'field_data_field_adoption_status';
  $handler->display->display_options['relationships']['field_adoption_status_tid']['field'] = 'field_adoption_status_tid';
  $handler->display->display_options['relationships']['field_adoption_status_tid']['label'] = 'Adoption Status Taxonomy';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node ID (for Draggable Sorting) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID (for Draggable Sorting)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Drag handle */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['ui_name'] = 'Drag handle';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['handler'] = 'draggableviews_handler_fieldapi';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['draggableviews_handler_fieldapi'] = array(
    'field' => 'field_data_field_row_weight:field_row_weight_value',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Profile Picture */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['ui_name'] = 'Profile Picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Rescue ID (hidden) */
  $handler->display->display_options['fields']['field_rescue_id_2']['id'] = 'field_rescue_id_2';
  $handler->display->display_options['fields']['field_rescue_id_2']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id_2']['field'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id_2']['ui_name'] = 'Rescue ID (hidden)';
  $handler->display->display_options['fields']['field_rescue_id_2']['label'] = '';
  $handler->display->display_options['fields']['field_rescue_id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rescue_id_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rescue_id_2']['element_default_classes'] = FALSE;
  /* Field: Date Of Birth (hidden) */
  $handler->display->display_options['fields']['field_dob_1']['id'] = 'field_dob_1';
  $handler->display->display_options['fields']['field_dob_1']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob_1']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob_1']['ui_name'] = 'Date Of Birth (hidden)';
  $handler->display->display_options['fields']['field_dob_1']['label'] = '';
  $handler->display->display_options['fields']['field_dob_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dob_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dob_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Size (hidden) */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['ui_name'] = 'Size (hidden)';
  $handler->display->display_options['fields']['field_size']['label'] = '';
  $handler->display->display_options['fields']['field_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_size']['element_default_classes'] = FALSE;
  /* Field: Spayed/Neutered (hidden) */
  $handler->display->display_options['fields']['field_fixed_description']['id'] = 'field_fixed_description';
  $handler->display->display_options['fields']['field_fixed_description']['table'] = 'field_data_field_fixed_description';
  $handler->display->display_options['fields']['field_fixed_description']['field'] = 'field_fixed_description';
  $handler->display->display_options['fields']['field_fixed_description']['ui_name'] = 'Spayed/Neutered (hidden)';
  $handler->display->display_options['fields']['field_fixed_description']['label'] = '';
  $handler->display->display_options['fields']['field_fixed_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fixed_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fixed_description']['type'] = 'computed_field_computed_value';
  /* Field: Visible (Hidden) */
  $handler->display->display_options['fields']['field_visible']['id'] = 'field_visible';
  $handler->display->display_options['fields']['field_visible']['table'] = 'field_data_field_visible';
  $handler->display->display_options['fields']['field_visible']['field'] = 'field_visible';
  $handler->display->display_options['fields']['field_visible']['ui_name'] = 'Visible (Hidden)';
  $handler->display->display_options['fields']['field_visible']['label'] = '';
  $handler->display->display_options['fields']['field_visible']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visible']['element_label_colon'] = FALSE;
  /* Field: Primary Breed (Dogs) */
  $handler->display->display_options['fields']['field_primary_breed_dog']['id'] = 'field_primary_breed_dog';
  $handler->display->display_options['fields']['field_primary_breed_dog']['table'] = 'field_data_field_primary_breed_dog';
  $handler->display->display_options['fields']['field_primary_breed_dog']['field'] = 'field_primary_breed_dog';
  $handler->display->display_options['fields']['field_primary_breed_dog']['ui_name'] = 'Primary Breed (Dogs)';
  $handler->display->display_options['fields']['field_primary_breed_dog']['label'] = '';
  $handler->display->display_options['fields']['field_primary_breed_dog']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_primary_breed_dog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_breed_dog']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Primary Breed (Cats) */
  $handler->display->display_options['fields']['field_primary_breed_cat']['id'] = 'field_primary_breed_cat';
  $handler->display->display_options['fields']['field_primary_breed_cat']['table'] = 'field_data_field_primary_breed_cat';
  $handler->display->display_options['fields']['field_primary_breed_cat']['field'] = 'field_primary_breed_cat';
  $handler->display->display_options['fields']['field_primary_breed_cat']['ui_name'] = 'Primary Breed (Cats)';
  $handler->display->display_options['fields']['field_primary_breed_cat']['label'] = '';
  $handler->display->display_options['fields']['field_primary_breed_cat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_primary_breed_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_breed_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Secondary Breed (Dogs) */
  $handler->display->display_options['fields']['field_secondary_breed_dog']['id'] = 'field_secondary_breed_dog';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['table'] = 'field_data_field_secondary_breed_dog';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['field'] = 'field_secondary_breed_dog';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['ui_name'] = 'Secondary Breed (Dogs)';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_dog']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_dog']['alter']['text'] = ' / [field_secondary_breed_dog]';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_breed_dog']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_dog']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Secondary Breed (Cats) */
  $handler->display->display_options['fields']['field_secondary_breed_cat']['id'] = 'field_secondary_breed_cat';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['table'] = 'field_data_field_secondary_breed_cat';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['field'] = 'field_secondary_breed_cat';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['ui_name'] = 'Secondary Breed (Cats)';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_cat']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_cat']['alter']['text'] = ' / [field_secondary_breed_cat]';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_breed_cat']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_rescue_id_2])';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'animal-profile/[title]/[field_rescue_id_2]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Adoption Status */
  $handler->display->display_options['fields']['field_adoption_status']['id'] = 'field_adoption_status';
  $handler->display->display_options['fields']['field_adoption_status']['table'] = 'field_data_field_adoption_status';
  $handler->display->display_options['fields']['field_adoption_status']['field'] = 'field_adoption_status';
  $handler->display->display_options['fields']['field_adoption_status']['ui_name'] = 'Adoption Status';
  $handler->display->display_options['fields']['field_adoption_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_adoption_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adoption_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Breed (Dogs) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Breed (Dogs)';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Breed (Primary/Secondary)';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_primary_breed_dog][field_secondary_breed_dog][field_primary_breed_cat][field_secondary_breed_cat]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = TRUE;
  /* Field: Date of Birth (Age) */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['ui_name'] = 'Date of Birth (Age)';
  $handler->display->display_options['fields']['field_dob']['label'] = 'Date of Birth (Age)';
  $handler->display->display_options['fields']['field_dob']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dob']['alter']['text'] = '[field_dob_1]<br>([field_dob] old)';
  $handler->display->display_options['fields']['field_dob']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_dob']['element_class'] = 'our-animals-field our-animals-age';
  $handler->display->display_options['fields']['field_dob']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dob']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dob']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'raw time ago',
  );
  /* Field: Size and Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['ui_name'] = 'Size and Gender';
  $handler->display->display_options['fields']['field_gender']['label'] = 'Size/Gender';
  $handler->display->display_options['fields']['field_gender']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gender']['alter']['text'] = '[field_size], [field_fixed_description] [field_gender]';
  $handler->display->display_options['fields']['field_gender']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_gender']['element_class'] = 'our-animals-field our-animals-size-gender';
  $handler->display->display_options['fields']['field_gender']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gender']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gender']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gender']['group_column'] = 'value';
  /* Field: Weight */
  $handler->display->display_options['fields']['field_weight']['id'] = 'field_weight';
  $handler->display->display_options['fields']['field_weight']['table'] = 'field_data_field_weight';
  $handler->display->display_options['fields']['field_weight']['field'] = 'field_weight';
  $handler->display->display_options['fields']['field_weight']['ui_name'] = 'Weight';
  $handler->display->display_options['fields']['field_weight']['label'] = 'Weight';
  $handler->display->display_options['fields']['field_weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_weight']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Visible / Spotlit? */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Visible / Spotlit?';
  $handler->display->display_options['fields']['nothing']['label'] = 'Visible?';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_visible]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Row Weight (field_row_weight) */
  $handler->display->display_options['sorts']['field_row_weight_value']['id'] = 'field_row_weight_value';
  $handler->display->display_options['sorts']['field_row_weight_value']['table'] = 'field_data_field_row_weight';
  $handler->display->display_options['sorts']['field_row_weight_value']['field'] = 'field_row_weight_value';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['ui_name'] = 'Content Type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'animal' => 'animal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Visible */
  $handler->display->display_options['filters']['field_visible_value']['id'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['table'] = 'field_data_field_visible';
  $handler->display->display_options['filters']['field_visible_value']['field'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['ui_name'] = 'Visible';
  $handler->display->display_options['filters']['field_visible_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Adoption Status Visible To Public */
  $handler->display->display_options['filters']['field_visible_to_public_value']['id'] = 'field_visible_to_public_value';
  $handler->display->display_options['filters']['field_visible_to_public_value']['table'] = 'field_data_field_visible_to_public';
  $handler->display->display_options['filters']['field_visible_to_public_value']['field'] = 'field_visible_to_public_value';
  $handler->display->display_options['filters']['field_visible_to_public_value']['relationship'] = 'field_adoption_status_tid';
  $handler->display->display_options['filters']['field_visible_to_public_value']['ui_name'] = 'Adoption Status Visible To Public';
  $handler->display->display_options['filters']['field_visible_to_public_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'sort-animals';
  $handler->display->display_options['menu']['title'] = 'Manage Animals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['our_animals'] = $view;

  $view = new view();
  $view->name = 'our_animals_details_links_subview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Animal Links Subview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Adoption Status';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'adoption_status' => 'adoption_status',
    'animal_types' => 0,
    'application_statuses' => 0,
    'breeds' => 0,
    'genders' => 0,
    'tags' => 0,
  );
  /* Field: Node ID (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Animal Name for Links (hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Animal Name for Links (hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Apply Link (Can be applied for) */
  $handler->display->display_options['fields']['field_can_be_applied_for']['id'] = 'field_can_be_applied_for';
  $handler->display->display_options['fields']['field_can_be_applied_for']['table'] = 'field_data_field_can_be_applied_for';
  $handler->display->display_options['fields']['field_can_be_applied_for']['field'] = 'field_can_be_applied_for';
  $handler->display->display_options['fields']['field_can_be_applied_for']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_can_be_applied_for']['ui_name'] = 'Apply Link (Can be applied for)';
  $handler->display->display_options['fields']['field_can_be_applied_for']['label'] = '';
  $handler->display->display_options['fields']['field_can_be_applied_for']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_can_be_applied_for']['alter']['text'] = '<a href="/apply?nid=[nid]&i=Adopt">Apply for [title]</a>';
  $handler->display->display_options['fields']['field_can_be_applied_for']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_can_be_applied_for']['element_class'] = 'our-animals-action button-link';
  $handler->display->display_options['fields']['field_can_be_applied_for']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_can_be_applied_for']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_can_be_applied_for']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_can_be_applied_for']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_can_be_applied_for']['type'] = 'list_key';
  /* Field: Apply Link (Disabled - Cannot be applied for) */
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['id'] = 'field_cannot_be_applied_for';
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['table'] = 'field_data_field_cannot_be_applied_for';
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['field'] = 'field_cannot_be_applied_for';
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['ui_name'] = 'Apply Link (Disabled - Cannot be applied for)';
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['label'] = '';
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['alter']['text'] = 'Apply for [title]';
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['element_class'] = 'our-animals-action button-link-disabled';
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cannot_be_applied_for']['empty_zero'] = TRUE;
  /* Field: Foster Link (Foster Needed) */
  $handler->display->display_options['fields']['field_foster_needed']['id'] = 'field_foster_needed';
  $handler->display->display_options['fields']['field_foster_needed']['table'] = 'field_data_field_foster_needed';
  $handler->display->display_options['fields']['field_foster_needed']['field'] = 'field_foster_needed';
  $handler->display->display_options['fields']['field_foster_needed']['ui_name'] = 'Foster Link (Foster Needed)';
  $handler->display->display_options['fields']['field_foster_needed']['label'] = '';
  $handler->display->display_options['fields']['field_foster_needed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_foster_needed']['alter']['text'] = '<a href="/apply?nid=[nid]&i=Foster">Foster [title]</a>';
  $handler->display->display_options['fields']['field_foster_needed']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_foster_needed']['element_class'] = 'our-animals-action button-link';
  $handler->display->display_options['fields']['field_foster_needed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foster_needed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_foster_needed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_foster_needed']['empty_zero'] = TRUE;
  /* Field: Foster Link (Disabled - Foster Not Needed) */
  $handler->display->display_options['fields']['field_foster_not_needed']['id'] = 'field_foster_not_needed';
  $handler->display->display_options['fields']['field_foster_not_needed']['table'] = 'field_data_field_foster_not_needed';
  $handler->display->display_options['fields']['field_foster_not_needed']['field'] = 'field_foster_not_needed';
  $handler->display->display_options['fields']['field_foster_not_needed']['ui_name'] = 'Foster Link (Disabled - Foster Not Needed)';
  $handler->display->display_options['fields']['field_foster_not_needed']['label'] = '';
  $handler->display->display_options['fields']['field_foster_not_needed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_foster_not_needed']['alter']['text'] = 'Foster [title]';
  $handler->display->display_options['fields']['field_foster_not_needed']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_foster_not_needed']['element_class'] = 'our-animals-action button-link-disabled';
  $handler->display->display_options['fields']['field_foster_not_needed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foster_not_needed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_foster_not_needed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_foster_not_needed']['empty_zero'] = TRUE;
  /* Field: Sponsor Link (Effective Fundraiser URL) */
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['id'] = 'field_effective_fundraiser_url';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['table'] = 'field_data_field_effective_fundraiser_url';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['field'] = 'field_effective_fundraiser_url';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['ui_name'] = 'Sponsor Link (Effective Fundraiser URL)';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['label'] = '';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['alter']['text'] = '<a href="[field_effective_fundraiser_url]">Sponsor [title]</a>';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['element_class'] = 'our-animals-action button-link';
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_effective_fundraiser_url']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Rescue ID (field_rescue_id) */
  $handler->display->display_options['arguments']['field_rescue_id_value']['id'] = 'field_rescue_id_value';
  $handler->display->display_options['arguments']['field_rescue_id_value']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['arguments']['field_rescue_id_value']['field'] = 'field_rescue_id_value';
  $handler->display->display_options['arguments']['field_rescue_id_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_rescue_id_value']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_rescue_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_rescue_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_rescue_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_rescue_id_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'animal' => 'animal',
  );
  $export['our_animals_details_links_subview'] = $view;

  $view = new view();
  $view->name = 'our_animals_details_subview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Animal Details Subview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Rescue ID (Hidden) */
  $handler->display->display_options['fields']['field_rescue_id']['id'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['field'] = 'field_rescue_id';
  $handler->display->display_options['fields']['field_rescue_id']['ui_name'] = 'Rescue ID (Hidden)';
  $handler->display->display_options['fields']['field_rescue_id']['label'] = '';
  $handler->display->display_options['fields']['field_rescue_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rescue_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rescue_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rescue_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rescue_id']['type'] = 'computed_field_computed_value';
  /* Field: Primary Breed - Dogs (Hidden) */
  $handler->display->display_options['fields']['field_primary_breed_dog']['id'] = 'field_primary_breed_dog';
  $handler->display->display_options['fields']['field_primary_breed_dog']['table'] = 'field_data_field_primary_breed_dog';
  $handler->display->display_options['fields']['field_primary_breed_dog']['field'] = 'field_primary_breed_dog';
  $handler->display->display_options['fields']['field_primary_breed_dog']['ui_name'] = 'Primary Breed - Dogs (Hidden)';
  $handler->display->display_options['fields']['field_primary_breed_dog']['label'] = '';
  $handler->display->display_options['fields']['field_primary_breed_dog']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_primary_breed_dog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_breed_dog']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_primary_breed_dog']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_primary_breed_dog']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Secondary Breed - Dogs (Hidden) */
  $handler->display->display_options['fields']['field_secondary_breed_dog']['id'] = 'field_secondary_breed_dog';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['table'] = 'field_data_field_secondary_breed_dog';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['field'] = 'field_secondary_breed_dog';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['ui_name'] = 'Secondary Breed - Dogs (Hidden)';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_dog']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_dog']['alter']['text'] = '/[field_secondary_breed_dog]';
  $handler->display->display_options['fields']['field_secondary_breed_dog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_breed_dog']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_dog']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Primary Breed - Cats (Hidden) */
  $handler->display->display_options['fields']['field_primary_breed_cat']['id'] = 'field_primary_breed_cat';
  $handler->display->display_options['fields']['field_primary_breed_cat']['table'] = 'field_data_field_primary_breed_cat';
  $handler->display->display_options['fields']['field_primary_breed_cat']['field'] = 'field_primary_breed_cat';
  $handler->display->display_options['fields']['field_primary_breed_cat']['ui_name'] = 'Primary Breed - Cats (Hidden)';
  $handler->display->display_options['fields']['field_primary_breed_cat']['label'] = '';
  $handler->display->display_options['fields']['field_primary_breed_cat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_primary_breed_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_breed_cat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_primary_breed_cat']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_primary_breed_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Secondary Breed - Cats (Hidden) */
  $handler->display->display_options['fields']['field_secondary_breed_cat']['id'] = 'field_secondary_breed_cat';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['table'] = 'field_data_field_secondary_breed_cat';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['field'] = 'field_secondary_breed_cat';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['ui_name'] = 'Secondary Breed - Cats (Hidden)';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_cat']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_cat']['alter']['text'] = '/[field_secondary_breed_cat]';
  $handler->display->display_options['fields']['field_secondary_breed_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_breed_cat']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_breed_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Breed */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Breed';
  $handler->display->display_options['fields']['nothing']['label'] = 'Breed';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_primary_breed_dog][field_secondary_breed_dog][field_primary_breed_cat][field_secondary_breed_cat]';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'our-animals-details-field';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Size (Hidden) */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['ui_name'] = 'Size (Hidden)';
  $handler->display->display_options['fields']['field_size']['label'] = '';
  $handler->display->display_options['fields']['field_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_size']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_size']['hide_empty'] = TRUE;
  /* Field: Text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Text';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Size';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_size]';
  $handler->display->display_options['fields']['nothing_1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'our-animals-details-field';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = TRUE;
  /* Field: Weight (Hidden) */
  $handler->display->display_options['fields']['field_weight']['id'] = 'field_weight';
  $handler->display->display_options['fields']['field_weight']['table'] = 'field_data_field_weight';
  $handler->display->display_options['fields']['field_weight']['field'] = 'field_weight';
  $handler->display->display_options['fields']['field_weight']['ui_name'] = 'Weight (Hidden)';
  $handler->display->display_options['fields']['field_weight']['label'] = '';
  $handler->display->display_options['fields']['field_weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_weight']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_weight']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_weight']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Text';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Weight';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_weight]';
  $handler->display->display_options['fields']['nothing_2']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'our-animals-details-field';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = TRUE;
  /* Field: Spayed or Neutered Text (Hidden) */
  $handler->display->display_options['fields']['field_fixed_description']['id'] = 'field_fixed_description';
  $handler->display->display_options['fields']['field_fixed_description']['table'] = 'field_data_field_fixed_description';
  $handler->display->display_options['fields']['field_fixed_description']['field'] = 'field_fixed_description';
  $handler->display->display_options['fields']['field_fixed_description']['ui_name'] = 'Spayed or Neutered Text (Hidden)';
  $handler->display->display_options['fields']['field_fixed_description']['label'] = '';
  $handler->display->display_options['fields']['field_fixed_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fixed_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fixed_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fixed_description']['hide_empty'] = TRUE;
  /* Field: Gender (Hidden) */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['ui_name'] = 'Gender (Hidden)';
  $handler->display->display_options['fields']['field_gender']['label'] = '';
  $handler->display->display_options['fields']['field_gender']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gender']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gender']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gender']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_gender']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Text';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Gender';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_fixed_description][field_gender]';
  $handler->display->display_options['fields']['nothing_3']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'our-animals-details-field';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['hide_alter_empty'] = TRUE;
  /* Field: Age (Hidden) */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['ui_name'] = 'Age (Hidden)';
  $handler->display->display_options['fields']['field_dob']['label'] = '';
  $handler->display->display_options['fields']['field_dob']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dob']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dob']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dob']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dob']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'raw time ago',
  );
  /* Field: Text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Text';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Age';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[field_dob]';
  $handler->display->display_options['fields']['nothing_4']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_class'] = 'our-animals-details-field';
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_4']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Rescue ID Contextual Filter */
  $handler->display->display_options['arguments']['field_rescue_id_value']['id'] = 'field_rescue_id_value';
  $handler->display->display_options['arguments']['field_rescue_id_value']['table'] = 'field_data_field_rescue_id';
  $handler->display->display_options['arguments']['field_rescue_id_value']['field'] = 'field_rescue_id_value';
  $handler->display->display_options['arguments']['field_rescue_id_value']['ui_name'] = 'Rescue ID Contextual Filter';
  $handler->display->display_options['arguments']['field_rescue_id_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_rescue_id_value']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_rescue_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_rescue_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_rescue_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_rescue_id_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'animal' => 'animal',
  );
  $export['our_animals_details_subview'] = $view;

  $view = new view();
  $view->name = 'success_stories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Success Stories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Success Stories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['skin'] = 'boxed-carousel';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'title' => 0,
    'field_success_story_image' => 0,
    'field_success_story_body' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'success-story-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Image */
  $handler->display->display_options['fields']['field_success_story_image']['id'] = 'field_success_story_image';
  $handler->display->display_options['fields']['field_success_story_image']['table'] = 'field_data_field_success_story_image';
  $handler->display->display_options['fields']['field_success_story_image']['field'] = 'field_success_story_image';
  $handler->display->display_options['fields']['field_success_story_image']['ui_name'] = 'Image';
  $handler->display->display_options['fields']['field_success_story_image']['label'] = '';
  $handler->display->display_options['fields']['field_success_story_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_success_story_image']['element_class'] = 'success-story-body success-story-image';
  $handler->display->display_options['fields']['field_success_story_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_success_story_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_success_story_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_success_story_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Story Text */
  $handler->display->display_options['fields']['field_success_story_body']['id'] = 'field_success_story_body';
  $handler->display->display_options['fields']['field_success_story_body']['table'] = 'field_data_field_success_story_body';
  $handler->display->display_options['fields']['field_success_story_body']['field'] = 'field_success_story_body';
  $handler->display->display_options['fields']['field_success_story_body']['ui_name'] = 'Story Text';
  $handler->display->display_options['fields']['field_success_story_body']['label'] = '';
  $handler->display->display_options['fields']['field_success_story_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_success_story_body']['element_class'] = 'success-story-body success-story-text';
  $handler->display->display_options['fields']['field_success_story_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_success_story_body']['element_default_classes'] = FALSE;
  /* Field: Content: Display on Site (editable) */
  $handler->display->display_options['fields']['field_display_on_site_editable']['id'] = 'field_display_on_site_editable';
  $handler->display->display_options['fields']['field_display_on_site_editable']['table'] = 'field_data_field_display_on_site';
  $handler->display->display_options['fields']['field_display_on_site_editable']['field'] = 'field_display_on_site_editable';
  /* Sort criterion: Content: Row Weight (field_row_weight) */
  $handler->display->display_options['sorts']['field_row_weight_value']['id'] = 'field_row_weight_value';
  $handler->display->display_options['sorts']['field_row_weight_value']['table'] = 'field_data_field_row_weight';
  $handler->display->display_options['sorts']['field_row_weight_value']['field'] = 'field_row_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'success_story' => 'success_story',
  );
  /* Filter criterion: Content: Display on Site (field_display_on_site) */
  $handler->display->display_options['filters']['field_display_on_site_value']['id'] = 'field_display_on_site_value';
  $handler->display->display_options['filters']['field_display_on_site_value']['table'] = 'field_data_field_display_on_site';
  $handler->display->display_options['filters']['field_display_on_site_value']['field'] = 'field_display_on_site_value';
  $handler->display->display_options['filters']['field_display_on_site_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_display_on_site_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_display_on_site_value']['expose']['operator_id'] = 'field_display_on_site_value_op';
  $handler->display->display_options['filters']['field_display_on_site_value']['expose']['label'] = 'Display on Site (field_display_on_site)';
  $handler->display->display_options['filters']['field_display_on_site_value']['expose']['operator'] = 'field_display_on_site_value_op';
  $handler->display->display_options['filters']['field_display_on_site_value']['expose']['identifier'] = 'field_display_on_site_value';

  /* Display: Success Stories */
  $handler = $view->new_display('page', 'Success Stories', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'success-story-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Image */
  $handler->display->display_options['fields']['field_success_story_image']['id'] = 'field_success_story_image';
  $handler->display->display_options['fields']['field_success_story_image']['table'] = 'field_data_field_success_story_image';
  $handler->display->display_options['fields']['field_success_story_image']['field'] = 'field_success_story_image';
  $handler->display->display_options['fields']['field_success_story_image']['ui_name'] = 'Image';
  $handler->display->display_options['fields']['field_success_story_image']['label'] = '';
  $handler->display->display_options['fields']['field_success_story_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_success_story_image']['element_class'] = 'success-story-body success-story-image';
  $handler->display->display_options['fields']['field_success_story_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_success_story_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_success_story_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_success_story_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Story Text */
  $handler->display->display_options['fields']['field_success_story_body']['id'] = 'field_success_story_body';
  $handler->display->display_options['fields']['field_success_story_body']['table'] = 'field_data_field_success_story_body';
  $handler->display->display_options['fields']['field_success_story_body']['field'] = 'field_success_story_body';
  $handler->display->display_options['fields']['field_success_story_body']['ui_name'] = 'Story Text';
  $handler->display->display_options['fields']['field_success_story_body']['label'] = '';
  $handler->display->display_options['fields']['field_success_story_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_success_story_body']['element_class'] = 'success-story-body success-story-text';
  $handler->display->display_options['fields']['field_success_story_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_success_story_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'success_story' => 'success_story',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'success-stories';

  /* Display: Story Manager */
  $handler = $view->new_display('page', 'Story Manager', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'draggableviews' => 'draggableviews',
    'title' => 'title',
    'field_success_story_image' => 'field_success_story_image',
    'field_success_story_body' => 'field_success_story_body',
    'field_display_on_site_editable' => 'field_display_on_site_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_success_story_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_success_story_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_display_on_site_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node ID (for draggable sorting) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID (for draggable sorting)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Drag Handle */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['ui_name'] = 'Drag Handle';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['handler'] = 'draggableviews_handler_fieldapi';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Save Sort Order';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['draggableviews_handler_fieldapi'] = array(
    'field' => 'field_data_field_row_weight:field_row_weight_value',
  );
  /* Field: Edit Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Edit Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit Story';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Image */
  $handler->display->display_options['fields']['field_success_story_image']['id'] = 'field_success_story_image';
  $handler->display->display_options['fields']['field_success_story_image']['table'] = 'field_data_field_success_story_image';
  $handler->display->display_options['fields']['field_success_story_image']['field'] = 'field_success_story_image';
  $handler->display->display_options['fields']['field_success_story_image']['ui_name'] = 'Image';
  $handler->display->display_options['fields']['field_success_story_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_success_story_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_success_story_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Story Text */
  $handler->display->display_options['fields']['field_success_story_body']['id'] = 'field_success_story_body';
  $handler->display->display_options['fields']['field_success_story_body']['table'] = 'field_data_field_success_story_body';
  $handler->display->display_options['fields']['field_success_story_body']['field'] = 'field_success_story_body';
  $handler->display->display_options['fields']['field_success_story_body']['ui_name'] = 'Story Text';
  $handler->display->display_options['fields']['field_success_story_body']['label'] = 'Story Text';
  $handler->display->display_options['fields']['field_success_story_body']['element_label_colon'] = FALSE;
  /* Field: Display on Site */
  $handler->display->display_options['fields']['field_display_on_site']['id'] = 'field_display_on_site';
  $handler->display->display_options['fields']['field_display_on_site']['table'] = 'field_data_field_display_on_site';
  $handler->display->display_options['fields']['field_display_on_site']['field'] = 'field_display_on_site';
  $handler->display->display_options['fields']['field_display_on_site']['ui_name'] = 'Display on Site';
  $handler->display->display_options['fields']['field_display_on_site']['label'] = 'Display on Site?';
  $handler->display->display_options['fields']['field_display_on_site']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'success_story' => 'success_story',
  );
  /* Filter criterion: Content: Display on Site (field_display_on_site) */
  $handler->display->display_options['filters']['field_display_on_site_value']['id'] = 'field_display_on_site_value';
  $handler->display->display_options['filters']['field_display_on_site_value']['table'] = 'field_data_field_display_on_site';
  $handler->display->display_options['filters']['field_display_on_site_value']['field'] = 'field_display_on_site_value';
  $handler->display->display_options['filters']['field_display_on_site_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_display_on_site_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_display_on_site_value']['expose']['operator_id'] = 'field_display_on_site_value_op';
  $handler->display->display_options['filters']['field_display_on_site_value']['expose']['label'] = 'Filter by Displayed Stories?';
  $handler->display->display_options['filters']['field_display_on_site_value']['expose']['operator'] = 'field_display_on_site_value_op';
  $handler->display->display_options['filters']['field_display_on_site_value']['expose']['identifier'] = 'field_display_on_site_value';
  $handler->display->display_options['filters']['field_display_on_site_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'manage-success-stories';
  $export['success_stories'] = $view;

  return $export;
}
