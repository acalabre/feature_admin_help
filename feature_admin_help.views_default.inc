<?php
/**
 * @file
 * feature_admin_help.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function feature_admin_help_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'admin_faqs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin FAQs';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admin FAQs';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'The videos are hosted on Vimeo and password protected. Password: <strong>forza</strong>.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_admin_faq_photo']['id'] = 'field_admin_faq_photo';
  $handler->display->display_options['fields']['field_admin_faq_photo']['table'] = 'field_data_field_admin_faq_photo';
  $handler->display->display_options['fields']['field_admin_faq_photo']['field'] = 'field_admin_faq_photo';
  $handler->display->display_options['fields']['field_admin_faq_photo']['label'] = '';
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_faq_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_admin_faq_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_admin_faq_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_admin_faq_photo']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_admin_faq_photo']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_admin_faq_photo']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_photo']['field_api_classes'] = 0;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_admin_faq_video']['id'] = 'field_admin_faq_video';
  $handler->display->display_options['fields']['field_admin_faq_video']['table'] = 'field_data_field_admin_faq_video';
  $handler->display->display_options['fields']['field_admin_faq_video']['field'] = 'field_admin_faq_video';
  $handler->display->display_options['fields']['field_admin_faq_video']['label'] = '';
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_faq_video']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_admin_faq_video']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_admin_faq_video']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'admin_faq' => 'admin_faq',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin-faqs';
  $export['admin_faqs'] = $view;

  return $export;
}
