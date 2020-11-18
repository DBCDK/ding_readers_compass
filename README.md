# ding_readers_compass

Add læsekompas.dk widgets to DDBCMS site.

Require Ding2 release 7.x-6.1.0 or newer.

Installing this module will add 2 DDB React widgets (a recommender and an inspiration widget),
and a default page for the inspiration widget.

- The recommender widget embeds a slider of recommendations based on a pid from the
  current url.
- The inspiration widget is a full-page læsekompas.dk inspiration page.

## Before you install

Before you can use this module on your site, it is required that you are a customer of læsekompas.dk. If you are not yet a customer but want to be, you can contact DBC.

In addition, it is required that DBC sets up a recommender that is adapted to your library.

Therefore, contact kundeservice.dbc.dk before using the module on your site

## How to install

To install, download the module to your Ding2 website, and enable it - either in the
administration interface, or using drush.

### Inspiration page

The inspiration page will be enabled by default, and added to the main menu with
a weight of 10 (and ought to be positioned last).

It can be customized by the administrator under /admin/structure/pages, and given
a different menu position, title, path or disabled altogether.

### Recommender widget

The recommender widget can be added to the ting_object page (also at /admin/structure/pages)
under the 'content' tab for that page. Add somewhere beneath the 'TingObject(Materialer)' and
'Ting collection material types' content types.

If you experience problems during installation, contact kundeservice.dbc.dk

## Further information

See: https://api.laesekompas.dk/
