<?php
/**
 * @file
 * woof_application_suite.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function woof_application_suite_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'animal_requests_by_application_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Animal Requests (By Application)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Animal Requests (By Application)';
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
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'field_status_editable' => 'field_status_editable',
    'field_is_primary' => 'field_is_primary',
  );
  $handler->display->display_options['style_options']['default'] = 'field_status_editable';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_primary' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Relationship: Content: Application (field_application) */
  $handler->display->display_options['relationships']['field_application_nid']['id'] = 'field_application_nid';
  $handler->display->display_options['relationships']['field_application_nid']['table'] = 'field_data_field_application';
  $handler->display->display_options['relationships']['field_application_nid']['field'] = 'field_application_nid';
  $handler->display->display_options['relationships']['field_application_nid']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_application_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_application_nid']['delta'] = '-1';
  /* Relationship: Content: Animal (field_animal) */
  $handler->display->display_options['relationships']['field_animal_nid']['id'] = 'field_animal_nid';
  $handler->display->display_options['relationships']['field_animal_nid']['table'] = 'field_data_field_animal';
  $handler->display->display_options['relationships']['field_animal_nid']['field'] = 'field_animal_nid';
  $handler->display->display_options['relationships']['field_animal_nid']['label'] = 'Animal';
  $handler->display->display_options['relationships']['field_animal_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_animal_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_animal_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'Animal';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Status (editable) */
  $handler->display->display_options['fields']['field_status_editable']['id'] = 'field_status_editable';
  $handler->display->display_options['fields']['field_status_editable']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status_editable']['field'] = 'field_status_editable';
  $handler->display->display_options['fields']['field_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status_editable']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_status_editable']['element_class'] = 'editable-field animal-request-status';
  $handler->display->display_options['fields']['field_status_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_status_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_status_editable']['widget_type'] = 'options_select';
  $handler->display->display_options['fields']['field_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_status_editable']['suppress_description'] = 0;
  /* Field: Content: Is Primary */
  $handler->display->display_options['fields']['field_is_primary']['id'] = 'field_is_primary';
  $handler->display->display_options['fields']['field_is_primary']['table'] = 'field_data_field_is_primary';
  $handler->display->display_options['fields']['field_is_primary']['field'] = 'field_is_primary';
  $handler->display->display_options['fields']['field_is_primary']['label'] = 'Primary Request?';
  $handler->display->display_options['fields']['field_is_primary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_is_primary']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_application_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'animal_request' => 'animal_request',
  );
  $export['animal_requests_by_application_'] = $view;

  $view = new view();
  $view->name = 'application_by_id';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Application by ID';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View Application';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node ID (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Submission ID (hidden) */
  $handler->display->display_options['fields']['field_submission_id_1']['id'] = 'field_submission_id_1';
  $handler->display->display_options['fields']['field_submission_id_1']['table'] = 'field_data_field_submission_id';
  $handler->display->display_options['fields']['field_submission_id_1']['field'] = 'field_submission_id';
  $handler->display->display_options['fields']['field_submission_id_1']['ui_name'] = 'Submission ID (hidden)';
  $handler->display->display_options['fields']['field_submission_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_submission_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_submission_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_submission_id_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_submission_id_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Download PDF Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Download PDF Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Download PDF';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/115/submission/[field_submission_id_1]/downloadpdf';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'button-link animal-application-actions';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Submission Id */
  $handler->display->display_options['fields']['field_submission_id']['id'] = 'field_submission_id';
  $handler->display->display_options['fields']['field_submission_id']['table'] = 'field_data_field_submission_id';
  $handler->display->display_options['fields']['field_submission_id']['field'] = 'field_submission_id';
  $handler->display->display_options['fields']['field_submission_id']['label'] = 'Submission ID';
  $handler->display->display_options['fields']['field_submission_id']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_submission_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_submission_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_submission_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Submission Date */
  $handler->display->display_options['fields']['field_submission_date']['id'] = 'field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['table'] = 'field_data_field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['field'] = 'field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_submission_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_submission_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_submission_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Applicant Name */
  $handler->display->display_options['fields']['field_applicant_name']['id'] = 'field_applicant_name';
  $handler->display->display_options['fields']['field_applicant_name']['table'] = 'field_data_field_applicant_name';
  $handler->display->display_options['fields']['field_applicant_name']['field'] = 'field_applicant_name';
  $handler->display->display_options['fields']['field_applicant_name']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_applicant_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicant_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_applicant_name']['type'] = 'text_plain';
  /* Field: Content: Applicant E-mail Address */
  $handler->display->display_options['fields']['field_applicant_email_address']['id'] = 'field_applicant_email_address';
  $handler->display->display_options['fields']['field_applicant_email_address']['table'] = 'field_data_field_applicant_email_address';
  $handler->display->display_options['fields']['field_applicant_email_address']['field'] = 'field_applicant_email_address';
  $handler->display->display_options['fields']['field_applicant_email_address']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_applicant_email_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicant_email_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_applicant_email_address']['type'] = 'text_plain';
  /* Field: Subview */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Subview';
  $handler->display->display_options['fields']['view']['label'] = 'Requests';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'animal_requests_by_application_';
  $handler->display->display_options['fields']['view']['arguments'] = '[%nid]';
  /* Field: Content: Overall Status */
  $handler->display->display_options['fields']['field_application_status']['id'] = 'field_application_status';
  $handler->display->display_options['fields']['field_application_status']['table'] = 'field_data_field_application_status';
  $handler->display->display_options['fields']['field_application_status']['field'] = 'field_application_status';
  $handler->display->display_options['fields']['field_application_status']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_application_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_application_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Subview (Notes and Future Follow Up) */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Subview (Notes and Future Follow Up)';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'application_details_edit';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[%nid]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'application' => 'application',
  );

  /* Display: View Application */
  $handler = $view->new_display('page', 'View Application', 'page');
  $handler->display->display_options['path'] = 'application';
  $export['application_by_id'] = $view;

  $view = new view();
  $view->name = 'application_details_edit';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Application Details Edit';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Application Details Edit';
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
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_future_follow_up_editable' => 'field_future_follow_up_editable',
    'field_notes_editable' => 'field_notes_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_future_follow_up_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Field: Content: Future Follow Up? (editable) */
  $handler->display->display_options['fields']['field_future_follow_up_editable']['id'] = 'field_future_follow_up_editable';
  $handler->display->display_options['fields']['field_future_follow_up_editable']['table'] = 'field_data_field_future_follow_up';
  $handler->display->display_options['fields']['field_future_follow_up_editable']['field'] = 'field_future_follow_up_editable';
  $handler->display->display_options['fields']['field_future_follow_up_editable']['label'] = 'Future Follow Up?';
  $handler->display->display_options['fields']['field_future_follow_up_editable']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_future_follow_up_editable']['element_class'] = 'editable-field';
  $handler->display->display_options['fields']['field_future_follow_up_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_future_follow_up_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_future_follow_up_editable']['widget_type'] = 'options_onoff';
  $handler->display->display_options['fields']['field_future_follow_up_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_future_follow_up_editable']['suppress_description'] = 0;
  /* Field: Content: Notes (editable) */
  $handler->display->display_options['fields']['field_notes_editable']['id'] = 'field_notes_editable';
  $handler->display->display_options['fields']['field_notes_editable']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes_editable']['field'] = 'field_notes_editable';
  $handler->display->display_options['fields']['field_notes_editable']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_notes_editable']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_notes_editable']['element_class'] = 'editable-field';
  $handler->display->display_options['fields']['field_notes_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notes_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_notes_editable']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_notes_editable']['widget_type'] = 'text_textarea';
  $handler->display->display_options['fields']['field_notes_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_notes_editable']['suppress_description'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'application' => 'application',
  );
  $export['application_details_edit'] = $view;

  $view = new view();
  $view->name = 'applications_by_animal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Animal Requests (By Animal)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Secondary Applications (by Animal)';
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
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'nothing_1' => 'nothing_1',
    'field_submission_id' => 'field_submission_id',
    'field_submission_date' => 'field_submission_date',
    'field_applicant_name' => 'field_applicant_name',
    'field_applicant_email_address' => 'field_applicant_email_address',
    'field_status_editable' => 'field_status_editable',
    'field_application_status' => 'field_application_status',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_submission_date';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_submission_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_submission_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_applicant_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_applicant_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_application_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Content: Application (field_application) */
  $handler->display->display_options['relationships']['field_application_nid']['id'] = 'field_application_nid';
  $handler->display->display_options['relationships']['field_application_nid']['table'] = 'field_data_field_application';
  $handler->display->display_options['relationships']['field_application_nid']['field'] = 'field_application_nid';
  $handler->display->display_options['relationships']['field_application_nid']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_application_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_application_nid']['delta'] = '-1';
  /* Relationship: Content: Animal (field_animal) */
  $handler->display->display_options['relationships']['field_animal_nid']['id'] = 'field_animal_nid';
  $handler->display->display_options['relationships']['field_animal_nid']['table'] = 'field_data_field_animal';
  $handler->display->display_options['relationships']['field_animal_nid']['field'] = 'field_animal_nid';
  $handler->display->display_options['relationships']['field_animal_nid']['label'] = 'Animal';
  $handler->display->display_options['relationships']['field_animal_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_animal_nid']['delta'] = '-1';
  /* Field: Animal Request Node ID (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Animal Request Node ID (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Application Node ID (hidden) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_application_nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Application Node ID (hidden)';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = FALSE;
  /* Field: View Application Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'View Application Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<img src="/sites/default/files/magnify-view-icon.png">';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'application/[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Submission Id */
  $handler->display->display_options['fields']['field_submission_id']['id'] = 'field_submission_id';
  $handler->display->display_options['fields']['field_submission_id']['table'] = 'field_data_field_submission_id';
  $handler->display->display_options['fields']['field_submission_id']['field'] = 'field_submission_id';
  $handler->display->display_options['fields']['field_submission_id']['relationship'] = 'field_application_nid';
  $handler->display->display_options['fields']['field_submission_id']['label'] = 'Application ID';
  $handler->display->display_options['fields']['field_submission_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_submission_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Submission Date */
  $handler->display->display_options['fields']['field_submission_date']['id'] = 'field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['table'] = 'field_data_field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['field'] = 'field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['relationship'] = 'field_application_nid';
  $handler->display->display_options['fields']['field_submission_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_submission_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Applicant Name */
  $handler->display->display_options['fields']['field_applicant_name']['id'] = 'field_applicant_name';
  $handler->display->display_options['fields']['field_applicant_name']['table'] = 'field_data_field_applicant_name';
  $handler->display->display_options['fields']['field_applicant_name']['field'] = 'field_applicant_name';
  $handler->display->display_options['fields']['field_applicant_name']['relationship'] = 'field_application_nid';
  $handler->display->display_options['fields']['field_applicant_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicant_name']['type'] = 'text_plain';
  /* Field: Content: Applicant E-mail Address */
  $handler->display->display_options['fields']['field_applicant_email_address']['id'] = 'field_applicant_email_address';
  $handler->display->display_options['fields']['field_applicant_email_address']['table'] = 'field_data_field_applicant_email_address';
  $handler->display->display_options['fields']['field_applicant_email_address']['field'] = 'field_applicant_email_address';
  $handler->display->display_options['fields']['field_applicant_email_address']['relationship'] = 'field_application_nid';
  $handler->display->display_options['fields']['field_applicant_email_address']['label'] = 'Applicant E-mail';
  $handler->display->display_options['fields']['field_applicant_email_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicant_email_address']['type'] = 'text_plain';
  /* Field: Content: Status (editable) */
  $handler->display->display_options['fields']['field_status_editable']['id'] = 'field_status_editable';
  $handler->display->display_options['fields']['field_status_editable']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status_editable']['field'] = 'field_status_editable';
  $handler->display->display_options['fields']['field_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status_editable']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_status_editable']['element_class'] = 'animal-request-status editable-field';
  $handler->display->display_options['fields']['field_status_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_status_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_status_editable']['widget_type'] = 'options_select';
  $handler->display->display_options['fields']['field_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_status_editable']['suppress_description'] = 0;
  /* Field: Content: Overall Status */
  $handler->display->display_options['fields']['field_application_status']['id'] = 'field_application_status';
  $handler->display->display_options['fields']['field_application_status']['table'] = 'field_data_field_application_status';
  $handler->display->display_options['fields']['field_application_status']['field'] = 'field_application_status';
  $handler->display->display_options['fields']['field_application_status']['relationship'] = 'field_application_nid';
  $handler->display->display_options['fields']['field_application_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Download PDF Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Download PDF Link';
  $handler->display->display_options['fields']['nothing']['label'] = 'PDF';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Download';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/115/submission/[field_submission_id]/downloadpdf';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'application-link button-link button-link-narrow';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_animal_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'animal_request' => 'animal_request',
  );
  /* Filter criterion: Content: Is Primary (field_is_primary) */
  $handler->display->display_options['filters']['field_is_primary_value']['id'] = 'field_is_primary_value';
  $handler->display->display_options['filters']['field_is_primary_value']['table'] = 'field_data_field_is_primary';
  $handler->display->display_options['filters']['field_is_primary_value']['field'] = 'field_is_primary_value';
  $handler->display->display_options['filters']['field_is_primary_value']['value'] = array(
    1 => '1',
  );

  /* Display: Animal Requests (Primary) */
  $handler = $view->new_display('block', 'Animal Requests (Primary)', 'animal_requests_primary');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Primary Requests (by Animal)';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>No primary applications have been filed yet!</em>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['block_description'] = 'Primary Animal Requests';

  /* Display: Animal Requests (Secondary) */
  $handler = $view->new_display('block', 'Animal Requests (Secondary)', 'animal_requests_secondary');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Secondary Requests (by Animal)';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>No secondary applications have been filed yet!</em>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
    'animal_request' => 'animal_request',
  );
  /* Filter criterion: Content: Is Primary (field_is_primary) */
  $handler->display->display_options['filters']['field_is_primary_value']['id'] = 'field_is_primary_value';
  $handler->display->display_options['filters']['field_is_primary_value']['table'] = 'field_data_field_is_primary';
  $handler->display->display_options['filters']['field_is_primary_value']['field'] = 'field_is_primary_value';
  $handler->display->display_options['filters']['field_is_primary_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['block_description'] = 'Secondary Animal Requests';
  $export['applications_by_animal'] = $view;

  $view = new view();
  $view->name = 'composite_animal_requests';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Composite Animal Requests';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Composite Animal Requests';
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
  /* Field: Animal Node ID (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Animal Node ID (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Subview */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Subview';
  $handler->display->display_options['fields']['view']['label'] = 'Primary Applications';
  $handler->display->display_options['fields']['view']['element_type'] = 'div';
  $handler->display->display_options['fields']['view']['element_class'] = 'animal-profile-applications';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['view']['element_label_class'] = 'animal-profile-header';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'applications_by_animal';
  $handler->display->display_options['fields']['view']['display'] = 'animal_requests_primary';
  $handler->display->display_options['fields']['view']['arguments'] = '[%nid]';
  /* Field: Subview */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Subview';
  $handler->display->display_options['fields']['view_1']['label'] = 'Secondary Applications';
  $handler->display->display_options['fields']['view_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_1']['element_class'] = 'animal-profile-applications';
  $handler->display->display_options['fields']['view_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['view_1']['element_label_class'] = 'animal-profile-header';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'applications_by_animal';
  $handler->display->display_options['fields']['view_1']['display'] = 'animal_requests_secondary';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[%nid]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  $export['composite_animal_requests'] = $view;

  return $export;
}
