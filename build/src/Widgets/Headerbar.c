/* Headerbar.c generated by valac 0.36.6, the Vala compiler
 * generated from Headerbar.vala, do not modify */

/* Copyright 2017 Juan Pablo Lozano
*
* This file is part of GCleaner.
*
* GCleaner is free software: you can redistribute it
* and/or modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
*
* GCleaner is distributed in the hope that it will be
* useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with GCleaner. If not, see http://www.gnu.org/licenses/.
*/
/*Importing libraries GTK+ and GLib*/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <stdio.h>


#define GCLEANER_WIDGETS_TYPE_HEADER (gcleaner_widgets_header_get_type ())
#define GCLEANER_WIDGETS_HEADER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GCLEANER_WIDGETS_TYPE_HEADER, GCleanerWidgetsHeader))
#define GCLEANER_WIDGETS_HEADER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GCLEANER_WIDGETS_TYPE_HEADER, GCleanerWidgetsHeaderClass))
#define GCLEANER_WIDGETS_IS_HEADER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GCLEANER_WIDGETS_TYPE_HEADER))
#define GCLEANER_WIDGETS_IS_HEADER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GCLEANER_WIDGETS_TYPE_HEADER))
#define GCLEANER_WIDGETS_HEADER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GCLEANER_WIDGETS_TYPE_HEADER, GCleanerWidgetsHeaderClass))

typedef struct _GCleanerWidgetsHeader GCleanerWidgetsHeader;
typedef struct _GCleanerWidgetsHeaderClass GCleanerWidgetsHeaderClass;
typedef struct _GCleanerWidgetsHeaderPrivate GCleanerWidgetsHeaderPrivate;

#define GCLEANER_TYPE_APP (gcleaner_app_get_type ())
#define GCLEANER_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GCLEANER_TYPE_APP, GCleanerApp))
#define GCLEANER_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GCLEANER_TYPE_APP, GCleanerAppClass))
#define GCLEANER_IS_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GCLEANER_TYPE_APP))
#define GCLEANER_IS_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GCLEANER_TYPE_APP))
#define GCLEANER_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GCLEANER_TYPE_APP, GCleanerAppClass))

typedef struct _GCleanerApp GCleanerApp;
typedef struct _GCleanerAppClass GCleanerAppClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define GCLEANER_WIDGETS_TYPE_ABOUT (gcleaner_widgets_about_get_type ())
#define GCLEANER_WIDGETS_ABOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GCLEANER_WIDGETS_TYPE_ABOUT, GCleanerWidgetsAbout))
#define GCLEANER_WIDGETS_ABOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GCLEANER_WIDGETS_TYPE_ABOUT, GCleanerWidgetsAboutClass))
#define GCLEANER_WIDGETS_IS_ABOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GCLEANER_WIDGETS_TYPE_ABOUT))
#define GCLEANER_WIDGETS_IS_ABOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GCLEANER_WIDGETS_TYPE_ABOUT))
#define GCLEANER_WIDGETS_ABOUT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GCLEANER_WIDGETS_TYPE_ABOUT, GCleanerWidgetsAboutClass))

typedef struct _GCleanerWidgetsAbout GCleanerWidgetsAbout;
typedef struct _GCleanerWidgetsAboutClass GCleanerWidgetsAboutClass;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _GCleanerAppPrivate GCleanerAppPrivate;

struct _GCleanerWidgetsHeader {
	GtkHeaderBar parent_instance;
	GCleanerWidgetsHeaderPrivate * priv;
	GCleanerApp* app;
};

struct _GCleanerWidgetsHeaderClass {
	GtkHeaderBarClass parent_class;
};

struct _GCleanerApp {
	GtkApplication parent_instance;
	GCleanerAppPrivate * priv;
	GtkApplicationWindow* main_window;
	GSettings* settings;
};

struct _GCleanerAppClass {
	GtkApplicationClass parent_class;
};


static gpointer gcleaner_widgets_header_parent_class = NULL;

GType gcleaner_widgets_header_get_type (void) G_GNUC_CONST;
GType gcleaner_app_get_type (void) G_GNUC_CONST;
enum  {
	GCLEANER_WIDGETS_HEADER_DUMMY_PROPERTY
};
static void gcleaner_widgets_header_about_cb (GCleanerWidgetsHeader* self, GSimpleAction* simple, GVariant* parameter);
GType gcleaner_widgets_about_get_type (void) G_GNUC_CONST;
GCleanerWidgetsAbout* gcleaner_widgets_about_new (void);
GCleanerWidgetsAbout* gcleaner_widgets_about_construct (GType object_type);
GCleanerWidgetsHeader* gcleaner_widgets_header_new (GCleanerApp* app);
GCleanerWidgetsHeader* gcleaner_widgets_header_construct (GType object_type, GCleanerApp* app);
gchar* getProcessor (void);
gchar* getMemory (void);
gchar* getGraphics (void);
#define CONSTANTS_VERSION "0.01.132"
gchar* getOS (void);
static void _gcleaner_widgets_header_about_cb_g_simple_action_activate (GSimpleAction* _sender, GVariant* parameter, gpointer self);
static void gcleaner_widgets_header_finalize (GObject * obj);


static void gcleaner_widgets_header_about_cb (GCleanerWidgetsHeader* self, GSimpleAction* simple, GVariant* parameter) {
	GCleanerWidgetsAbout* about = NULL;
	GCleanerWidgetsAbout* _tmp0_;
#line 31 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_return_if_fail (self != NULL);
#line 31 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_return_if_fail (simple != NULL);
#line 32 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp0_ = gcleaner_widgets_about_new ();
#line 32 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp0_);
#line 32 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	about = _tmp0_;
#line 33 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_dialog_run ((GtkDialog*) about);
#line 31 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (about);
#line 130 "Headerbar.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 38 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	return self ? g_object_ref (self) : NULL;
#line 137 "Headerbar.c"
}


static void _gcleaner_widgets_header_about_cb_g_simple_action_activate (GSimpleAction* _sender, GVariant* parameter, gpointer self) {
#line 92 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gcleaner_widgets_header_about_cb ((GCleanerWidgetsHeader*) self, _sender, parameter);
#line 144 "Headerbar.c"
}


GCleanerWidgetsHeader* gcleaner_widgets_header_construct (GType object_type, GCleanerApp* app) {
	GCleanerWidgetsHeader * self = NULL;
	GCleanerApp* _tmp0_;
	GCleanerApp* _tmp1_;
	gchar* complete_system_specs = NULL;
	GtkImage* icon = NULL;
	GtkImage* _tmp2_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	GtkLabel* title = NULL;
	GtkLabel* _tmp19_;
	GtkLabel* version = NULL;
	GtkLabel* _tmp20_;
	GtkLabel* os_information = NULL;
	GtkLabel* _tmp21_;
	gchar* _tmp22_;
	gchar* _tmp23_;
	gchar* _tmp24_;
	gchar* _tmp25_;
	gchar* _tmp26_;
	gchar* _tmp27_;
	GtkLabel* system_specs = NULL;
	GtkLabel* _tmp28_;
	gchar* _tmp29_;
	gchar* _tmp30_;
	gchar* _tmp31_;
	gchar* _tmp32_;
	GtkMenuButton* appmenu_button = NULL;
	GtkMenuButton* _tmp33_;
	GtkImage* gear_icon = NULL;
	GtkImage* _tmp34_;
	GtkStyleContext* _tmp35_;
	GMenu* menumodel = NULL;
	GMenu* _tmp36_;
	GSimpleAction* about_action = NULL;
	GSimpleAction* _tmp37_;
	GCleanerApp* _tmp38_;
	GtkApplicationWindow* _tmp39_;
	GtkBox* container_box = NULL;
	GtkBox* _tmp40_;
	GtkBox* nameVersion_box = NULL;
	GtkBox* _tmp41_;
	GtkBox* specsOS_box = NULL;
	GtkBox* _tmp42_;
	GtkBox* icon_box = NULL;
	GtkBox* _tmp43_;
	GtkBox* app_box = NULL;
	GtkBox* _tmp44_;
	GtkBox* version_box = NULL;
	GtkBox* _tmp45_;
	GtkBox* os_box = NULL;
	GtkBox* _tmp46_;
	GtkBox* specs_box = NULL;
	GtkBox* _tmp47_;
	GtkToolItem* item = NULL;
	GtkToolItem* _tmp48_;
	GError * _inner_error_ = NULL;
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	self = (GCleanerWidgetsHeader*) g_object_new (object_type, NULL);
#line 38 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp0_ = app;
#line 38 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 38 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (self->app);
#line 38 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	self->app = _tmp1_;
#line 44 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp2_ = (GtkImage*) gtk_image_new ();
#line 44 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp2_);
#line 44 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	icon = _tmp2_;
#line 234 "Headerbar.c"
	{
		GdkPixbuf* icon_pixbuf = NULL;
		GdkPixbuf* _tmp3_;
#line 47 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		_tmp3_ = gdk_pixbuf_new_from_file_at_scale ("/usr/share/pixmaps/gcleanerhb.svg", 32, 32, FALSE, &_inner_error_);
#line 47 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		icon_pixbuf = _tmp3_;
#line 47 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 244 "Headerbar.c"
			goto __catch11_g_error;
		}
#line 48 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		gtk_image_set_from_pixbuf (icon, icon_pixbuf);
#line 45 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		_g_object_unref0 (icon_pixbuf);
#line 251 "Headerbar.c"
	}
	goto __finally11;
	__catch11_g_error:
	{
		GError* e = NULL;
		FILE* _tmp4_;
		FILE* _tmp5_;
#line 45 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		e = _inner_error_;
#line 45 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		_inner_error_ = NULL;
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		_tmp4_ = stderr;
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		fprintf (_tmp4_, "COM.GCLEANER.APP.HEADERBAR: [GLIB::ERROR CREATING PIXBUF ICON]\n");
#line 51 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		_tmp5_ = stderr;
#line 51 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		fprintf (_tmp5_, ">>> Check path: /usr/share/pixmaps/gcleanerhb.svg\n");
#line 45 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		_g_error_free0 (e);
#line 273 "Headerbar.c"
	}
	__finally11:
#line 45 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 45 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		_g_object_unref0 (icon);
#line 45 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		_g_free0 (complete_system_specs);
#line 45 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 45 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		g_clear_error (&_inner_error_);
#line 45 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
		return NULL;
#line 288 "Headerbar.c"
	}
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp6_ = getProcessor ();
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp7_ = _tmp6_;
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp8_ = g_strconcat (_tmp7_, "  •  ", NULL);
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp9_ = _tmp8_;
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp10_ = getMemory ();
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp11_ = _tmp10_;
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp12_ = g_strconcat (_tmp9_, _tmp11_, NULL);
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp13_ = _tmp12_;
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp14_ = g_strconcat (_tmp13_, " RAM  •  ", NULL);
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp15_ = _tmp14_;
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp16_ = getGraphics ();
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp17_ = _tmp16_;
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp18_ = g_strconcat (_tmp15_, _tmp17_, NULL);
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (complete_system_specs);
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	complete_system_specs = _tmp18_;
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp17_);
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp15_);
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp13_);
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp11_);
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp9_);
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp7_);
#line 57 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp19_ = (GtkLabel*) gtk_label_new ("");
#line 57 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp19_);
#line 57 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	title = _tmp19_;
#line 58 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_label_set_markup (title, "<b>GCleaner</b>");
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp20_ = (GtkLabel*) gtk_label_new ("");
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp20_);
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	version = _tmp20_;
#line 61 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_label_set_markup (version, "<small>v" CONSTANTS_VERSION "</small>");
#line 63 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp21_ = (GtkLabel*) gtk_label_new ("");
#line 63 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp21_);
#line 63 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	os_information = _tmp21_;
#line 64 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp22_ = getOS ();
#line 64 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp23_ = _tmp22_;
#line 64 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp24_ = g_strconcat ("<span>", _tmp23_, NULL);
#line 64 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp25_ = _tmp24_;
#line 64 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp26_ = g_strconcat (_tmp25_, "</span>", NULL);
#line 64 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp27_ = _tmp26_;
#line 64 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_label_set_markup (os_information, _tmp27_);
#line 64 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp27_);
#line 64 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp25_);
#line 64 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp23_);
#line 66 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp28_ = (GtkLabel*) gtk_label_new ("");
#line 66 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp28_);
#line 66 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	system_specs = _tmp28_;
#line 67 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp29_ = g_strconcat ("<span font_size='small'>", complete_system_specs, NULL);
#line 67 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp30_ = _tmp29_;
#line 67 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp31_ = g_strconcat (_tmp30_, "</span>", NULL);
#line 67 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp32_ = _tmp31_;
#line 67 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_label_set_markup (system_specs, _tmp32_);
#line 67 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp32_);
#line 67 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (_tmp30_);
#line 74 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp33_ = (GtkMenuButton*) gtk_menu_button_new ();
#line 74 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp33_);
#line 74 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	appmenu_button = _tmp33_;
#line 75 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp34_ = (GtkImage*) gtk_image_new ();
#line 75 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp34_);
#line 75 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gear_icon = _tmp34_;
#line 76 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_image_set_from_icon_name (gear_icon, "open-menu", GTK_ICON_SIZE_LARGE_TOOLBAR);
#line 77 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_button_set_image ((GtkButton*) appmenu_button, (GtkWidget*) gear_icon);
#line 78 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp35_ = gtk_widget_get_style_context ((GtkWidget*) appmenu_button);
#line 78 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_style_context_add_class (_tmp35_, "about_btn");
#line 84 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp36_ = g_menu_new ();
#line 84 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	menumodel = _tmp36_;
#line 85 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_menu_append (menumodel, "About...", "win.about");
#line 86 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_menu_button_set_menu_model (appmenu_button, (GMenuModel*) menumodel);
#line 91 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp37_ = g_simple_action_new ("about", NULL);
#line 91 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	about_action = _tmp37_;
#line 92 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_signal_connect_object (about_action, "activate", (GCallback) _gcleaner_widgets_header_about_cb_g_simple_action_activate, self, 0);
#line 93 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp38_ = self->app;
#line 93 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp39_ = _tmp38_->main_window;
#line 93 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_action_map_add_action ((GActionMap*) _tmp39_, (GAction*) about_action);
#line 97 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp40_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 4);
#line 97 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp40_);
#line 97 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	container_box = _tmp40_;
#line 98 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp41_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
#line 98 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp41_);
#line 98 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	nameVersion_box = _tmp41_;
#line 99 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp42_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
#line 99 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp42_);
#line 99 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	specsOS_box = _tmp42_;
#line 102 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp43_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
#line 102 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp43_);
#line 102 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	icon_box = _tmp43_;
#line 103 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp44_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
#line 103 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp44_);
#line 103 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	app_box = _tmp44_;
#line 104 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp45_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
#line 104 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp45_);
#line 104 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	version_box = _tmp45_;
#line 105 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp46_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
#line 105 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp46_);
#line 105 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	os_box = _tmp46_;
#line 106 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp47_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
#line 106 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp47_);
#line 106 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	specs_box = _tmp47_;
#line 110 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (icon_box, (GtkWidget*) icon, FALSE, TRUE, (guint) 0);
#line 111 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (app_box, (GtkWidget*) title, FALSE, TRUE, (guint) 0);
#line 112 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (version_box, (GtkWidget*) version, FALSE, TRUE, (guint) 0);
#line 113 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (os_box, (GtkWidget*) os_information, FALSE, TRUE, (guint) 0);
#line 114 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (specs_box, (GtkWidget*) system_specs, FALSE, TRUE, (guint) 0);
#line 117 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (nameVersion_box, (GtkWidget*) app_box, FALSE, TRUE, (guint) 0);
#line 118 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (nameVersion_box, (GtkWidget*) version_box, FALSE, TRUE, (guint) 0);
#line 119 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (specsOS_box, (GtkWidget*) os_box, FALSE, TRUE, (guint) 0);
#line 120 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (specsOS_box, (GtkWidget*) specs_box, FALSE, TRUE, (guint) 0);
#line 121 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (container_box, (GtkWidget*) icon_box, FALSE, TRUE, (guint) 6);
#line 122 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (container_box, (GtkWidget*) nameVersion_box, FALSE, TRUE, (guint) 6);
#line 123 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_box_pack_start (container_box, (GtkWidget*) specsOS_box, FALSE, TRUE, (guint) 6);
#line 126 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_tmp48_ = gtk_tool_item_new ();
#line 126 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	g_object_ref_sink (_tmp48_);
#line 126 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	item = _tmp48_;
#line 127 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_container_add ((GtkContainer*) item, (GtkWidget*) container_box);
#line 131 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_header_bar_pack_start ((GtkHeaderBar*) self, (GtkWidget*) item);
#line 132 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_header_bar_pack_end ((GtkHeaderBar*) self, (GtkWidget*) appmenu_button);
#line 133 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_header_bar_set_show_close_button ((GtkHeaderBar*) self, TRUE);
#line 135 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (item);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (specs_box);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (os_box);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (version_box);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (app_box);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (icon_box);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (specsOS_box);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (nameVersion_box);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (container_box);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (about_action);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (menumodel);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (gear_icon);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (appmenu_button);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (system_specs);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (os_information);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (version);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (title);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (icon);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_free0 (complete_system_specs);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	return self;
#line 562 "Headerbar.c"
}


GCleanerWidgetsHeader* gcleaner_widgets_header_new (GCleanerApp* app) {
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	return gcleaner_widgets_header_construct (GCLEANER_WIDGETS_TYPE_HEADER, app);
#line 569 "Headerbar.c"
}


static void gcleaner_widgets_header_class_init (GCleanerWidgetsHeaderClass * klass) {
#line 25 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	gcleaner_widgets_header_parent_class = g_type_class_peek_parent (klass);
#line 25 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	G_OBJECT_CLASS (klass)->finalize = gcleaner_widgets_header_finalize;
#line 578 "Headerbar.c"
}


static void gcleaner_widgets_header_instance_init (GCleanerWidgetsHeader * self) {
}


static void gcleaner_widgets_header_finalize (GObject * obj) {
	GCleanerWidgetsHeader * self;
#line 25 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GCLEANER_WIDGETS_TYPE_HEADER, GCleanerWidgetsHeader);
#line 28 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	_g_object_unref0 (self->app);
#line 25 "/home/jeremy/Documents/gcleaner/src/Widgets/Headerbar.vala"
	G_OBJECT_CLASS (gcleaner_widgets_header_parent_class)->finalize (obj);
#line 594 "Headerbar.c"
}


GType gcleaner_widgets_header_get_type (void) {
	static volatile gsize gcleaner_widgets_header_type_id__volatile = 0;
	if (g_once_init_enter (&gcleaner_widgets_header_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GCleanerWidgetsHeaderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gcleaner_widgets_header_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GCleanerWidgetsHeader), 0, (GInstanceInitFunc) gcleaner_widgets_header_instance_init, NULL };
		GType gcleaner_widgets_header_type_id;
		gcleaner_widgets_header_type_id = g_type_register_static (gtk_header_bar_get_type (), "GCleanerWidgetsHeader", &g_define_type_info, 0);
		g_once_init_leave (&gcleaner_widgets_header_type_id__volatile, gcleaner_widgets_header_type_id);
	}
	return gcleaner_widgets_header_type_id__volatile;
}



