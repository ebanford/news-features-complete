<?php
/**
 * @file
 * camp_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function camp_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function camp_news_node_info() {
  $items = array(
    'camp_news' => array(
      'name' => t('Camp News'),
      'base' => 'node_content',
      'description' => t('Camp News Content Type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
