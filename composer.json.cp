{
    "name": "drupal/legacy-project",
    "description": "Project template for Drupal 8 projects with composer following drupal/drupal layout",
    "type": "project",
    "license": "GPL-2.0-or-later",
    "homepage": "https://www.drupal.org/project/drupal",
    "support": {
        "docs": "https://www.drupal.org/docs/user_guide/en/index.html",
        "chat": "https://www.drupal.org/node/314178"
    },
    "repositories": [
        {
            "type": "composer",
            "url": "https://packages.drupal.org/8"
        },
	{
          "type": "package",
          "package": {
            "name": "woocommerce/flexslider",
            "version": "2.7.2",
            "type": "drupal-library",
            "source": {
              "url": "https://github.com/woocommerce/FlexSlider.git",
              "type": "git",
              "reference": "2.7.2"
            }
          }
       }
    ],
    "require": {
        "composer/installers": "^1.2",
        "drupal/calendar": "^1.0@alpha",
        "drupal/charts": "^3.2",
        "drupal/core-composer-scaffold": "^8.8",
        "drupal/core-project-message": "^8.8",
        "drupal/core-recommended": "^8.8",
        "drupal/core-vendor-hardening": "^8.8",
        "drupal/devel": "^4.1",
        "drupal/ebt_slideshow": "^1.0@beta",
        "drupal/facets": "^1.6",
        "drupal/flexslider": "^2.0",
        "drupal/geofield": "^1.20",
        "drupal/jquery_ui_droppable": "^1.2",
        "drupal/jquery_ui_slider": "^1.1",
        "drupal/leaflet": "^2.1",
        "drupal/search_api": "^1.19",
        "drupal/search_api_autocomplete": "^1.4",
        "drupal/search_api_solr": "^4.1",
        "drupal/webform": "^6.0",
        "drush/drush": "10.4.0",
        "league/csv": "^9.6",
        "oomphinc/composer-installers-extender": "^2.0",
        "phpmailer/phpmailer": "6.2.0",
        "wikimedia/composer-merge-plugin": "^1.4",
        "woocommerce/flexslider": "^2.7"
    },
    "conflict": {
        "drupal/drupal": "*"
    },
    "minimum-stability": "dev",
    "prefer-stable": true,
    "config": {
        "sort-packages": true
    },
    "extra": {
	"merge-plugin": {
         "include": [
             "web/modules/contrib/charts/modules/charts_highcharts/composer.json"
         ]
     },
   
        "drupal-scaffold": {
            "locations": {
                "web-root": "./"
            }
        },
        "installer-paths": {
            "core": [
                "type:drupal-core"
            ],
            "libraries/{$name}": [
                "type:drupal-library",
                "type:bower-asset",
                "type:npm-asset"
            ],
            "modules/contrib/{$name}": [
                "type:drupal-module"
            ],
            "profiles/contrib/{$name}": [
                "type:drupal-profile"
            ],
            "themes/contrib/{$name}": [
                "type:drupal-theme"
            ],
            "drush/Commands/contrib/{$name}": [
                "type:drupal-drush"
            ],
            "modules/custom/{$name}": [
                "type:drupal-custom-module"
            ],
            "themes/custom/{$name}": [
                "type:drupal-custom-theme"
            ]
        },
        "drupal-core-project-message": {
            "include-keys": [
                "homepage",
                "support"
            ],
            "post-create-project-cmd-message": [
                "<bg=blue;fg=white>                                                         </>",
                "<bg=blue;fg=white>  Congratulations, you’ve installed the Drupal codebase  </>",
                "<bg=blue;fg=white>  from the drupal/legacy-project template!               </>",
                "<bg=blue;fg=white>                                                         </>",
                "",
                "<bg=yellow;fg=black>Next steps</>:",
                "  * Install the site: https://www.drupal.org/docs/8/install",
                "  * Read the user guide: https://www.drupal.org/docs/user_guide/en/index.html",
                "  * Get support: https://www.drupal.org/support",
                "  * Get involved with the Drupal community:",
                "      https://www.drupal.org/getting-involved",
                "  * Remove the plugin that prints this message:",
                "      composer remove drupal/core-project-message"
            ]
        }
    }
}
