# ding_readers_compass
Add Readers Compass widgets to DDBCMS site.

Require Ding2 release 7.x-6.1.0 or newer.

Installing this module will add 2 DDB React widgets (a recommender and an inspiration widget),
and a default page for the inspiration widget.
1
The recommender widget embeds a slider of recommendations based on a pid from the
current url, and the inspiration widget is a full-page Readers Compass inspiration page.

To install, download the module to your Ding2 website, and enable it - either in the
administration interface, or using drush.

The inspiration page will be enabled by default, and added to the main menu with
a weight of 10 (and ought to be positioned last).
It can be customized by the administrator under /admin/structure/pages, and given
a different menu position, title, path or disabled altogether.

The recommender widget can be added to the ting_object page (also at /admin/structure/pages)
under the 'content' tab for that page. Add somewhere beneath the 'TingObject(Materialer)' and
'Ting collection material types' content types.

See also: https://api.laesekompas.dk/
