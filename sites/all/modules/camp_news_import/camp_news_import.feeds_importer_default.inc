<?php
/**
 * @file
 * camp_news_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function camp_news_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'camp_news_import';
  $feeds_importer->config = array(
    'name' => 'Camp News Import',
    'description' => 'Camp News Import Feature',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'camp_news_parser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'callout',
            'target' => 'field_callout',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'image_url',
            'target' => 'field_thumbnail_image',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'url',
            'target' => 'field_link:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'pubdate',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'url',
            'target' => 'guid',
            'unique' => 1,
          ),
          6 => array(
            'source' => 'image_alt',
            'target' => 'field_thumbnail_alt',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'camp_news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '21600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['camp_news_import'] = $feeds_importer;

  return $export;
}
