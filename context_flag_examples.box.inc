<?php
/**
 * @file
 * context_flag_examples.box.inc
 */

/**
 * Implements hook_default_box().
 */
function context_flag_examples_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'left_box';
  $box->plugin_key = 'simple';
  $box->title = 'Right Sidebar Hidden';
  $box->description = 'Right rail descriptor';
  $box->options = array(
    'body' => array(
      'value' => 'You have chosen to hide the right sidebar.',
      'format' => 'filtered_html',
    ),
  );
  $export['left_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'left_default';
  $box->plugin_key = 'simple';
  $box->title = 'Default Left Block';
  $box->description = 'Left Default';
  $box->options = array(
    'body' => array(
      'value' => 'This is a left side block so the left sidebar is visible.',
      'format' => 'filtered_html',
    ),
  );
  $export['left_default'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'no_rails';
  $box->plugin_key = 'simple';
  $box->title = 'Both Sidebars Hidden';
  $box->description = 'No rail descriptor';
  $box->options = array(
    'body' => array(
      'value' => 'You have chosen to hide both sidebars.',
      'format' => 'filtered_html',
    ),
  );
  $export['no_rails'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'right_box';
  $box->plugin_key = 'simple';
  $box->title = 'Left Sidebar Hidden';
  $box->description = 'Left rail descriptor';
  $box->options = array(
    'body' => array(
      'value' => 'You have hidden the left sidebar.',
      'format' => 'filtered_html',
    ),
  );
  $export['right_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'right_default';
  $box->plugin_key = 'simple';
  $box->title = 'Default Right Block';
  $box->description = 'Right Default';
  $box->options = array(
    'body' => array(
      'value' => 'This is a default block so the right sidebar is visible.',
      'format' => 'filtered_html',
    ),
  );
  $export['right_default'] = $box;

  return $export;
}
