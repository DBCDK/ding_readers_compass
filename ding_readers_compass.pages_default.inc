<?php
/**
 * @file
 * ding_readers_compass.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ding_readers_compass_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ding_readers_compass';
  $page->task = 'page';
  $page->admin_title = 'Readers compass';
  $page->admin_description = '';
  $page->path = 'laesekompas';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Læsekompas',
    'name' => 'main-menu',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_readers_compass__panel_context_60a35b45-f7c3-4b59-9552-66d013e0c592';
  $handler->task = 'page';
  $handler->subtask = 'ding_readers_compass';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Læsekompas',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'ding_layout_1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'primary' => NULL,
      'secondary' => NULL,
      'tertiary' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47fafe95-aa51-4f84-9750-c8cf7bf9c46d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3176bc6a-32af-43e7-8cfa-0d990cb045bc';
    $pane->panel = 'primary';
    $pane->type = 'readers_compass_inspiration';
    $pane->subtype = 'readers_compass_inspiration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3176bc6a-32af-43e7-8cfa-0d990cb045bc';
    $display->content['new-3176bc6a-32af-43e7-8cfa-0d990cb045bc'] = $pane;
    $display->panels['primary'][0] = 'new-3176bc6a-32af-43e7-8cfa-0d990cb045bc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3176bc6a-32af-43e7-8cfa-0d990cb045bc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ding_readers_compass'] = $page;

  return $pages;

}
