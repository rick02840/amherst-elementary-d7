<?php
/**
 * @file
 * feature_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function feature_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@main_index:block:field_category';
  $facet->searcher = 'search_api@main_index';
  $facet->realm = 'block';
  $facet->facet = 'field_category';
  $facet->enabled = TRUE;
  $facet->hash = 'AVZXmcBaRUbbBN4ewHBaJGW7PeQMvuwE';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Category',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@main_index:block:field_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@main_index:block:field_tags';
  $facet->searcher = 'search_api@main_index';
  $facet->realm = 'block';
  $facet->facet = 'field_tags';
  $facet->enabled = TRUE;
  $facet->hash = 'ZpGh03bZl414D71OqaeiHSU2pDWGZxmc';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Tags',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@main_index:block:field_tags'] = $facet;

  return $export;
}
