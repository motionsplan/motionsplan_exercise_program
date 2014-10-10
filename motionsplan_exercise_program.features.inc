<?php
/**
 * @file
 * motionsplan_exercise_program.features.inc
 */

/**
 * Implements hook_migrate_api().
 */
function motionsplan_exercise_program_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'MotionsplanProgramNode' => array('class_name' => 'MotionsplanProgramNode'),
    ),
  );

  return $api;
}


/**
 * Implements hook_ctools_plugin_api().
 */
function motionsplan_exercise_program_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function motionsplan_exercise_program_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function motionsplan_exercise_program_node_info() {
  $items = array(
    'trainingprogram' => array(
      'name' => t('Træningsprogram'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
