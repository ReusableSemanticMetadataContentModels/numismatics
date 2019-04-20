<?php

/**
 * @file
 * rms_101.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function rms_101_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|numismatic_collection|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'numismatic_collection';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_obverse_',
        1 => 'field_image_reverse_',
      ),
      'right' => array(
        2 => 'field_artist',
        3 => 'field_issue_authority',
        4 => 'field_material_',
        5 => 'field_denomination',
        6 => 'field_axis',
        7 => 'field_weight',
        8 => 'field_diameter_',
        9 => 'field_culture',
        10 => 'field_mint',
        11 => 'field_date',
        12 => 'field_description_obverse_',
        13 => 'field_inscription_obverse_',
        14 => 'field_description_reverse',
        15 => 'field_inscription_reverse_',
        16 => 'field_bibliography',
        17 => 'field_credit_line',
        18 => 'field_accession_number',
      ),
    ),
    'fields' => array(
      'field_image_obverse_' => 'left',
      'field_image_reverse_' => 'left',
      'field_artist' => 'right',
      'field_issue_authority' => 'right',
      'field_material_' => 'right',
      'field_denomination' => 'right',
      'field_axis' => 'right',
      'field_weight' => 'right',
      'field_diameter_' => 'right',
      'field_culture' => 'right',
      'field_mint' => 'right',
      'field_date' => 'right',
      'field_description_obverse_' => 'right',
      'field_inscription_obverse_' => 'right',
      'field_description_reverse' => 'right',
      'field_inscription_reverse_' => 'right',
      'field_bibliography' => 'right',
      'field_credit_line' => 'right',
      'field_accession_number' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|numismatic_collection|default'] = $ds_layout;

  return $export;
}
