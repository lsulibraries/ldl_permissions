<?php
/**
 * @file
 * ldl_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ldl_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: cataloger.
  $roles['cataloger'] = array(
    'name' => 'cataloger',
    'weight' => 4,
  );

  // Exported role: collection admin.
  $roles['collection admin'] = array(
    'name' => 'collection admin',
    'weight' => 3,
  );

  // Exported role: find and replace (add-on).
  $roles['find and replace (add-on)'] = array(
    'name' => 'find and replace (add-on)',
    'weight' => 7,
  );

  // Exported role: intern.
  $roles['intern'] = array(
    'name' => 'intern',
    'weight' => 5,
  );

  // Exported role: publish (add-on).
  $roles['publish (add-on)'] = array(
    'name' => 'publish (add-on)',
    'weight' => 6,
  );

  return $roles;
}
