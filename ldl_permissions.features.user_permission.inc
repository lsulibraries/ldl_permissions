<?php
/**
 * @file
 * ldl_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ldl_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'Administer published/unpublished collection setting.'.
  $permissions['Administer published/unpublished collection setting.'] = array(
    'name' => 'Administer published/unpublished collection setting.',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_collection_toggle_publish',
  );

  // Exported permission: 'Associate XML Forms'.
  $permissions['Associate XML Forms'] = array(
    'name' => 'Associate XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Create XML Forms'.
  $permissions['Create XML Forms'] = array(
    'name' => 'Create XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Delete XML Forms'.
  $permissions['Delete XML Forms'] = array(
    'name' => 'Delete XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Edit XML Forms'.
  $permissions['Edit XML Forms'] = array(
    'name' => 'Edit XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Edit existing OCR stream'.
  $permissions['Edit existing OCR stream'] = array(
    'name' => 'Edit existing OCR stream',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_paged_content',
  );

  // Exported permission: 'List XML Forms'.
  $permissions['List XML Forms'] = array(
    'name' => 'List XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'View datastreams marked as public in the embargo management form.'.
  $permissions['View datastreams marked as public in the embargo management form.'] = array(
    'name' => 'View datastreams marked as public in the embargo management form.',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_ip_embargo',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection admin' => 'collection admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access google analytics reports'.
  $permissions['access google analytics reports'] = array(
    'name' => 'access google analytics reports',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'google_analytics_reports',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access trello'.
  $permissions['access trello'] = array(
    'name' => 'access trello',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'trello',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add JS snippets for google analytics'.
  $permissions['add JS snippets for google analytics'] = array(
    'name' => 'add JS snippets for google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'add fedora datastreams'.
  $permissions['add fedora datastreams'] = array(
    'name' => 'add fedora datastreams',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer compound relationships'.
  $permissions['administer compound relationships'] = array(
    'name' => 'administer compound relationships',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora_compound_object',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer delta'.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: 'administer delta blocks'.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'delta_blocks',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer google analytics reports api'.
  $permissions['administer google analytics reports api'] = array(
    'name' => 'administer google analytics reports api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'google_analytics_reports_api',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer islandora ip embargoes'.
  $permissions['administer islandora ip embargoes'] = array(
    'name' => 'administer islandora ip embargoes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_ip_embargo',
  );

  // Exported permission: 'administer islandora oai'.
  $permissions['administer islandora oai'] = array(
    'name' => 'administer islandora oai',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_oai',
  );

  // Exported permission: 'administer islandora solr'.
  $permissions['administer islandora solr'] = array(
    'name' => 'administer islandora solr',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_solr',
  );

  // Exported permission: 'administer islandora_pathauto'.
  $permissions['administer islandora_pathauto'] = array(
    'name' => 'administer islandora_pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_pathauto',
  );

  // Exported permission: 'administer islandora_solr_metadata'.
  $permissions['administer islandora_solr_metadata'] = array(
    'name' => 'administer islandora_solr_metadata',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_solr_metadata',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer publish toggle defaults'.
  $permissions['administer publish toggle defaults'] = array(
    'name' => 'administer publish toggle defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_collection_toggle_publish',
  );

  // Exported permission: 'administer reroute email'.
  $permissions['administer reroute email'] = array(
    'name' => 'administer reroute email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'reroute_email',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer trello'.
  $permissions['administer trello'] = array(
    'name' => 'administer trello',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'trello',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass inactive object state'.
  $permissions['bypass inactive object state'] = array(
    'name' => 'bypass inactive object state',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_simple_workflow',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear landing_pages feeds'.
  $permissions['clear landing_pages feeds'] = array(
    'name' => 'clear landing_pages feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'control islandora ip embargoes'.
  $permissions['control islandora ip embargoes'] = array(
    'name' => 'control islandora ip embargoes',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_ip_embargo',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create child collection'.
  $permissions['create child collection'] = array(
    'name' => 'create child collection',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_basic_collection',
  );

  // Exported permission: 'create image annotations'.
  $permissions['create image annotations'] = array(
    'name' => 'create image annotations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_image_annotation',
  );

  // Exported permission: 'create landing_page content'.
  $permissions['create landing_page content'] = array(
    'name' => 'create landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create support ticket'.
  $permissions['create support ticket'] = array(
    'name' => 'create support ticket',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'trello_tickets',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any landing_page content'.
  $permissions['delete any landing_page content'] = array(
    'name' => 'delete any landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete fedora objects and datastreams'.
  $permissions['delete fedora objects and datastreams'] = array(
    'name' => 'delete fedora objects and datastreams',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own landing_page content'.
  $permissions['delete own landing_page content'] = array(
    'name' => 'delete own landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'diff view changes'.
  $permissions['diff view changes'] = array(
    'name' => 'diff view changes',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'diff',
  );

  // Exported permission: 'download premis metadata'.
  $permissions['download premis metadata'] = array(
    'name' => 'download premis metadata',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_premis',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any landing_page content'.
  $permissions['edit any landing_page content'] = array(
    'name' => 'edit any landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit fedora metadata'.
  $permissions['edit fedora metadata'] = array(
    'name' => 'edit fedora metadata',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own landing_page content'.
  $permissions['edit own landing_page content'] = array(
    'name' => 'edit own landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import landing_pages feeds'.
  $permissions['import landing_pages feeds'] = array(
    'name' => 'import landing_pages feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'ingest fedora objects'.
  $permissions['ingest fedora objects'] = array(
    'name' => 'ingest fedora objects',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'islandora_batch_manage_queue'.
  $permissions['islandora_batch_manage_queue'] = array(
    'name' => 'islandora_batch_manage_queue',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_batch',
  );

  // Exported permission: 'manage collection policy'.
  $permissions['manage collection policy'] = array(
    'name' => 'manage collection policy',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_basic_collection',
  );

  // Exported permission: 'manage deleted objects'.
  $permissions['manage deleted objects'] = array(
    'name' => 'manage deleted objects',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage inactive objects'.
  $permissions['manage inactive objects'] = array(
    'name' => 'manage inactive objects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_simple_workflow',
  );

  // Exported permission: 'manage islandora ip embargoes'.
  $permissions['manage islandora ip embargoes'] = array(
    'name' => 'manage islandora ip embargoes',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora_ip_embargo',
  );

  // Exported permission: 'manage object properties'.
  $permissions['manage object properties'] = array(
    'name' => 'manage object properties',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'manage objects in any namespace'.
  $permissions['manage objects in any namespace'] = array(
    'name' => 'manage objects in any namespace',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_namespace_homepage',
  );

  // Exported permission: 'manage own namespace field'.
  $permissions['manage own namespace field'] = array(
    'name' => 'manage own namespace field',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_namespace_homepage',
  );

  // Exported permission: 'migrate collection members'.
  $permissions['migrate collection members'] = array(
    'name' => 'migrate collection members',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_basic_collection',
  );

  // Exported permission: 'namespace administer homepages'.
  $permissions['namespace administer homepages'] = array(
    'name' => 'namespace administer homepages',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora_namespace_homepage',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'regenerate derivatives for an object'.
  $permissions['regenerate derivatives for an object'] = array(
    'name' => 'regenerate derivatives for an object',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'replace a datastream with new content, preserving version history'.
  $permissions['replace a datastream with new content, preserving version history'] = array(
    'name' => 'replace a datastream with new content, preserving version history',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'revert to old datastream'.
  $permissions['revert to old datastream'] = array(
    'name' => 'revert to old datastream',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'search',
  );

  // Exported permission: 'search islandora solr'.
  $permissions['search islandora solr'] = array(
    'name' => 'search islandora solr',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_solr',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'tamper landing_pages'.
  $permissions['tamper landing_pages'] = array(
    'name' => 'tamper landing_pages',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock landing_pages feeds'.
  $permissions['unlock landing_pages feeds'] = array(
    'name' => 'unlock landing_pages feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use islandora find & replace'.
  $permissions['use islandora find & replace'] = array(
    'name' => 'use islandora find & replace',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_find_replace',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format islandora_solr_metadata_filtered_html'.
  $permissions['use text format islandora_solr_metadata_filtered_html'] = array(
    'name' => 'use text format islandora_solr_metadata_filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view fedora repository objects'.
  $permissions['view fedora repository objects'] = array(
    'name' => 'view fedora repository objects',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'view image annotations'.
  $permissions['view image annotations'] = array(
    'name' => 'view image annotations',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'islandora_image_annotation',
  );

  // Exported permission: 'view old datastream versions'.
  $permissions['view old datastream versions'] = array(
    'name' => 'view old datastream versions',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
      'intern' => 'intern',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view premis metadata'.
  $permissions['view premis metadata'] = array(
    'name' => 'view premis metadata',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_premis',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view technical metadata'.
  $permissions['view technical metadata'] = array(
    'name' => 'view technical metadata',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection admin' => 'collection admin',
    ),
    'module' => 'islandora_fits',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'collection admin' => 'collection admin',
    ),
    'module' => 'system',
  );

  return $permissions;
}
