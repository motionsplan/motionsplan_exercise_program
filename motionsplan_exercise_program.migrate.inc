<?php

/**
 * @file
 *  Migrations for motionsplan_exercise.
 */

class MotionsplanProgramNode extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import exercise program nodes.');
    $this->dependencies = array('MotionsplanExerciseNode');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'motionsplan_exercise_program') . '/import/programs.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('trainingprogram');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');

    $this->addFieldMapping('body', 'description');
    $this->addFieldMapping('body:format')
      ->defaultValue('plain_text');

    $this->addFieldMapping('field_program_exercises', 'exercises')
      ->sourceMigration('MotionsplanExerciseNode');
  }

  function csvcolumns() {
    $columns[0] = array('id', 'id');
    $columns[1] = array('title', 'title');
    $columns[2] = array('exercises');
    return $columns;
  }
}
