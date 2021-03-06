<?php
/**
 * @file
 * commons_posts.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function commons_posts_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:create post content'
  $permissions['node:group:create post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:delete any post content'
  $permissions['node:group:delete any post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:delete own post content'
  $permissions['node:group:delete own post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update any post content'
  $permissions['node:group:update any post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update own post content'
  $permissions['node:group:update own post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
