<?php
/**
 * @file
 * bfluth_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bfluth_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_calendar:calendar/month
  $menu_links['main-menu_calendar:calendar/month'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar/month',
    'router_path' => 'calendar/month',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_calendar:calendar/month',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_christian-education:node/81
  $menu_links['main-menu_christian-education:node/81'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/81',
    'router_path' => 'node/%',
    'link_title' => 'Christian Education',
    'options' => array(
      'identifier' => 'main-menu_christian-education:node/81',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_ministries:node/78',
  );
  // Exported menu link: main-menu_fellowship:node/82
  $menu_links['main-menu_fellowship:node/82'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/82',
    'router_path' => 'node/%',
    'link_title' => 'Fellowship',
    'options' => array(
      'identifier' => 'main-menu_fellowship:node/82',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_ministries:node/78',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ministries:node/78
  $menu_links['main-menu_ministries:node/78'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/78',
    'router_path' => 'node/%',
    'link_title' => 'Ministries',
    'options' => array(
      'attributes' => array(
        'title' => 'The many ministries of Redeemer strengthen the church and serve as a way for the members and visitors to serve and support the church.There is a ministry available for any interest and all gifts.',
      ),
      'identifier' => 'main-menu_ministries:node/78',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 0,
  );
  // Exported menu link: main-menu_music:node/79
  $menu_links['main-menu_music:node/79'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/79',
    'router_path' => 'node/%',
    'link_title' => 'Music',
    'options' => array(
      'identifier' => 'main-menu_music:node/79',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_ministries:node/78',
  );
  // Exported menu link: main-menu_photo-albums:photo-albums
  $menu_links['main-menu_photo-albums:photo-albums'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'photo-albums',
    'router_path' => 'photo-albums',
    'link_title' => 'Photo Albums',
    'options' => array(
      'identifier' => 'main-menu_photo-albums:photo-albums',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_prayer-request:node/59
  $menu_links['main-menu_prayer-request:node/59'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
    'link_title' => 'Prayer Request',
    'options' => array(
      'identifier' => 'main-menu_prayer-request:node/59',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_worship:node/80
  $menu_links['main-menu_worship:node/80'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/80',
    'router_path' => 'node/%',
    'link_title' => 'Worship',
    'options' => array(
      'identifier' => 'main-menu_worship:node/80',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_ministries:node/78',
  );
  // Exported menu link: menu-secondary-menu_check-us-out-on-facebook:node/90
  $menu_links['menu-secondary-menu_check-us-out-on-facebook:node/90'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'node/90',
    'router_path' => 'node/%',
    'link_title' => 'Check us out on Facebook!',
    'options' => array(
      'identifier' => 'menu-secondary-menu_check-us-out-on-facebook:node/90',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-secondary-menu_church-newsletters:node/96
  $menu_links['menu-secondary-menu_church-newsletters:node/96'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'node/96',
    'router_path' => 'node/%',
    'link_title' => 'CHURCH NEWSLETTERS',
    'options' => array(
      'identifier' => 'menu-secondary-menu_church-newsletters:node/96',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CHURCH NEWSLETTERS');
  t('Calendar');
  t('Check us out on Facebook!');
  t('Christian Education');
  t('Fellowship');
  t('Home');
  t('Ministries');
  t('Music');
  t('Photo Albums');
  t('Prayer Request');
  t('Worship');


  return $menu_links;
}
