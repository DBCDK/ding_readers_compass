<?php
/**
 * @file
 * Panels render to display search results.
 */


$plugin = array(
  'title' => t('Ding readers compass recommender'),
  'description' => t("Add læsekompass widgets"),
  'single' => TRUE,
  'render callback' => 'ding_readers_compass_readers_compass_recommender_content_type_render',
  'category' => t('Widgets'),
  'render last' => FALSE,
);

/**
 * Render the custom content type.
 */
function ding_readers_compass_readers_compass_recommender_content_type_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->content = '
  <div id="readers-compass-recommender"></div>  
  <script src="https://api.laesekompas.dk/ddbWidget.js"></script>
      <script>
        EmbeddableWidget.mount({
          type: "recommender",
          parentElement: "#readers-compass-recommender", // Dom Element in which the widget is mounted.
          agency: "773000", // ID of Library whos collection recommendations are based on.
          token: "5e03b34c9e105ce05751898141cd642eac7f894c" // Needs to be provided på DBC.
        });
      </script>';



  return $block;
}


