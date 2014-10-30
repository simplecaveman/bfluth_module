<?php
/**
 * @file
 * bfluth_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bfluth_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'color' => array(
      'name' => 'Color',
      'machine_name' => 'color',
      'description' => 'Colors used for marking events on the site calendar.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'event_type' => array(
      'name' => 'Event type',
      'machine_name' => 'event_type',
      'description' => 'Classify events displayed on the events calendar by type.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
