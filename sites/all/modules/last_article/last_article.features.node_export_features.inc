<?php
/**
 * @file
 * last_article.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function last_article_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Ingrédients (pour 4 pers.) :\\r\\n\\r\\n•400g de penne (ou autre pâte)\\r\\n•1 bouquet de basilic\\r\\n•4 petits filets de thon rouge\\r\\n•huile d\'olive\\r\\n•jus d\' 1/2 citron vert\\r\\n•vinaigre balsamique\\r\\n•sel, poivre, coriandre\\r\\n•parmesan\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Ingrédients (pour 4 pers.) :</p>\\n<p>•400g de penne (ou autre pâte)<br />\\n•1 bouquet de basilic<br />\\n•4 petits filets de thon rouge<br />\\n•huile d\'olive<br />\\n•jus d\' 1/2 citron vert<br />\\n•vinaigre balsamique<br />\\n•sel, poivre, coriandre<br />\\n•parmesan</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'uid\' => \'1\',
            \'filename\' => \'DSC01202.jpg\',
            \'uri\' => \'public://field/image/DSC01202.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'10005\',
            \'status\' => \'1\',
            \'timestamp\' => \'1523881304\',
            \'uuid\' => \'9ba48650-74cf-498e-9f54-d80434d51b2a\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'Image Recette\',
            \'title\' => \'\',
            \'width\' => \'200\',
            \'height\' => \'150\',
          ),
        ),
      ),
      \'field_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
            \'uuid\' => \'2549f198-de8e-42b9-b0a9-e6975a3240fd\',
          ),
          array(
            \'tid\' => \'2\',
            \'uuid\' => \'4f8b4205-bbda-4d62-bd74-b8e00e2fb99c\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'talbiloubna\',
      \'nid\' => NULL,
      \'node_export_book\' => array(
        \'weight\' => 0,
        \'#is_root\' => FALSE,
      ),
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'1\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_tags\',
          \'langcode\' => \'und\',
          \'uuid\' => \'2549f198-de8e-42b9-b0a9-e6975a3240fd\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'2\',
          \'delta\' => 1,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_tags\',
          \'langcode\' => \'und\',
          \'uuid\' => \'4f8b4205-bbda-4d62-bd74-b8e00e2fb99c\',
        ),
        array(
          \'type\' => \'file\',
          \'id\' => \'1\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'9ba48650-74cf-498e-9f54-d80434d51b2a\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'title\' => \'Salade de penne\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'article\',
      \'uid\' => \'1\',
      \'uuid\' => \'24128d8e-93e7-42d5-931c-ebc56d68d8a9\',
      \'vid\' => NULL,
      \'vuuid\' => \'c4469bbe-5d12-47ff-a39b-a6f0ae9d2b8e\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "------- Ingrédients (pour 1 pers.) -------\\r\\n\\r\\n4 tranches de pain toast\\r\\nUn petit morceau de Gruyère\\r\\nUn petit morceau d\'Emmental\\r\\n2 tranches d’ananas\\r\\nBeurre\\r\\n\\r\\n1 poignée de salade verte\\r\\n1 carotte\\r\\n5-6 radis\\r\\nPetits oignons et cornichons\\r\\nHuile d’olive\\r\\nBon vinaigre de fruit\\r\\n3-4 brins de ciboulette",
            \'summary\' => \'Croque-Hawaï et petite salade ou comme un souvenir de Bruxelles dans mon assiette\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>------- Ingrédients (pour 1 pers.) -------</p>\\n<p>4 tranches de pain toast<br />\\nUn petit morceau de Gruyère<br />\\nUn petit morceau d\'Emmental<br />\\n2 tranches d’ananas<br />\\nBeurre</p>\\n<p>1 poignée de salade verte<br />\\n1 carotte<br />\\n5-6 radis<br />\\nPetits oignons et cornichons<br />\\nHuile d’olive<br />\\nBon vinaigre de fruit<br />\\n3-4 brins de ciboulette</p>\\n",
            \'safe_summary\' => "<p>Croque-Hawaï et petite salade ou comme un souvenir de Bruxelles dans mon assiette</p>\\n",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'2\',
      \'comment\' => \'2\',
      \'comment_count\' => \'1\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'3\',
            \'uid\' => \'1\',
            \'filename\' => \'croque4.jpg\',
            \'uri\' => \'public://field/image/croque4.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'32922\',
            \'status\' => \'1\',
            \'timestamp\' => \'1523890771\',
            \'uuid\' => \'35e89182-6379-4549-865b-37e90f083d49\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'croque\',
            \'title\' => \'\',
            \'width\' => \'271\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
            \'uuid\' => \'b660f5ed-292b-4976-b981-f8ad6f2a636a\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'talbiloubna\',
      \'nid\' => NULL,
      \'node_export_book\' => array(
        \'weight\' => 0,
        \'#is_root\' => FALSE,
      ),
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'4\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_tags\',
          \'langcode\' => \'und\',
          \'uuid\' => \'b660f5ed-292b-4976-b981-f8ad6f2a636a\',
        ),
        array(
          \'type\' => \'file\',
          \'id\' => \'3\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'35e89182-6379-4549-865b-37e90f083d49\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'title\' => \'Croque-Hawaï et petite salade ou comme un souvenir de Bruxelles dans mon assiette\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'article\',
      \'uid\' => \'1\',
      \'uuid\' => \'904047a6-3199-457c-adf8-94d96974af7c\',
      \'vid\' => NULL,
      \'vuuid\' => \'4ab94478-6b38-4b2c-b409-f13b73edbad0\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "------- Ingrédients (pour 2 pers.) -------\\r\\n\\r\\n140g de riz pour risotto\\r\\n½ oignon émincé\\r\\nHuile d’olive\\r\\n1dl de bière blanche (style Hoegaarden)\\r\\nBouillon de légumes\\r\\n2-3 càs de Stilton (au porto)\\r\\n1càs de parmesan râpé\\r\\nNoix de beurre\\r\\n\\r\\n1 bout de melon\\r\\nBeurre à rôtir\\r\\nPiment d’Espelette\\r\\n\\r\\n------- Proposition /choix du vin -------\\r\\n\\r\\nVin : Un vin blanc fruité pour accompagner le melon style Chardonnay (barrique ou non si vous le préférez moins vanillé) ou un vin rouge léger, jeune Merlot du Tessin pour ses notes de sureau ou un Pinot noir passé en barrique.",
            \'summary\' => "Voici une recette qui sent bon l’été, ou du moins ce qu’il en reste (pas grand-chose parait-il…). Encore quelques melons sur les étals de nos magasins, il faut en profiter.\\r\\n\\r\\nUne recette qui marie l’onctuosité du risotto, la puissance du Stilton et la douceur du melon !",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>------- Ingrédients (pour 2 pers.) -------</p>\\n<p>140g de riz pour risotto<br />\\n½ oignon émincé<br />\\nHuile d’olive<br />\\n1dl de bière blanche (style Hoegaarden)<br />\\nBouillon de légumes<br />\\n2-3 càs de Stilton (au porto)<br />\\n1càs de parmesan râpé<br />\\nNoix de beurre</p>\\n<p>1 bout de melon<br />\\nBeurre à rôtir<br />\\nPiment d’Espelette</p>\\n<p>------- Proposition /choix du vin -------</p>\\n<p>Vin : Un vin blanc fruité pour accompagner le melon style Chardonnay (barrique ou non si vous le préférez moins vanillé) ou un vin rouge léger, jeune Merlot du Tessin pour ses notes de sureau ou un Pinot noir passé en barrique.</p>\\n",
            \'safe_summary\' => "<p>Voici une recette qui sent bon l’été, ou du moins ce qu’il en reste (pas grand-chose parait-il…). Encore quelques melons sur les étals de nos magasins, il faut en profiter.</p>\\n<p>Une recette qui marie l’onctuosité du risotto, la puissance du Stilton et la douceur du melon !</p>\\n",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'1\',
      \'comment\' => \'2\',
      \'comment_count\' => \'1\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'2\',
            \'uid\' => \'1\',
            \'filename\' => \'DSC_2622.jpg\',
            \'uri\' => \'public://field/image/DSC_2622.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'23185\',
            \'status\' => \'1\',
            \'timestamp\' => \'1523882440\',
            \'uuid\' => \'648c89d1-b7f0-42c6-8c3f-48ad6583ec1e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'266\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
            \'uuid\' => \'2549f198-de8e-42b9-b0a9-e6975a3240fd\',
          ),
          array(
            \'tid\' => \'3\',
            \'uuid\' => \'98340137-e7b5-495c-8a40-6f23855f75e0\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'talbiloubna\',
      \'nid\' => NULL,
      \'node_export_book\' => array(
        \'weight\' => 0,
        \'#is_root\' => FALSE,
      ),
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'1\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_tags\',
          \'langcode\' => \'und\',
          \'uuid\' => \'2549f198-de8e-42b9-b0a9-e6975a3240fd\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'3\',
          \'delta\' => 1,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_tags\',
          \'langcode\' => \'und\',
          \'uuid\' => \'98340137-e7b5-495c-8a40-6f23855f75e0\',
        ),
        array(
          \'type\' => \'file\',
          \'id\' => \'2\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'648c89d1-b7f0-42c6-8c3f-48ad6583ec1e\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
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
      \'title\' => \'Risotto à la bière blanche et Stilton et tranches de melon poêlées\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'article\',
      \'uid\' => \'1\',
      \'uuid\' => \'f3fbfca3-47ea-4514-bc95-363ea7a6de8a\',
      \'vid\' => NULL,
      \'vuuid\' => \'0ac22b06-4baf-46b1-abe5-c1c5b1a50d69\',
    ),
)',
);
  return $node_export;
}
