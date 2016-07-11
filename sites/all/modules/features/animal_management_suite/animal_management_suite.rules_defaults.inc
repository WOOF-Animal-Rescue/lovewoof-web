<?php
/**
 * @file
 * animal_management_suite.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function animal_management_suite_default_rules_configuration() {
  $items = array();
  $items['rules_send_email_to_adopt_a_pet_d_list_animal_cu'] = entity_import('rules_config', '{ "rules_send_email_to_adopt_a_pet_d_list_animal_cu" : {
      "LABEL" : "Send Email to Adopt-a-pet D-list on animal creation or update",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : {
        "node_insert--animal" : { "bundle" : "animal" },
        "node_update--animal" : { "bundle" : "animal" }
      },
      "DO" : [
        { "mail" : {
            "to" : "adoptapet.updates@lovewoof.org",
            "subject" : "\\u003C?php echo $node-\\u003Etitle; ?\\u003E has been updated. Please update on Adopt-a-pet!",
            "message" : "Hello!\\r\\n\\r\\n\\u003C?php echo $node-\\u003Etitle; ?\\u003E has been updated on the WOOF Animal Rescue website. Please login to the website at http:\\/\\/www.lovewoof.org\\/login and access \\u003C?php echo $node-\\u003Etitle; ?\\u003E\\u0027s profile at http:\\/\\/www.lovewoof.org\\/animal-profile\\/\\u003C?php echo $node-\\u003Enid; ?\\u003E.\\r\\n\\r\\nWhile you can get the details without logging in, please remember that logging into your account allows you to download original sized photos from the website!\\r\\n\\r\\n\\r\\nThanks,\\r\\nWOOF Animal Rescue Webmaster",
            "from" : "webmaster@lovewoof.org",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_to_petfinder_d_list_on_animal_update'] = entity_import('rules_config', '{ "rules_send_email_to_petfinder_d_list_on_animal_update" : {
      "LABEL" : "Send Email to PetFinder D-list on new animal creation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : {
        "node_insert--animal" : { "bundle" : "animal" },
        "node_update--animal" : { "bundle" : "animal" }
      },
      "DO" : [
        { "mail" : {
            "to" : "petfinder.updates@lovewoof.org",
            "subject" : "\\u003C?php echo $node-\\u003Etitle; ?\\u003E has been updated. Please update on PetFinder!",
            "message" : "Hello!\\r\\n\\r\\n\\u003C?php echo $node-\\u003Etitle; ?\\u003E has been updated on the WOOF Animal Rescue website. Please login to the website at http:\\/\\/www.lovewoof.org\\/login and access \\u003C?php echo $node-\\u003Etitle; ?\\u003E\\u0027s profile at http:\\/\\/www.lovewoof.org\\/animal-profile\\/\\u003C?php echo $node-\\u003Enid; ?\\u003E.\\r\\n\\r\\nWhile you can get the details without logging in, please remember that logging into your account allows you to download original sized photos from the website!\\r\\n\\r\\nIn case you are new (or just forgot - we all do it!), you can login to PetFinder by navigating to http:\\/\\/pro.petfinder.com.\\r\\n\\r\\nThanks,\\r\\nWOOF Animal Rescue Webmaster",
            "from" : "webmaster@lovewoof.org",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
