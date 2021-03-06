<?php
/**
 * @file
 * Panels render to display search results.
 */


$plugin = array(
  'title' => t('Ding readers compass inspiration', array(), array('context' => 'ding_readers_compass')),
  'description' => t('Add readers compass inspiration widget', array(), array('context' => 'ding_readers_compass')),
  'single' => TRUE,
  'render callback' => 'ding_readers_compass_readers_compass_inspiration_content_type_render',
  'category' => t('DDB React'),
  'render last' => FALSE,
);

/**
 * Render the custom content type.
 */
function ding_readers_compass_readers_compass_inspiration_content_type_render($subtype, $conf, $panel_args, $context) {
  $token = ding_provider_invoke('openplatform_token', 'for_agency');
  $agency = variable_get('ting_agency', '');
  // Build the content type block.
  $block = new stdClass();
  $block->content = '
  <div id="readers-compass-inspiration"></div>
  <script src="https://api.laesekompas.dk/ddbWidget.js"></script>
  <script>
    EmbeddableWidget.mount({
      type: "inspiration",
      parentElement: "#readers-compass-inspiration", // Dom Element in which the widget is mounted.
      agency: "' . $agency . '", // ID of Library that collection inspiration are based on.
      token: "' . $token . '", // Provided by ding_provider.
      basepath: "' . base_path() . 'ting/object/"
    });
  </script>';
  return $block;
}
