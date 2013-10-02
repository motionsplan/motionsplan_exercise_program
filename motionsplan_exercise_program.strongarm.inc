<?php
/**
 * @file
 * motionsplan_exercise_program.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function motionsplan_exercise_program_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_trainingprogram';
  $strongarm->value = '2';
  $export['comment_anonymous_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_trainingprogram';
  $strongarm->value = '3';
  $export['comment_controls_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_trainingprogram';
  $strongarm->value = 1;
  $export['comment_default_mode_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_trainingprogram';
  $strongarm->value = '1';
  $export['comment_default_order_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_trainingprogram';
  $strongarm->value = '50';
  $export['comment_default_per_page_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_trainingprogram';
  $strongarm->value = 1;
  $export['comment_form_location_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_trainingprogram';
  $strongarm->value = '2';
  $export['comment_preview_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_trainingprogram';
  $strongarm->value = 0;
  $export['comment_subject_field_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_trainingprogram';
  $strongarm->value = '2';
  $export['comment_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__trainingprogram';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'body' => array(
          'weight' => '-3',
        ),
        'revision_information' => array(
          'weight' => '0',
        ),
        'author' => array(
          'weight' => '1',
        ),
        'options' => array(
          'weight' => '2',
        ),
        'comment_settings' => array(
          'weight' => '3',
        ),
        'menu' => array(
          'weight' => '-4',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'metatags' => array(
          'weight' => '3',
        ),
        'mollom' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'exercise_list' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_trainingprogram';
  $strongarm->value = '0';
  $export['language_content_type_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_trainingprogram';
  $strongarm->value = array();
  $export['menu_options_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_trainingprogram';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_trainingprogram';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_trainingprogram';
  $strongarm->value = '0';
  $export['node_preview_trainingprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_trainingprogram';
  $strongarm->value = 1;
  $export['node_submitted_trainingprogram'] = $strongarm;

  return $export;
}
