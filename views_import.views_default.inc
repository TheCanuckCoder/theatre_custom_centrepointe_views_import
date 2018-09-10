<?php
/**
 * @file
 * views_import.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_import_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Coming Up';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No events available at the moment.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Content: Event Date (field_dates:delta) */
  $handler->display->display_options['arguments']['delta']['id'] = 'delta';
  $handler->display->display_options['arguments']['delta']['table'] = 'field_data_field_dates';
  $handler->display->display_options['arguments']['delta']['field'] = 'delta';
  $handler->display->display_options['arguments']['delta']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['delta']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['delta']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['delta']['summary_options']['items_per_page'] = '25';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['skip_empty_pages'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['calendar_date_link'] = 'event';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'event' => '#ffffff',
    'news' => '#ffffff',
    'page' => '#ffffff',
    'rental' => '#ffffff',
    'slide' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Coming up */
  $handler = $view->new_display('block', 'Coming up', 'coming_up');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/calendar-field-collection-item-field-preferred-dates/month/2018-05?page=0" class="view-all-events btn btn-with-arrow" alt="View all events calendar">VIEW FULL EVENTS CALENDAR</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Event Date (field_dates) */
  $handler->display->display_options['relationships']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['relationships']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['relationships']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['relationships']['field_dates_value']['delta'] = '0';
  /* Relationship: Content: Event Image (field_event_image:fid) */
  $handler->display->display_options['relationships']['field_event_image_fid']['id'] = 'field_event_image_fid';
  $handler->display->display_options['relationships']['field_event_image_fid']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['relationships']['field_event_image_fid']['field'] = 'field_event_image_fid';
  $handler->display->display_options['relationships']['field_event_image_fid']['label'] = 'Event Image File';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Genre */
  $handler->display->display_options['fields']['field_event_genre']['id'] = 'field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['table'] = 'field_data_field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['field'] = 'field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['label'] = '';
  $handler->display->display_options['fields']['field_event_genre']['element_class'] = 'views-field-field-event-type [field_event_genre]';
  $handler->display->display_options['fields']['field_event_genre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_genre']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_genre']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_genre']['delta_offset'] = '0';
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'events_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_event_image']['field_api_classes'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Event Description';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_sold_out_',
    1 => 'title',
    2 => 'field_dates',
    3 => 'field_event_venue',
    4 => 'field_advisory',
    5 => 'field_tickets_link',
    6 => 'path',
    7 => 'field_event_image_1',
    8 => 'fieldset_1',
    9 => 'field_organization',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'event-info';
  /* Field: Content: Sold out? */
  $handler->display->display_options['fields']['field_sold_out_']['id'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['table'] = 'field_data_field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out_']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['alter']['text'] = 'Sold Out';
  $handler->display->display_options['fields']['field_sold_out_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['type'] = 'list_key';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'strong';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['element_wrapper_class'] = 'strong';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'add' => '',
    'edit' => '',
    'translate' => '',
    'delete' => '',
    'description' => 0,
    'view_mode' => 'event_whats_on',
  );
  $handler->display->display_options['fields']['field_dates']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dates']['delta_first_last'] = TRUE;
  $handler->display->display_options['fields']['field_dates']['separator'] = '-';
  /* Field: Content: Advisory */
  $handler->display->display_options['fields']['field_advisory']['id'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['table'] = 'field_data_field_advisory';
  $handler->display->display_options['fields']['field_advisory']['field'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_advisory']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_advisory']['click_sort_column'] = 'value';
  $handler->display->display_options['fields']['field_advisory']['type'] = 'text_default';
  $handler->display->display_options['fields']['field_advisory']['group_column'] = 'value';
  /* Field: Content: Ticket Link */
  $handler->display->display_options['fields']['field_tickets_link']['id'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['table'] = 'field_data_field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['field'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['label'] = 'TICKETS';
  $handler->display->display_options['fields']['field_tickets_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['text'] = '<a href="[field_tickets_link-url]" class="btn btn-small">TICKETS</a>';
  $handler->display->display_options['fields']['field_tickets_link']['alter']['path'] = '[field_tickets_link-url] ';
  $handler->display->display_options['fields']['field_tickets_link']['alter']['link_class'] = 'btn btn-small';
  $handler->display->display_options['fields']['field_tickets_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tickets_link']['click_sort_column'] = 'url';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]" class="btn btn-small">INFO</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image_1']['id'] = 'field_event_image_1';
  $handler->display->display_options['fields']['field_event_image_1']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image_1']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_1']['alter']['text'] = '[field_event_image_1-title]';
  $handler->display->display_options['fields']['field_event_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image_1']['element_wrapper_class'] = 'action-btns';
  $handler->display->display_options['fields']['field_event_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Buttons and Credit';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_promo_code_url',
    1 => 'field_sold_out__1',
    2 => 'nothing',
    3 => 'field_file_image_credit',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'buttons [field_sold_out__1]';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['id'] = 'buttongroup-comingup';
  /* Field: Content: Promo Code URL */
  $handler->display->display_options['fields']['field_promo_code_url']['id'] = 'field_promo_code_url';
  $handler->display->display_options['fields']['field_promo_code_url']['table'] = 'field_data_field_promo_code_url';
  $handler->display->display_options['fields']['field_promo_code_url']['field'] = 'field_promo_code_url';
  $handler->display->display_options['fields']['field_promo_code_url']['label'] = '';
  $handler->display->display_options['fields']['field_promo_code_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promo_code_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_promo_code_url']['alter']['text'] = '<a href="[field_promo_code-url]" class="btn btn-small">Promo Code</a>';
  $handler->display->display_options['fields']['field_promo_code_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promo_code_url']['element_default_classes'] = FALSE;
  /* Field: Tickets / Sold Out */
  $handler->display->display_options['fields']['field_sold_out__1']['id'] = 'field_sold_out__1';
  $handler->display->display_options['fields']['field_sold_out__1']['table'] = 'field_data_field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out__1']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out__1']['ui_name'] = 'Tickets / Sold Out';
  $handler->display->display_options['fields']['field_sold_out__1']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out__1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['field_sold_out__1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out__1']['empty'] = '[field_tickets_link] [field_promo_code_url]';
  $handler->display->display_options['fields']['field_sold_out__1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['type'] = 'list_key';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_sold_out__1]
[path]';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'action-btns';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: File: Photo Credit */
  $handler->display->display_options['fields']['field_file_image_credit']['id'] = 'field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit']['table'] = 'field_data_field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit']['field'] = 'field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit']['relationship'] = 'field_event_image_fid';
  $handler->display->display_options['fields']['field_file_image_credit']['label'] = 'Photo';
  $handler->display->display_options['fields']['field_file_image_credit']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit']['element_wrapper_class'] = 'action-btns';
  $handler->display->display_options['fields']['field_file_image_credit']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Max End Date (field_max_end_date) */
  $handler->display->display_options['sorts']['field_max_end_date_value']['id'] = 'field_max_end_date_value';
  $handler->display->display_options['sorts']['field_max_end_date_value']['table'] = 'field_data_field_max_end_date';
  $handler->display->display_options['sorts']['field_max_end_date_value']['field'] = 'field_max_end_date_value';
  $handler->display->display_options['sorts']['field_max_end_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Min Start Date (field_min_start_date) */
  $handler->display->display_options['sorts']['field_min_start_date_value']['id'] = 'field_min_start_date_value';
  $handler->display->display_options['sorts']['field_min_start_date_value']['table'] = 'field_data_field_min_start_date';
  $handler->display->display_options['sorts']['field_min_start_date_value']['field'] = 'field_min_start_date_value';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Field collection item: Date -  start date (field_preferred_dates) */
  $handler->display->display_options['filters']['field_preferred_dates_value']['id'] = 'field_preferred_dates_value';
  $handler->display->display_options['filters']['field_preferred_dates_value']['table'] = 'field_data_field_preferred_dates';
  $handler->display->display_options['filters']['field_preferred_dates_value']['field'] = 'field_preferred_dates_value';
  $handler->display->display_options['filters']['field_preferred_dates_value']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_preferred_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_preferred_dates_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_preferred_dates_value']['year_range'] = '-0:+3';
  /* Filter criterion: Field collection item: Date - end date (field_preferred_dates:value2) */
  $handler->display->display_options['filters']['field_preferred_dates_value2']['id'] = 'field_preferred_dates_value2';
  $handler->display->display_options['filters']['field_preferred_dates_value2']['table'] = 'field_data_field_preferred_dates';
  $handler->display->display_options['filters']['field_preferred_dates_value2']['field'] = 'field_preferred_dates_value2';
  $handler->display->display_options['filters']['field_preferred_dates_value2']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_preferred_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_preferred_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Field collection item: Expiry Date (field_expiry_date) */
  $handler->display->display_options['filters']['field_expiry_date_value']['id'] = 'field_expiry_date_value';
  $handler->display->display_options['filters']['field_expiry_date_value']['table'] = 'field_data_field_expiry_date';
  $handler->display->display_options['filters']['field_expiry_date_value']['field'] = 'field_expiry_date_value';
  $handler->display->display_options['filters']['field_expiry_date_value']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_expiry_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_expiry_date_value']['default_date'] = 'now';

  /* Display: Featured Block */
  $handler = $view->new_display('block', 'Featured Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '6';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'featured_events_thumbnail',
    'image_link' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Event Description';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'path',
    2 => 'body',
    3 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'event-info';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]" class="btn btn-small">VIEW DETAILS</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_link',
    1 => 'field_event_image',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'action-btns';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '<a class="btn" href="[field_link-url] ">VIEW DETAILS</a>';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_short';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['alter']['text'] = '<div class="photo-cred">Photo: [field_event_image-title]</div>';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'featured_content' => 'featured_content',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Display on Front Page (field_display_on_front_page) */
  $handler->display->display_options['filters']['field_display_on_front_page_value']['id'] = 'field_display_on_front_page_value';
  $handler->display->display_options['filters']['field_display_on_front_page_value']['table'] = 'field_data_field_display_on_front_page';
  $handler->display->display_options['filters']['field_display_on_front_page_value']['field'] = 'field_display_on_front_page_value';
  $handler->display->display_options['filters']['field_display_on_front_page_value']['value'] = array(
    1 => '1',
  );

  /* Display: What's On List */
  $handler = $view->new_display('block', 'What\'s On List', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Show Results';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'keys' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_event_genre_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_age_group_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_event_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_special_presentations_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_event_date_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'View More Events';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '12';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '12';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="filter-bar"><a class="btn" id="filter-btn">Filter</a><a class="btn" id="calendar-btn">Calendar</a><a  id="clear-all">Clear All</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Result Item';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'fieldset_1',
    1 => 'fieldset_2',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['classes'] = 'event-result-item';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_event_type',
    1 => 'field_sold_out_',
    2 => 'field_event_image',
    3 => 'field_event_image_1',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'event-img-container';
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Sold out? */
  $handler->display->display_options['fields']['field_sold_out_']['id'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['table'] = 'field_data_field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out_']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['alter']['text'] = 'Sold Out';
  $handler->display->display_options['fields']['field_sold_out_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out_']['hide_empty'] = TRUE;
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'events_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image_1']['id'] = 'field_event_image_1';
  $handler->display->display_options['fields']['field_event_image_1']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image_1']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_1']['alter']['text'] = '<div class="photo-cred">Photo: [field_event_image_1-title] </div>';
  $handler->display->display_options['fields']['field_event_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Event Info';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'body',
    2 => 'field_advisory',
    3 => 'fieldset',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'event-info';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '150',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Advisory */
  $handler->display->display_options['fields']['field_advisory']['id'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['table'] = 'field_data_field_advisory';
  $handler->display->display_options['fields']['field_advisory']['field'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['click_sort_column'] = 'value';
  $handler->display->display_options['fields']['field_advisory']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_advisory']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '60',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  $handler->display->display_options['fields']['field_advisory']['group_column'] = 'value';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_tickets_link',
    1 => 'path',
    2 => 'field_promo_code_url',
    3 => 'field_promo_code',
    4 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'action-btns';
  /* Field: Content: Ticket Link */
  $handler->display->display_options['fields']['field_tickets_link']['id'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['table'] = 'field_data_field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['field'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['label'] = '';
  $handler->display->display_options['fields']['field_tickets_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['text'] = '<a href="[field_tickets_link-url]" class="btn btn-small">TICKETS</a>';
  $handler->display->display_options['fields']['field_tickets_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tickets_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tickets_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tickets_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tickets_link']['type'] = 'link_label';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]" class="btn btn-small">INFO</a>';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Promo Code URL */
  $handler->display->display_options['fields']['field_promo_code_url']['id'] = 'field_promo_code_url';
  $handler->display->display_options['fields']['field_promo_code_url']['table'] = 'field_data_field_promo_code_url';
  $handler->display->display_options['fields']['field_promo_code_url']['field'] = 'field_promo_code_url';
  $handler->display->display_options['fields']['field_promo_code_url']['label'] = '';
  $handler->display->display_options['fields']['field_promo_code_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promo_code_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_promo_code_url']['alter']['text'] = '<a href="[field_promo_code_url] " class="btn">Promo Code</a>';
  $handler->display->display_options['fields']['field_promo_code_url']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_tickets_link]
[path]
[field_promo_code_url]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Event Genre (field_event_genre) */
  $handler->display->display_options['filters']['field_event_genre_tid']['id'] = 'field_event_genre_tid';
  $handler->display->display_options['filters']['field_event_genre_tid']['table'] = 'field_data_field_event_genre';
  $handler->display->display_options['filters']['field_event_genre_tid']['field'] = 'field_event_genre_tid';
  $handler->display->display_options['filters']['field_event_genre_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_genre_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_genre_tid']['expose']['operator_id'] = 'field_event_genre_tid_op';
  $handler->display->display_options['filters']['field_event_genre_tid']['expose']['label'] = 'Event Genre (field_event_genre)';
  $handler->display->display_options['filters']['field_event_genre_tid']['expose']['operator'] = 'field_event_genre_tid_op';
  $handler->display->display_options['filters']['field_event_genre_tid']['expose']['identifier'] = 'field_event_genre_tid';
  $handler->display->display_options['filters']['field_event_genre_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_genre_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_event_genre_tid']['group_info']['label'] = 'By Genre';
  $handler->display->display_options['filters']['field_event_genre_tid']['group_info']['identifier'] = 'field_event_genre_tid';
  $handler->display->display_options['filters']['field_event_genre_tid']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_event_genre_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_genre_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Variety',
      'operator' => 'or',
      'value' => array(
        20 => '20',
      ),
    ),
    2 => array(
      'title' => 'Music',
      'operator' => 'or',
      'value' => array(
        21 => '21',
      ),
    ),
    3 => array(
      'title' => 'Comedy',
      'operator' => 'or',
      'value' => array(
        22 => '22',
      ),
    ),
    4 => array(
      'title' => 'Family',
      'operator' => 'or',
      'value' => array(
        23 => '23',
      ),
    ),
    5 => array(
      'title' => 'Theatre',
      'operator' => 'or',
      'value' => array(
        24 => '24',
      ),
    ),
    6 => array(
      'title' => 'Dance',
      'operator' => 'or',
      'value' => array(
        25 => '25',
      ),
    ),
    7 => array(
      'title' => 'Film',
      'operator' => 'or',
      'value' => array(
        26 => '26',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_event_genre_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_genre_tid']['vocabulary'] = 'event_genre';
  /* Filter criterion: Content: Age Group (field_age_group) */
  $handler->display->display_options['filters']['field_age_group_tid']['id'] = 'field_age_group_tid';
  $handler->display->display_options['filters']['field_age_group_tid']['table'] = 'field_data_field_age_group';
  $handler->display->display_options['filters']['field_age_group_tid']['field'] = 'field_age_group_tid';
  $handler->display->display_options['filters']['field_age_group_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_age_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_group_tid']['expose']['operator_id'] = 'field_age_group_tid_op';
  $handler->display->display_options['filters']['field_age_group_tid']['expose']['label'] = 'Age Group (field_age_group)';
  $handler->display->display_options['filters']['field_age_group_tid']['expose']['operator'] = 'field_age_group_tid_op';
  $handler->display->display_options['filters']['field_age_group_tid']['expose']['identifier'] = 'field_age_group_tid';
  $handler->display->display_options['filters']['field_age_group_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_age_group_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_age_group_tid']['group_info']['label'] = 'By Age';
  $handler->display->display_options['filters']['field_age_group_tid']['group_info']['identifier'] = 'field_age_group_tid';
  $handler->display->display_options['filters']['field_age_group_tid']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_age_group_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_age_group_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '0-4',
      'operator' => 'or',
      'value' => array(
        27 => '27',
      ),
    ),
    2 => array(
      'title' => '5-12',
      'operator' => 'or',
      'value' => array(
        28 => '28',
      ),
    ),
    3 => array(
      'title' => '13-17',
      'operator' => 'or',
      'value' => array(
        29 => '29',
      ),
    ),
    4 => array(
      'title' => '18+',
      'operator' => 'or',
      'value' => array(
        30 => '30',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_age_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_age_group_tid']['vocabulary'] = 'age_group';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'By Genre';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['group_info']['label'] = 'By Event Type';
  $handler->display->display_options['filters']['field_event_type_tid']['group_info']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_event_type_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Camp',
      'operator' => 'or',
      'value' => array(
        17 => '17',
      ),
    ),
    2 => array(
      'title' => 'Class',
      'operator' => 'or',
      'value' => array(
        16 => '16',
      ),
    ),
    3 => array(
      'title' => 'Outing',
      'operator' => 'or',
      'value' => array(
        19 => '19',
      ),
    ),
    4 => array(
      'title' => 'Performance',
      'operator' => 'or',
      'value' => array(
        14 => '14',
      ),
    ),
    5 => array(
      'title' => 'Private',
      'operator' => 'or',
      'value' => array(
        15 => '15',
      ),
    ),
    6 => array(
      'title' => 'School',
      'operator' => 'or',
      'value' => array(
        18 => '18',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'alert' => '#ffffff',
    'event' => '#ffffff',
    'news' => '#ffffff',
    'page' => '#ffffff',
    'radios_test' => '#ffffff',
    'rental' => '#ffffff',
    'rental_inquiry' => '#ffffff',
    'rental_space' => '#ffffff',
    'slide' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'default' => 0,
    'page' => 0,
    'coming_up' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $handler->display->display_options['inherit_pager'] = TRUE;

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $export['events'] = $view;

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '6';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'news_thumbnails',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '20',
  );
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '6';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'news_thumbnails',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'News Content';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'body',
    2 => 'path',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'news-content';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '70',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'READ MORE',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]" class="btn btn-small">READ MORE</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;

  /* Display: News Page Block */
  $handler = $view->new_display('block', 'News Page Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '12';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '12';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'path',
    1 => 'field_news_image',
    2 => 'fieldset',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'news-item';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'news_thumbnails',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'created',
    2 => 'body',
    3 => 'path_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'news-content';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'news_date';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '180',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = '';
  $handler->display->display_options['fields']['path_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path_1']['alter']['text'] = '<a href="[path]" class="btn read-more">Read More</a>';
  $handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
  $export['news'] = $view;

  $view = new view();
  $view->name = 'slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['captionfield'] = 'body';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Image (field_image:fid) */
  $handler->display->display_options['relationships']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['relationships']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['relationships']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['relationships']['field_image_fid']['label'] = 'field_image File';
  /* Relationship: Image File */
  $handler->display->display_options['relationships']['reverse_field_news_image_node']['id'] = 'reverse_field_news_image_node';
  $handler->display->display_options['relationships']['reverse_field_news_image_node']['table'] = 'file_managed';
  $handler->display->display_options['relationships']['reverse_field_news_image_node']['field'] = 'reverse_field_news_image_node';
  $handler->display->display_options['relationships']['reverse_field_news_image_node']['relationship'] = 'field_image_fid';
  $handler->display->display_options['relationships']['reverse_field_news_image_node']['ui_name'] = 'Image File';
  $handler->display->display_options['relationships']['reverse_field_news_image_node']['label'] = 'Image File';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'slide-content';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'slide-content';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'wc';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'fieldset_3',
    1 => 'field_block_link',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'wc';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_block_link_1',
    1 => 'title',
    2 => 'field_organization',
    3 => 'body',
    4 => 'field_file_image_credit_et',
    5 => 'field_dates_1',
    6 => 'field_dates',
    7 => 'field_no_date',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['classes'] = 'event-slider-title';
  /* Field: Field: Link */
  $handler->display->display_options['fields']['field_block_link_1']['id'] = 'field_block_link_1';
  $handler->display->display_options['fields']['field_block_link_1']['table'] = 'field_data_field_block_link';
  $handler->display->display_options['fields']['field_block_link_1']['field'] = 'field_block_link';
  $handler->display->display_options['fields']['field_block_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_block_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_block_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_block_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_block_link_1']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_block_link_1]">[field_slide_title]</a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_block_link_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['alter']['text'] = '[field_organization] Presents';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Entity translation: Photo Credit: translated */
  $handler->display->display_options['fields']['field_file_image_credit_et']['id'] = 'field_file_image_credit_et';
  $handler->display->display_options['fields']['field_file_image_credit_et']['table'] = 'field_data_field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit_et']['field'] = 'field_file_image_credit_et';
  $handler->display->display_options['fields']['field_file_image_credit_et']['relationship'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_file_image_credit_et']['label'] = 'Photo';
  $handler->display->display_options['fields']['field_file_image_credit_et']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit_et']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit_et']['element_wrapper_class'] = 'photo-cred';
  $handler->display->display_options['fields']['field_file_image_credit_et']['hide_empty'] = TRUE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_dates_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_dates_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dates_1']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'view_mode' => 'event_whats_on',
  );
  $handler->display->display_options['fields']['field_dates_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dates_1']['separator'] = ' - ';
  /* Field: Content: No date */
  $handler->display->display_options['fields']['field_no_date']['id'] = 'field_no_date';
  $handler->display->display_options['fields']['field_no_date']['table'] = 'field_data_field_no_date';
  $handler->display->display_options['fields']['field_no_date']['field'] = 'field_no_date';
  $handler->display->display_options['fields']['field_no_date']['label'] = '';
  $handler->display->display_options['fields']['field_no_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_no_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_no_date']['alter']['text'] = '[field_dates]';
  $handler->display->display_options['fields']['field_no_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_no_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_no_date']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_no_date']['type'] = 'list_key';
  /* Field: Field: Link */
  $handler->display->display_options['fields']['field_block_link']['id'] = 'field_block_link';
  $handler->display->display_options['fields']['field_block_link']['table'] = 'field_data_field_block_link';
  $handler->display->display_options['fields']['field_block_link']['field'] = 'field_block_link';
  $handler->display->display_options['fields']['field_block_link']['label'] = '';
  $handler->display->display_options['fields']['field_block_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_block_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_block_link']['click_sort_column'] = 'url';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'slide' => 'slide',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['slideshow'] = $view;

  return $export;
}
