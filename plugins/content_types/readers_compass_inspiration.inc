<?php
/**
 * @file
 * Panels render to display search results.
 */


$plugin = array(
  'title' => t('Ding readers compass inspiration'),
  'description' => t("Add læsekompass inspiration widget"),
  'single' => TRUE,
  'render callback' => 'ding_readers_compass_readers_compass_inspiration_content_type_render',
  'category' => t('Widgets'),
  'render last' => FALSE,
);

/**
 * Render the custom content type.
 */
function ding_readers_compass_readers_compass_inspiration_content_type_render($subtype, $conf, $panel_args, $context) {
  $token = ding_provider_invoke('openplatform_token', 'for_agency');
  $token = (!empty($token)) ? $token : '5e03b34c9e105ce05751898141cd642eac7f894c';
  // Build the content type block.
  $block = new stdClass();
  $block->content = '
  <div id="readers-compass-inspiration"></div>
  <script src="https://api.laesekompas.dk/ddbWidget.js"></script>
  <script>
    EmbeddableWidget.mount({
      type: "inspiration",
      parentElement: "#readers-compass-inspiration", // Dom Element in which the widget is mounted.
      token: "' . $token . '" // Needs to be provided på DBC.
    });
  </script>';
  return $block;
}
