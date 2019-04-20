<?php

/**
 * @file
 * rms_101.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rms_101_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collection';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Object Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image-Obverse  */
  $handler->display->display_options['fields']['field_image_obverse_']['id'] = 'field_image_obverse_';
  $handler->display->display_options['fields']['field_image_obverse_']['table'] = 'field_data_field_image_obverse_';
  $handler->display->display_options['fields']['field_image_obverse_']['field'] = 'field_image_obverse_';
  $handler->display->display_options['fields']['field_image_obverse_']['label'] = 'Obverse ';
  $handler->display->display_options['fields']['field_image_obverse_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_obverse_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_obverse_']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Image-Reverse  */
  $handler->display->display_options['fields']['field_image_reverse_']['id'] = 'field_image_reverse_';
  $handler->display->display_options['fields']['field_image_reverse_']['table'] = 'field_data_field_image_reverse_';
  $handler->display->display_options['fields']['field_image_reverse_']['field'] = 'field_image_reverse_';
  $handler->display->display_options['fields']['field_image_reverse_']['label'] = 'Reverse';
  $handler->display->display_options['fields']['field_image_reverse_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_reverse_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_reverse_']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
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
    'numismatic_collection' => 'numismatic_collection',
  );
  /* Filter criterion: Content: Artist (field_artist) */
  $handler->display->display_options['filters']['field_artist_tid']['id'] = 'field_artist_tid';
  $handler->display->display_options['filters']['field_artist_tid']['table'] = 'field_data_field_artist';
  $handler->display->display_options['filters']['field_artist_tid']['field'] = 'field_artist_tid';
  $handler->display->display_options['filters']['field_artist_tid']['value'] = '';
  $handler->display->display_options['filters']['field_artist_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artist_tid']['expose']['operator_id'] = 'field_artist_tid_op';
  $handler->display->display_options['filters']['field_artist_tid']['expose']['label'] = 'Artist';
  $handler->display->display_options['filters']['field_artist_tid']['expose']['operator'] = 'field_artist_tid_op';
  $handler->display->display_options['filters']['field_artist_tid']['expose']['identifier'] = 'field_artist_tid';
  $handler->display->display_options['filters']['field_artist_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_artist_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_artist_tid']['vocabulary'] = 'artist';
  $handler->display->display_options['filters']['field_artist_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Material  (field_material_) */
  $handler->display->display_options['filters']['field_material__tid']['id'] = 'field_material__tid';
  $handler->display->display_options['filters']['field_material__tid']['table'] = 'field_data_field_material_';
  $handler->display->display_options['filters']['field_material__tid']['field'] = 'field_material__tid';
  $handler->display->display_options['filters']['field_material__tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_material__tid']['expose']['operator_id'] = 'field_material__tid_op';
  $handler->display->display_options['filters']['field_material__tid']['expose']['label'] = 'Material';
  $handler->display->display_options['filters']['field_material__tid']['expose']['operator'] = 'field_material__tid_op';
  $handler->display->display_options['filters']['field_material__tid']['expose']['identifier'] = 'field_material__tid';
  $handler->display->display_options['filters']['field_material__tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_material__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_material__tid']['vocabulary'] = 'material';
  $handler->display->display_options['filters']['field_material__tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Issue Authority (field_issue_authority) */
  $handler->display->display_options['filters']['field_issue_authority_tid']['id'] = 'field_issue_authority_tid';
  $handler->display->display_options['filters']['field_issue_authority_tid']['table'] = 'field_data_field_issue_authority';
  $handler->display->display_options['filters']['field_issue_authority_tid']['field'] = 'field_issue_authority_tid';
  $handler->display->display_options['filters']['field_issue_authority_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_authority_tid']['expose']['operator_id'] = 'field_issue_authority_tid_op';
  $handler->display->display_options['filters']['field_issue_authority_tid']['expose']['label'] = 'Issue Authority';
  $handler->display->display_options['filters']['field_issue_authority_tid']['expose']['operator'] = 'field_issue_authority_tid_op';
  $handler->display->display_options['filters']['field_issue_authority_tid']['expose']['identifier'] = 'field_issue_authority_tid';
  $handler->display->display_options['filters']['field_issue_authority_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_issue_authority_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_issue_authority_tid']['vocabulary'] = 'issue_authority';
  $handler->display->display_options['filters']['field_issue_authority_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'collection';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Collection';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['collection'] = $view;

  return $export;
}
