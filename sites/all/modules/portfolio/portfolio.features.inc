<?php
/**
 * @file
 * portfolio.features.inc
 */

/**
 * Implements hook_views_api().
 */
function portfolio_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function portfolio_image_default_styles() {
  $styles = array();

  // Exported image style: portfolio_screenshot.
  $styles['portfolio_screenshot'] = array(
    'label' => 'Portfolio Screenshot',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_screenshot_preview.
  $styles['portfolio_screenshot_preview'] = array(
    'label' => 'Portfolio Screenshot Preview',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function portfolio_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => t('Use this content type to showcase a portfolio piece.'),
      'has_title' => '1',
      'title_label' => t('Project'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
