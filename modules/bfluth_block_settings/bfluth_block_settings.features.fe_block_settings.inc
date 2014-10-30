<?php
/**
 * @file
 * bfluth_block_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bfluth_block_settings_default_fe_block_settings() {
  $export = array();

  // bakluth
  $theme = array();

  $theme['blog-recent'] = array(
    'module' => 'blog',
    'delta' => 'recent',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['calendar-calendar_legend'] = array(
    'module' => 'calendar',
    'delta' => 'calendar_legend',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['context_ui-editor'] = array(
    'module' => 'context_ui',
    'delta' => 'editor',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['google_analytics_reports-dashboard'] = array(
    'module' => 'google_analytics_reports',
    'delta' => 'dashboard',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['google_analytics_reports-path_mini'] = array(
    'module' => 'google_analytics_reports',
    'delta' => 'path_mini',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['menu-devel'] = array(
    'module' => 'menu',
    'delta' => 'devel',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => -9,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'bakluth',
    'status' => 1,
    'weight' => -15,
    'region' => 'sidebar_second',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => 1,
    'theme' => 'bakluth',
    'status' => 1,
    'weight' => -15,
    'region' => 'navigation',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => 2,
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => -5,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['nivo_slider-nivo_slider'] = array(
    'module' => 'nivo_slider',
    'delta' => 'nivo_slider',
    'theme' => 'bakluth',
    'status' => 1,
    'weight' => -14,
    'region' => 'content',
    'custom' => 0,
    'visibility' => 1,
    'pages' => '<front>',
    'title' => '',
    'cache' => 1,
  );

  $theme['node-recent'] = array(
    'module' => 'node',
    'delta' => 'recent',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => -4,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['node-syndicate'] = array(
    'module' => 'node',
    'delta' => 'syndicate',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => -3,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['shortcut-shortcuts'] = array(
    'module' => 'shortcut',
    'delta' => 'shortcuts',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => -4,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'bakluth',
    'status' => 1,
    'weight' => 0,
    'region' => 'help',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bakluth',
    'status' => 1,
    'weight' => -12,
    'region' => 'content',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => -8,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-management'] = array(
    'module' => 'system',
    'delta' => 'management',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => -7,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => -6,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'bakluth',
    'status' => 1,
    'weight' => -9,
    'region' => 'footer',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => -1,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => -2,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-new'] = array(
    'module' => 'user',
    'delta' => 'new',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => 1,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['user-online'] = array(
    'module' => 'user',
    'delta' => 'online',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => 2,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-calendar_of_events-block_1'] = array(
    'module' => 'views',
    'delta' => 'calendar_of_events-block_1',
    'theme' => 'bakluth',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-calendar_of_events-block_2'] = array(
    'module' => 'views',
    'delta' => 'calendar_of_events-block_2',
    'theme' => 'bakluth',
    'status' => 1,
    'weight' => -14,
    'region' => 'sidebar_second',
    'custom' => 0,
    'visibility' => 0,
    'pages' => 'calendar/*',
    'title' => 'Church Calendar',
    'cache' => -1,
  );

  $theme['views-church_blog_announcements-block'] = array(
    'module' => 'views',
    'delta' => 'church_blog_announcements-block',
    'theme' => 'bakluth',
    'status' => 1,
    'weight' => -13,
    'region' => 'sidebar_second',
    'custom' => 0,
    'visibility' => 0,
    'pages' => 'calendar/*
redeemer-blog',
    'title' => 'Redeemer News',
    'cache' => -1,
  );

  $export['bakluth'] = $theme;

  // bartik
  $theme = array();

  $theme['blog-recent'] = array(
    'module' => 'blog',
    'delta' => 'recent',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['calendar-calendar_legend'] = array(
    'module' => 'calendar',
    'delta' => 'calendar_legend',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['context_ui-editor'] = array(
    'module' => 'context_ui',
    'delta' => 'editor',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['google_analytics_reports-dashboard'] = array(
    'module' => 'google_analytics_reports',
    'delta' => 'dashboard',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['google_analytics_reports-path_mini'] = array(
    'module' => 'google_analytics_reports',
    'delta' => 'path_mini',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['menu-devel'] = array(
    'module' => 'menu',
    'delta' => 'devel',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => 1,
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => 2,
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['nivo_slider-nivo_slider'] = array(
    'module' => 'nivo_slider',
    'delta' => 'nivo_slider',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 1,
    'pages' => '<front>',
    'title' => '',
    'cache' => 1,
  );

  $theme['node-recent'] = array(
    'module' => 'node',
    'delta' => 'recent',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['node-syndicate'] = array(
    'module' => 'node',
    'delta' => 'syndicate',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['shortcut-shortcuts'] = array(
    'module' => 'shortcut',
    'delta' => 'shortcuts',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'bartik',
    'status' => 1,
    'weight' => 0,
    'region' => 'help',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bartik',
    'status' => 1,
    'weight' => 0,
    'region' => 'content',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-management'] = array(
    'module' => 'system',
    'delta' => 'management',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'bartik',
    'status' => 1,
    'weight' => 0,
    'region' => 'sidebar_first',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'bartik',
    'status' => 1,
    'weight' => 10,
    'region' => 'footer',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'bartik',
    'status' => 1,
    'weight' => 0,
    'region' => 'sidebar_first',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-new'] = array(
    'module' => 'user',
    'delta' => 'new',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['user-online'] = array(
    'module' => 'user',
    'delta' => 'online',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-calendar_of_events-block_1'] = array(
    'module' => 'views',
    'delta' => 'calendar_of_events-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-calendar_of_events-block_2'] = array(
    'module' => 'views',
    'delta' => 'calendar_of_events-block_2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => 'calendar/*',
    'title' => 'Church Calendar',
    'cache' => -1,
  );

  $theme['views-church_blog_announcements-block'] = array(
    'module' => 'views',
    'delta' => 'church_blog_announcements-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => 'calendar/*
redeemer-blog',
    'title' => 'Redeemer News',
    'cache' => -1,
  );

  $export['bartik'] = $theme;

  // seven
  $theme = array();

  $theme['blog-recent'] = array(
    'module' => 'blog',
    'delta' => 'recent',
    'theme' => 'seven',
    'status' => 1,
    'weight' => 0,
    'region' => 'dashboard_inactive',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['calendar-calendar_legend'] = array(
    'module' => 'calendar',
    'delta' => 'calendar_legend',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['context_ui-editor'] = array(
    'module' => 'context_ui',
    'delta' => 'editor',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['google_analytics_reports-dashboard'] = array(
    'module' => 'google_analytics_reports',
    'delta' => 'dashboard',
    'theme' => 'seven',
    'status' => 1,
    'weight' => 0,
    'region' => 'dashboard_inactive',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['google_analytics_reports-path_mini'] = array(
    'module' => 'google_analytics_reports',
    'delta' => 'path_mini',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );

  $theme['menu-devel'] = array(
    'module' => 'menu',
    'delta' => 'devel',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => 1,
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => 2,
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['nivo_slider-nivo_slider'] = array(
    'module' => 'nivo_slider',
    'delta' => 'nivo_slider',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 1,
    'pages' => '<front>',
    'title' => '',
    'cache' => 1,
  );

  $theme['node-recent'] = array(
    'module' => 'node',
    'delta' => 'recent',
    'theme' => 'seven',
    'status' => 1,
    'weight' => 0,
    'region' => 'dashboard_main',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['node-syndicate'] = array(
    'module' => 'node',
    'delta' => 'syndicate',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['shortcut-shortcuts'] = array(
    'module' => 'shortcut',
    'delta' => 'shortcuts',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'seven',
    'status' => 1,
    'weight' => 0,
    'region' => 'help',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => 1,
    'weight' => 0,
    'region' => 'content',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-management'] = array(
    'module' => 'system',
    'delta' => 'management',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'seven',
    'status' => 1,
    'weight' => 2,
    'region' => 'dashboard_sidebar',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 10,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'seven',
    'status' => 1,
    'weight' => 10,
    'region' => 'content',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-new'] = array(
    'module' => 'user',
    'delta' => 'new',
    'theme' => 'seven',
    'status' => 1,
    'weight' => 0,
    'region' => 'dashboard_sidebar',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-online'] = array(
    'module' => 'user',
    'delta' => 'online',
    'theme' => 'seven',
    'status' => 1,
    'weight' => 1,
    'region' => 'dashboard_inactive',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-calendar_of_events-block_1'] = array(
    'module' => 'views',
    'delta' => 'calendar_of_events-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-calendar_of_events-block_2'] = array(
    'module' => 'views',
    'delta' => 'calendar_of_events-block_2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => 'calendar/*',
    'title' => 'Church Calendar',
    'cache' => -1,
  );

  $theme['views-church_blog_announcements-block'] = array(
    'module' => 'views',
    'delta' => 'church_blog_announcements-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => 'calendar/*
redeemer-blog',
    'title' => 'Redeemer News',
    'cache' => -1,
  );

  $export['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
