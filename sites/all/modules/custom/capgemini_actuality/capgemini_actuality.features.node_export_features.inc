<?php
/**
 * @file
 * capgemini_actuality.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 * features[node_export_features][] = 248668ad-1553-4ace-84b1-27f948c14e1b
 * features[node_export_features][] = 3d15641e-dcbf-4f42-baf3-d063f1c2c2fc
 * features[node_export_features][] = aab7fd9a-7e8d-4108-afb7-2d046a5079cc
 */
function capgemini_actuality_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Actualité 1</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Actualité 1</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_date_actualite\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2018-05-07 09:30:00\',
            \'timezone\' => \'Africa/Casablanca\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_book\' => array(
        \'weight\' => 0,
        \'#is_root\' => FALSE,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Actualité 1\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'actuality\',
      \'uid\' => \'1\',
      \'uuid\' => \'248668ad-1553-4ace-84b1-27f948c14e1b\',
      \'vid\' => NULL,
      \'vuuid\' => \'b0081e84-9f54-438d-9ecb-890aeb8c1aa7\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Actualité 3</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Actualité 3</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_date_actualite\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2018-05-07 09:45:00\',
            \'timezone\' => \'Africa/Casablanca\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_book\' => array(
        \'weight\' => 0,
        \'#is_root\' => FALSE,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Actualité 3\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'actuality\',
      \'uid\' => \'1\',
      \'uuid\' => \'3d15641e-dcbf-4f42-baf3-d063f1c2c2fc\',
      \'vid\' => NULL,
      \'vuuid\' => \'064cf8c1-7c5b-4c15-942c-c5293363cea2\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Actualité 2</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Actualité 2</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_date_actualite\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2018-05-07 09:45:00\',
            \'timezone\' => \'Africa/Casablanca\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_book\' => array(
        \'weight\' => 0,
        \'#is_root\' => FALSE,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Actualité 2\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'actuality\',
      \'uid\' => \'1\',
      \'uuid\' => \'aab7fd9a-7e8d-4108-afb7-2d046a5079cc\',
      \'vid\' => NULL,
      \'vuuid\' => \'db06ff23-8aa3-408d-b860-f1b74e5a13ee\',
    ),
)',
);
  return $node_export;
}
