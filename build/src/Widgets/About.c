/* About.c generated by valac 0.36.6, the Vala compiler
 * generated from About.vala, do not modify */

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
/*Importing libraries GTK+, GLib and Granite*/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define GCLEANER_WIDGETS_TYPE_ABOUT (gcleaner_widgets_about_get_type ())
#define GCLEANER_WIDGETS_ABOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GCLEANER_WIDGETS_TYPE_ABOUT, GCleanerWidgetsAbout))
#define GCLEANER_WIDGETS_ABOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GCLEANER_WIDGETS_TYPE_ABOUT, GCleanerWidgetsAboutClass))
#define GCLEANER_WIDGETS_IS_ABOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GCLEANER_WIDGETS_TYPE_ABOUT))
#define GCLEANER_WIDGETS_IS_ABOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GCLEANER_WIDGETS_TYPE_ABOUT))
#define GCLEANER_WIDGETS_ABOUT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GCLEANER_WIDGETS_TYPE_ABOUT, GCleanerWidgetsAboutClass))

typedef struct _GCleanerWidgetsAbout GCleanerWidgetsAbout;
typedef struct _GCleanerWidgetsAboutClass GCleanerWidgetsAboutClass;
typedef struct _GCleanerWidgetsAboutPrivate GCleanerWidgetsAboutPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))

struct _GCleanerWidgetsAbout {
	GtkAboutDialog parent_instance;
	GCleanerWidgetsAboutPrivate * priv;
};

struct _GCleanerWidgetsAboutClass {
	GtkAboutDialogClass parent_class;
};


static gpointer gcleaner_widgets_about_parent_class = NULL;

GType gcleaner_widgets_about_get_type (void) G_GNUC_CONST;
enum  {
	GCLEANER_WIDGETS_ABOUT_DUMMY_PROPERTY
};
GCleanerWidgetsAbout* gcleaner_widgets_about_new (void);
GCleanerWidgetsAbout* gcleaner_widgets_about_construct (GType object_type);
#define CONSTANTS_VERSION "0.01.132"
static void __lambda4_ (GCleanerWidgetsAbout* self, gint response);
static void ___lambda4__gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self);


static void __lambda4_ (GCleanerWidgetsAbout* self, gint response) {
#line 54 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	gtk_widget_destroy ((GtkWidget*) self);
#line 74 "About.c"
}


static void ___lambda4__gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self) {
#line 53 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	__lambda4_ ((GCleanerWidgetsAbout*) self, response_id);
#line 81 "About.c"
}


GCleanerWidgetsAbout* gcleaner_widgets_about_construct (GType object_type) {
	GCleanerWidgetsAbout * self = NULL;
	GDateTime* _tmp3_;
	GDateTime* _tmp4_;
	gint _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	GError * _inner_error_ = NULL;
#line 27 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	self = (GCleanerWidgetsAbout*) g_object_new (object_type, NULL);
#line 36 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	gtk_about_dialog_set_license ((GtkAboutDialog*) self, "This program is released under the terms of the GPL (General Public Li" \
"cense) as published by the Free Software Foundation, is an application" \
" that will be useful, but WITHOUT ANY WARRANTY; for details, visit: ht" \
"tp://www.gnu.org/licenses/gpl.html");
#line 37 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	gtk_about_dialog_set_wrap_license ((GtkAboutDialog*) self, TRUE);
#line 103 "About.c"
	{
		GdkPixbuf* logo = NULL;
		GdkPixbuf* _tmp0_;
#line 40 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_tmp0_ = gdk_pixbuf_new_from_file_at_size ("/usr/share/icons/hicolor/128x128/apps/gcleaner.svg", 128, 128, &_inner_error_);
#line 40 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		logo = _tmp0_;
#line 40 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 113 "About.c"
			goto __catch9_g_error;
		}
#line 41 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		gtk_about_dialog_set_logo ((GtkAboutDialog*) self, logo);
#line 39 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_g_object_unref0 (logo);
#line 120 "About.c"
	}
	goto __finally9;
	__catch9_g_error:
	{
		GError* e = NULL;
		FILE* _tmp1_;
		FILE* _tmp2_;
#line 39 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		e = _inner_error_;
#line 39 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_inner_error_ = NULL;
#line 43 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_tmp1_ = stderr;
#line 43 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		fprintf (_tmp1_, "COM.GCLEANER.APP.ABOUT: [GLIB::ERROR CREATING Pixbuf ICON]\n");
#line 44 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_tmp2_ = stderr;
#line 44 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		fprintf (_tmp2_, ">>> Check path: /usr/share/icons/hicolor/128x128/apps/gcleaner.svg\n");
#line 39 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_g_error_free0 (e);
#line 142 "About.c"
	}
	__finally9:
#line 39 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 39 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 39 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		g_clear_error (&_inner_error_);
#line 39 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		return NULL;
#line 153 "About.c"
	}
#line 47 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	gtk_about_dialog_set_program_name ((GtkAboutDialog*) self, "GCleaner");
#line 48 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	gtk_about_dialog_set_version ((GtkAboutDialog*) self, CONSTANTS_VERSION);
#line 49 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	gtk_about_dialog_set_comments ((GtkAboutDialog*) self, "Clean your System GNU/Linux");
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_tmp3_ = g_date_time_new_now_local ();
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_tmp4_ = _tmp3_;
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_tmp5_ = g_date_time_get_year (_tmp4_);
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_tmp6_ = g_strdup_printf ("%i", _tmp5_);
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_tmp7_ = _tmp6_;
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_tmp8_ = g_strconcat ("Copyright © 2015-", _tmp7_, NULL);
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_tmp9_ = _tmp8_;
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_tmp10_ = g_strconcat (_tmp9_, " Juan Pablo Lozano", NULL);
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_tmp11_ = _tmp10_;
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	gtk_about_dialog_set_copyright ((GtkAboutDialog*) self, _tmp11_);
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_g_free0 (_tmp11_);
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_g_free0 (_tmp9_);
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_g_free0 (_tmp7_);
#line 50 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	_g_date_time_unref0 (_tmp4_);
#line 51 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	gtk_about_dialog_set_website ((GtkAboutDialog*) self, "https://launchpad.net/gcleaner");
#line 53 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	g_signal_connect_object ((GtkDialog*) self, "response", (GCallback) ___lambda4__gtk_dialog_response, self, 0);
#line 193 "About.c"
	{
		GdkPixbuf* _tmp12_ = NULL;
		GdkPixbuf* _tmp13_;
#line 61 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_tmp13_ = gdk_pixbuf_new_from_file ("/usr/share/icons/hicolor/128x128/apps/gcleaner.svg", &_inner_error_);
#line 61 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_tmp12_ = _tmp13_;
#line 61 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 203 "About.c"
			goto __catch10_g_error;
		}
#line 61 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		gtk_window_set_icon ((GtkWindow*) self, _tmp12_);
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_g_object_unref0 (_tmp12_);
#line 210 "About.c"
	}
	goto __finally10;
	__catch10_g_error:
	{
		GError* e = NULL;
		FILE* _tmp14_;
		GError* _tmp15_;
		const gchar* _tmp16_;
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		e = _inner_error_;
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_inner_error_ = NULL;
#line 63 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_tmp14_ = stderr;
#line 63 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_tmp15_ = e;
#line 63 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_tmp16_ = _tmp15_->message;
#line 63 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		fprintf (_tmp14_, "COM.GCLEANER.APP: [GLIB::ERROR LOADING ICON [%s]]\n", _tmp16_);
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		_g_error_free0 (e);
#line 233 "About.c"
	}
	__finally10:
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		g_clear_error (&_inner_error_);
#line 60 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
		return NULL;
#line 244 "About.c"
	}
#line 27 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	return self;
#line 248 "About.c"
}


GCleanerWidgetsAbout* gcleaner_widgets_about_new (void) {
#line 27 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	return gcleaner_widgets_about_construct (GCLEANER_WIDGETS_TYPE_ABOUT);
#line 255 "About.c"
}


static void gcleaner_widgets_about_class_init (GCleanerWidgetsAboutClass * klass) {
#line 25 "/home/jeremy/Documents/gcleaner/src/Widgets/About.vala"
	gcleaner_widgets_about_parent_class = g_type_class_peek_parent (klass);
#line 262 "About.c"
}


static void gcleaner_widgets_about_instance_init (GCleanerWidgetsAbout * self) {
}


GType gcleaner_widgets_about_get_type (void) {
	static volatile gsize gcleaner_widgets_about_type_id__volatile = 0;
	if (g_once_init_enter (&gcleaner_widgets_about_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GCleanerWidgetsAboutClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gcleaner_widgets_about_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GCleanerWidgetsAbout), 0, (GInstanceInitFunc) gcleaner_widgets_about_instance_init, NULL };
		GType gcleaner_widgets_about_type_id;
		gcleaner_widgets_about_type_id = g_type_register_static (gtk_about_dialog_get_type (), "GCleanerWidgetsAbout", &g_define_type_info, 0);
		g_once_init_leave (&gcleaner_widgets_about_type_id__volatile, gcleaner_widgets_about_type_id);
	}
	return gcleaner_widgets_about_type_id__volatile;
}



