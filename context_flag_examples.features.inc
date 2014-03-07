<?php
/**
 * @file
 * context_flag_examples.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function context_flag_examples_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function context_flag_examples_flag_default_flags() {
  $flags = array();
  // Exported flag: "Hide left sidebar".
  $flags['hide_left_sidebar'] = array(
    'entity_type' => 'node',
    'title' => 'Hide left sidebar',
    'global' => 1,
    'types' => array(
      0 => 'article',
      1 => 'page',
    ),
    'flag_short' => 'Hide Left Sidebar',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Show Left Sidebar',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => -7,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'context_flag_examples',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Hide right sidebar".
  $flags['hide_right_sidebar'] = array(
    'entity_type' => 'node',
    'title' => 'Hide right sidebar',
    'global' => 1,
    'types' => array(
      0 => 'article',
      1 => 'page',
    ),
    'flag_short' => 'Hide Right Sidebar',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Show Right Sidebar',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => -6,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'context_flag_examples',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Special User Flag".
  $flags['special_user_flag'] = array(
    'entity_type' => 'user',
    'title' => 'Special User Flag',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Make this user Special',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Make this user Normal',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -8,
    'show_in_links' => array(
      'full' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => '',
    'module' => 'context_flag_examples',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
