<?php
/**
 * @file
 * camp_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function camp_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create camp_news content'.
  $permissions['create camp_news content'] = array(
    'name' => 'create camp_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any camp_news content'.
  $permissions['delete any camp_news content'] = array(
    'name' => 'delete any camp_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own camp_news content'.
  $permissions['delete own camp_news content'] = array(
    'name' => 'delete own camp_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any camp_news content'.
  $permissions['edit any camp_news content'] = array(
    'name' => 'edit any camp_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own camp_news content'.
  $permissions['edit own camp_news content'] = array(
    'name' => 'edit own camp_news content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
