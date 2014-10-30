<?php
/**
 * @file
 * bfluth_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function bfluth_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: page_image.
  $styles['page_image'] = array(
    'name' => 'page_image',
    'effects' => array(
      18 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: photo_album_thumb.
  $styles['photo_album_thumb'] = array(
    'name' => 'photo_album_thumb',
    'effects' => array(
      10 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 180,
          'height' => 180,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      11 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_image',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => 666666,
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => 4,
            'rightdiff' => 4,
            'topdiff' => 4,
            'bottomdiff' => 4,
          ),
        ),
        'weight' => 2,
      ),
      12 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_image',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => 829184,
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => 4,
            'rightdiff' => 4,
            'topdiff' => 4,
            'bottomdiff' => 4,
          ),
        ),
        'weight' => 3,
      ),
      13 => array(
        'label' => 'Overlay (watermark)',
        'help' => 'Choose the file image you wish to use as an overlay, and position it in a layer on top of the canvas.',
        'effect callback' => 'canvasactions_file2canvas_image',
        'form callback' => 'canvasactions_file2canvas_form',
        'summary theme' => 'canvasactions_file2canvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'top',
          'ypos' => 'left',
          'alpha' => 100,
          'path' => 'corner-tl.png',
        ),
        'weight' => 4,
      ),
      14 => array(
        'label' => 'Overlay (watermark)',
        'help' => 'Choose the file image you wish to use as an overlay, and position it in a layer on top of the canvas.',
        'effect callback' => 'canvasactions_file2canvas_image',
        'form callback' => 'canvasactions_file2canvas_form',
        'summary theme' => 'canvasactions_file2canvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'top',
          'alpha' => 100,
          'path' => 'corner-tr.png',
        ),
        'weight' => 5,
      ),
      15 => array(
        'label' => 'Overlay (watermark)',
        'help' => 'Choose the file image you wish to use as an overlay, and position it in a layer on top of the canvas.',
        'effect callback' => 'canvasactions_file2canvas_image',
        'form callback' => 'canvasactions_file2canvas_form',
        'summary theme' => 'canvasactions_file2canvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'left',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'corner-bl.png',
        ),
        'weight' => 6,
      ),
      16 => array(
        'label' => 'Overlay (watermark)',
        'help' => 'Choose the file image you wish to use as an overlay, and position it in a layer on top of the canvas.',
        'effect callback' => 'canvasactions_file2canvas_image',
        'form callback' => 'canvasactions_file2canvas_form',
        'summary theme' => 'canvasactions_file2canvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'corner-br.png',
        ),
        'weight' => 7,
      ),
    ),
  );

  return $styles;
}
