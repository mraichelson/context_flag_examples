<?php
/**
 * @file
 * context_flag_examples.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_flag_examples_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cf_sitewide';
  $context->description = '';
  $context->tag = 'context_flag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin*' => '~admin*',
        '~node*edit' => '~node*edit',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-left_default' => array(
          'module' => 'boxes',
          'delta' => 'left_default',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'boxes-right_default' => array(
          'module' => 'boxes',
          'delta' => 'right_default',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('context_flag');
  $export['cf_sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cf_user';
  $context->description = 'settings for users flagged as special.';
  $context->tag = 'context_flag';
  $context->conditions = array(
    'user_account_active' => array(
      'values' => array(
        'special_user_flag' => 'special_user_flag',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-special_user' => array(
          'module' => 'boxes',
          'delta' => 'special_user',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('context_flag');
  t('settings for users flagged as special.');
  $export['cf_user'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hide_both_sidebars';
  $context->description = '';
  $context->tag = 'context_flag';
  $context->conditions = array(
    'node_active' => array(
      'values' => array(
        'hide_left_sidebar' => 'hide_left_sidebar',
        'hide_right_sidebar' => 'hide_right_sidebar',
      ),
      'options' => array(
        'flag_node_active' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-no_rails' => array(
          'module' => 'boxes',
          'delta' => 'no_rails',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('context_flag');
  $export['hide_both_sidebars'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hide_left_sidebar';
  $context->description = '';
  $context->tag = 'context_flag';
  $context->conditions = array(
    'node_active' => array(
      'values' => array(
        'hide_left_sidebar' => 'hide_left_sidebar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-right_box' => array(
          'module' => 'boxes',
          'delta' => 'right_box',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'sidebar_first' => 'sidebar_first',
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context_flag');
  $export['hide_left_sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hide_right_sidebar';
  $context->description = '';
  $context->tag = 'context_flag';
  $context->conditions = array(
    'node_active' => array(
      'values' => array(
        'hide_right_sidebar' => 'hide_right_sidebar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-left_box' => array(
          'module' => 'boxes',
          'delta' => 'left_box',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'sidebar_second' => 'sidebar_second',
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context_flag');
  $export['hide_right_sidebar'] = $context;

  return $export;
}
