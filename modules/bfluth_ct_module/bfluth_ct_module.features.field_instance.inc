<?php
/**
 * @file
 * bfluth_ct_module.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bfluth_ct_module_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-event-body'
  $field_instances['node-event-body'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-event-field_attached_file'
  $field_instances['node-event-field_attached_file'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => 'Uploaded files will appear at the bottom of this page unless you shut the display option off',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_attached_file',
    'label' => 'Attached file(s)',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt pdf jpg jpeg png doc xls zip',
      'max_filesize' => '20mb',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-event-field_calendar_color'
  $field_instances['node-event-field_calendar_color'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_calendar_color',
    'label' => 'Calendar Color',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-event-field_embedded_youtube'
  $field_instances['node-event-field_embedded_youtube'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => 'Enter the URL of a publicly available YouTube video to embed the video on your page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'media',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'media',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_embedded_youtube',
    'label' => 'Embedded YouTube',
    'required' => 0,
    'settings' => array(
      'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp mp3 mov m4v mp4 mpeg avi ogg wmv ico',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 0,
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 0,
          'video' => 'video',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-event-field_event_date'
  $field_instances['node-event-field_event_date'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_date',
    'label' => 'Event date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-event-field_event_type'
  $field_instances['node-event-field_event_type'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_type',
    'label' => 'Event type',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-event-field_page_photo'
  $field_instances['node-event-field_page_photo'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => 'Upload one or more photos for this event.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'photo_album_thumb',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_photo',
    'label' => 'Event photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-page-field_attached_file'
  $field_instances['node-page-field_attached_file'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => 'Add files to this page. They will appear in a list at the bottom of the page in a list if have uploaded more than one file.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_attached_file',
    'label' => 'Attached file(s)',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt pdf jpg jpeg png doc xls zip',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_alias' => array(
          'file_alias' => '/files/[file:name].[file:extension]',
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
        ),
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => '[file:name].[file:extension]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'max_filesize' => '20MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-page-field_embedded_youtube'
  $field_instances['node-page-field_embedded_youtube'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => 'Enter the URL of a publicly available YouTube video to embed the video on your page.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'media',
        'settings' => array(
          'file_view_mode' => 'media_large',
        ),
        'type' => 'media',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_embedded_youtube',
    'label' => 'Embedded YouTube',
    'required' => 0,
    'settings' => array(
      'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp mp3 mov m4v mp4 mpeg avi ogg wmv ico',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 0,
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 0,
          'video' => 'video',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-page-field_google_maps_location'
  $field_instances['node-page-field_google_maps_location'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'simple_gmap',
        'settings' => array(
          'iframe_height' => 200,
          'iframe_width' => 300,
          'include_link' => 1,
          'include_map' => 1,
          'include_text' => 0,
          'information_bubble' => 0,
          'link_text' => 'View larger map',
          'zoom_level' => 12,
        ),
        'type' => 'simple_gmap',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_google_maps_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-page-field_page_photo'
  $field_instances['node-page-field_page_photo'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_photo',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'file_directory' => 'page-photos/[current-page:arg:?]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-photo_albums-field_album_photo'
  $field_instances['node-photo_albums-field_album_photo'] = array(
    'bundle' => 'photo_albums',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_image_style' => 'large',
          'colorbox_node_style' => 'photo_album_thumb',
        ),
        'type' => 'colorbox',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_album_photo',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'file_directory' => 'photo_albums',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '16 MB',
      'max_resolution' => '1200x900',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_class' => 'album_thumbs',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__large' => 0,
          'colorbox__medium' => 0,
          'colorbox__thumbnail' => 0,
          'image' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-webform-body'
  $field_instances['node-webform-body'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-webform-field_attached_file'
  $field_instances['node-webform-field_attached_file'] = array(
    'bundle' => 'webform',
    'deleted' => 0,
    'description' => 'Uploaded files appear at the bottom of this page unless you shut the display option off',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_attached_file',
    'label' => 'Attached file(s)',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt pdf jpg jpeg png doc xls zip',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add files to this page. They will appear in a list at the bottom of the page in a list if have uploaded more than one file.');
  t('Attached file(s)');
  t('Body');
  t('Calendar Color');
  t('Embedded YouTube');
  t('Enter the URL of a publicly available YouTube video to embed the video on your page.');
  t('Event date');
  t('Event photo');
  t('Event type');
  t('Location');
  t('Photo');
  t('Upload one or more photos for this event.');
  t('Uploaded files appear at the bottom of this page unless you shut the display option off');
  t('Uploaded files will appear at the bottom of this page unless you shut the display option off');

  return $field_instances;
}
