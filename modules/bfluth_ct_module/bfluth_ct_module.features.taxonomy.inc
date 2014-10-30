<?php
/**
 * @file
 * bfluth_ct_module.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bfluth_ct_module_taxonomy_default_vocabularies() {
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
  );
}
