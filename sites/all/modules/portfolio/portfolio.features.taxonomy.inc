<?php
/**
 * @file
 * portfolio.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function portfolio_taxonomy_default_vocabularies() {
  return array(
    'portfolio_tags' => array(
      'name' => 'Portfolio Tags',
      'machine_name' => 'portfolio_tags',
      'description' => 'Skills used for portfolio pieces',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
