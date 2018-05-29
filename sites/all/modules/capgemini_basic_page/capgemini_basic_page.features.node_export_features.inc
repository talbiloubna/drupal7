<?php
/**
 * @file
 * capgemini_basic_page.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function capgemini_basic_page_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h1>Bienvenue à Capgemini Maroc !</h1>\\r\\n\\r\\n<p>Vous venez de faire un choix décisif pour votre carrière et nous vous<br />\\r\\nen félicitons !<img alt=\\"livret dacueil 2017\\" src=\\"https://talent.capgemini.com/getImages/80531BBF-BD1F-5E68-4B11-A8E36F1EEC1A/livret_dacueil_2017.JPG\\" style=\\"float:right; height:283px; margin:5px; width:200px\\" title=\\"livret dacueil 2017\\" /><br />\\r\\nVous avez opté pour une entreprise qui va vous accompagner dans la réalisation de votre projet professionnel et vous donner les moyens de vous développer et vous épanouir tout en exerçant un métier<br />\\r\\npassionnant.<br />\\r\\nNotre équipe RH est entièrement dédiée à cette cause et vous accompagne dès vos premiers pas chez Capgemini et tout au long de votre parcours.<br />\\r\\nC’est dans cette optique que nous avons réalisé pour vous ce petit livret qui sera en quelques sortes votre ‘‘guide des premiers pas’’.<br />\\r\\nCe guide vous permettra de vous orienter dans les locaux de Capgemini Maroc à Casablanca et Rabat, et vous fournira des indications utiles et pratiques sur la vie de l’entreprise. C’est également un guide de référence que vous pourrez conserver et enrichir vous-même au fur et à mesure.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Bienvenue à Capgemini Maroc !</p>\\n<p>Vous venez de faire un choix décisif pour votre carrière et nous vous<br />\\nen félicitons !<br />\\nVous avez opté pour une entreprise qui va vous accompagner dans la réalisation de votre projet professionnel et vous donner les moyens de vous développer et vous épanouir tout en exerçant un métier<br />\\npassionnant.<br />\\nNotre équipe RH est entièrement dédiée à cette cause et vous accompagne dès vos premiers pas chez Capgemini et tout au long de votre parcours.<br />\\nC’est dans cette optique que nous avons réalisé pour vous ce petit livret qui sera en quelques sortes votre ‘‘guide des premiers pas’’.<br />\\nCe guide vous permettra de vous orienter dans les locaux de Capgemini Maroc à Casablanca et Rabat, et vous fournira des indications utiles et pratiques sur la vie de l’entreprise. C’est également un guide de référence que vous pourrez conserver et enrichir vous-même au fur et à mesure.</p>\\n",
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
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'168\',
            \'uid\' => \'1\',
            \'filename\' => \'slider home 1.jpg\',
            \'uri\' => \'public://slider home 1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'33640\',
            \'status\' => \'1\',
            \'timestamp\' => \'1523971055\',
            \'uuid\' => \'8186f7f8-c837-4b0a-8135-e8708b4f8a8b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'900\',
            \'height\' => \'370\',
          ),
        ),
      ),
      \'field_small_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'167\',
            \'uid\' => \'1\',
            \'filename\' => \'capgemini-300x300-300x300.jpg\',
            \'uri\' => \'public://capgemini-300x300-300x300.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'19606\',
            \'status\' => \'1\',
            \'timestamp\' => \'1523971055\',
            \'uuid\' => \'0e1c586f-bf07-4dcc-bfeb-ecf421d66ce7\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'300\',
            \'height\' => \'300\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'file\',
          \'id\' => \'167\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_small_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'0e1c586f-bf07-4dcc-bfeb-ecf421d66ce7\',
        ),
        array(
          \'type\' => \'file\',
          \'id\' => \'168\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'8186f7f8-c837-4b0a-8135-e8708b4f8a8b\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
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
      \'title\' => "Livret d\'accueil",
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'capgemini_basic_page\',
      \'uid\' => \'1\',
      \'uuid\' => \'89fd9102-9b86-421a-8f18-4c2171066e5f\',
      \'vid\' => NULL,
      \'vuuid\' => \'1641d1ba-fa26-4047-b689-498139b76f43\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h1><strong><em>Notre Groupe</em></strong></h1>\\r\\n\\r\\n<h3>Fort de 50 ans d’expérience et d’une grande expertise des différents secteurs d’activité, il accompagne les entreprises et organisations dans la réalisation de leurs ambitions, de la définition de leur stratégie à la mise en œuvre de leurs opérations. Pour Capgemini, ce sont les hommes et les femmes qui donnent toute sa valeur à la technologie. Résolument multiculturel, le Groupe compte 200 000 collaborateurs présents dans plus de 40 pays. Il a réalisé un chiffre d’affaires de 12,8 milliards d’euros en 2017.</h3>\\r\\n\\r\\n<p>Fort de plus de 200 000 collaborateurs et présent dans plus de 40 pays, <a href=\\"http://www.capgemini50.com/fr/\\">nous célébrons notre 50ème anniversaire en 2017</a>.</p>\\r\\n\\r\\n<p>Le groupe Capgemini s’est donné pour mission d’aider ses clients à améliorer leurs performances en créant et en proposant des solutions commerciales, technologiques et digitales qui répondent à leurs besoins, pour leur permettre d’innover et d’améliorer leur position concurrentielle. Capgemini met à leur disposition une gamme de services associant la maîtrise de quatre métiers, une forte expertise dans de nombreux secteurs d’activité et des offres «&nbsp;packagées&nbsp;» intégrant le meilleur des technologies disponibles.</p>\\r\\n\\r\\n<p>Nous offrons une large gamme de services intégrés combinée aux technologies les plus avancées et une forte expertise sectorielle.</p>\\r\\n\\r\\n<p>Depuis la création du Groupe il y a 50 ans, en 1967, notre culture et nos pratiques commerciales ont été inspirées et guidées par sept Valeurs fondamentales. Ce sont les principes directeurs qui animent Capgemini en tant que Groupe mais aussi en tant qu’individus. Bien plus que de simples règles de conduite, ces valeurs sont au cœur de notre démarche d’entreprise éthique et responsable. Véritable «&nbsp;ADN&nbsp;» du Groupe, elles sont le garant de la réputation de l’ensemble Capgemini&nbsp;: l’Honnêteté, l’Audace, la Confiance, la Liberté, la Solidarité, la Modestie et le Plaisir. En 2017, Capgemini a été reconnu, pour la cinquième année consécutive, comme l’une des entreprises les plus éthiques au monde (<a href=\\"http://worldsmostethicalcompanies.ethisphere.com/honorees/\\">2017 World’s Most Ethical Company®</a>) par Ethisphere Institute, un organisme indépendant qui se consacre à la promotion des meilleures pratiques en matière d’éthique des affaires et de gouvernance.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong><em>Notre Groupe</em></strong></p>\\n<p>Fort de 50 ans d’expérience et d’une grande expertise des différents secteurs d’activité, il accompagne les entreprises et organisations dans la réalisation de leurs ambitions, de la définition de leur stratégie à la mise en œuvre de leurs opérations. Pour Capgemini, ce sont les hommes et les femmes qui donnent toute sa valeur à la technologie. Résolument multiculturel, le Groupe compte 200 000 collaborateurs présents dans plus de 40 pays. Il a réalisé un chiffre d’affaires de 12,8 milliards d’euros en 2017.</p>\\n<p>Fort de plus de 200 000 collaborateurs et présent dans plus de 40 pays, <a href=\\"http://www.capgemini50.com/fr/\\">nous célébrons notre 50ème anniversaire en 2017</a>.</p>\\n<p>Le groupe Capgemini s’est donné pour mission d’aider ses clients à améliorer leurs performances en créant et en proposant des solutions commerciales, technologiques et digitales qui répondent à leurs besoins, pour leur permettre d’innover et d’améliorer leur position concurrentielle. Capgemini met à leur disposition une gamme de services associant la maîtrise de quatre métiers, une forte expertise dans de nombreux secteurs d’activité et des offres « packagées » intégrant le meilleur des technologies disponibles.</p>\\n<p>Nous offrons une large gamme de services intégrés combinée aux technologies les plus avancées et une forte expertise sectorielle.</p>\\n<p>Depuis la création du Groupe il y a 50 ans, en 1967, notre culture et nos pratiques commerciales ont été inspirées et guidées par sept Valeurs fondamentales. Ce sont les principes directeurs qui animent Capgemini en tant que Groupe mais aussi en tant qu’individus. Bien plus que de simples règles de conduite, ces valeurs sont au cœur de notre démarche d’entreprise éthique et responsable. Véritable « ADN » du Groupe, elles sont le garant de la réputation de l’ensemble Capgemini : l’Honnêteté, l’Audace, la Confiance, la Liberté, la Solidarité, la Modestie et le Plaisir. En 2017, Capgemini a été reconnu, pour la cinquième année consécutive, comme l’une des entreprises les plus éthiques au monde (<a href=\\"http://worldsmostethicalcompanies.ethisphere.com/honorees/\\">2017 World’s Most Ethical Company®</a>) par Ethisphere Institute, un organisme indépendant qui se consacre à la promotion des meilleures pratiques en matière d’éthique des affaires et de gouvernance.</p>\\n<p> </p>\\n",
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
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'166\',
            \'uid\' => \'1\',
            \'filename\' => \'capgemini 1.jpg\',
            \'uri\' => \'public://capgemini 1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'88005\',
            \'status\' => \'1\',
            \'timestamp\' => \'1523963573\',
            \'uuid\' => \'268f271c-e7b0-4ffe-8bdb-ad4915ea11b0\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'666\',
            \'height\' => \'375\',
          ),
        ),
      ),
      \'field_small_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'165\',
            \'uid\' => \'1\',
            \'filename\' => \'service1.png\',
            \'uri\' => \'public://service1.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'26079\',
            \'status\' => \'1\',
            \'timestamp\' => \'1523963573\',
            \'uuid\' => \'140b71e3-2087-4034-b0ed-951e0124f0b6\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'groupe capgemini\',
            \'title\' => \'groupe capgemini\',
            \'width\' => \'350\',
            \'height\' => \'197\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'file\',
          \'id\' => \'165\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_small_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'140b71e3-2087-4034-b0ed-951e0124f0b6\',
        ),
        array(
          \'type\' => \'file\',
          \'id\' => \'166\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'268f271c-e7b0-4ffe-8bdb-ad4915ea11b0\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
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
      \'title\' => \'Le groupe Capgemini\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'capgemini_basic_page\',
      \'uid\' => \'1\',
      \'uuid\' => \'a7407a73-d899-49db-9524-24680cab218e\',
      \'vid\' => NULL,
      \'vuuid\' => \'d7918227-7898-4c2a-b07e-ecc185a34014\',
    ),
)',
);
  return $node_export;
}
