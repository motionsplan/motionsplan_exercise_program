<?php
/**
 * @file
 * motionsplan_exercise_program.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function motionsplan_exercise_program_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create trainingprogram content'.
  $permissions['create trainingprogram content'] = array(
    'name' => 'create trainingprogram content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own trainingprogram content'.
  $permissions['delete own trainingprogram content'] = array(
    'name' => 'delete own trainingprogram content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own trainingprogram content'.
  $permissions['edit own trainingprogram content'] = array(
    'name' => 'edit own trainingprogram content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
