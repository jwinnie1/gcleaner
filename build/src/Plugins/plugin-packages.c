/* plugin-packages.c generated by valac 0.36.6, the Vala compiler
 * generated from plugin-packages.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <stdio.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))


extern gchar* path_packages;
gchar* path_packages = NULL;
extern gchar* list;
gchar* list = NULL;

void msg_cacheAptPackages (GtkWindow* win);
void msg_cmdPackage_Failed (GtkWindow* win);
void msg_dpkgBusy (GtkWindow* win);
gchar* get_packages_params (void);
gint packages_clean (GtkWindow* win);
gint packageconfig_scan (void);
gint armar_lista_paquetes (void);
gchar* get_packageconfig_list (void);
void packageconfig_clean (void);


void msg_cacheAptPackages (GtkWindow* win) {
	GtkMessageDialog* pathTrashNotFound = NULL;
	GtkWindow* _tmp0_;
	GtkMessageDialog* _tmp1_;
#line 27 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_return_if_fail (win != NULL);
#line 29 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp0_ = win;
#line 29 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp1_ = (GtkMessageDialog*) gtk_message_dialog_new (_tmp0_, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_WARNING, GTK_BUTTONS_OK, "¡No se pudieron analizar los paquetes de APT! Pruebe nuevamente y comp" \
"ruebe de que APT funcione correctamente.");
#line 29 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_object_ref_sink (_tmp1_);
#line 29 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	pathTrashNotFound = _tmp1_;
#line 30 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	gtk_window_set_title ((GtkWindow*) pathTrashNotFound, "Advertencia... Paquetes de APT");
#line 31 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	gtk_dialog_run ((GtkDialog*) pathTrashNotFound);
#line 32 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	gtk_widget_destroy ((GtkWidget*) pathTrashNotFound);
#line 27 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_object_unref0 (pathTrashNotFound);
#line 75 "plugin-packages.c"
}


void msg_cmdPackage_Failed (GtkWindow* win) {
	GtkMessageDialog* cmdPackageFailed = NULL;
	GtkWindow* _tmp0_;
	GtkMessageDialog* _tmp1_;
#line 35 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_return_if_fail (win != NULL);
#line 37 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp0_ = win;
#line 37 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp1_ = (GtkMessageDialog*) gtk_message_dialog_new (_tmp0_, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_WARNING, GTK_BUTTONS_OK, "¡No se pudo limpiar los paquetes de APT! Pruebe nuevamente y verifique" \
" su contraseña.");
#line 37 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_object_ref_sink (_tmp1_);
#line 37 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	cmdPackageFailed = _tmp1_;
#line 38 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	gtk_window_set_title ((GtkWindow*) cmdPackageFailed, "Advertencia... Limpiando Paquetes");
#line 39 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	gtk_dialog_run ((GtkDialog*) cmdPackageFailed);
#line 40 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	gtk_widget_destroy ((GtkWidget*) cmdPackageFailed);
#line 35 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_object_unref0 (cmdPackageFailed);
#line 101 "plugin-packages.c"
}


void msg_dpkgBusy (GtkWindow* win) {
	GtkMessageDialog* dpkgBusy = NULL;
	GtkWindow* _tmp0_;
	GtkMessageDialog* _tmp1_;
#line 43 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_return_if_fail (win != NULL);
#line 45 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp0_ = win;
#line 45 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp1_ = (GtkMessageDialog*) gtk_message_dialog_new (_tmp0_, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_WARNING, GTK_BUTTONS_OK, "¡No se pudo analizar las configuraciones de paquetes porque DPKG se en" \
"cuentra ejecutado ya en otra instancia! Espere porfavor a que termine " \
"la instancia ejecutada de DPKG e intentelo nuevamente.");
#line 45 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_object_ref_sink (_tmp1_);
#line 45 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	dpkgBusy = _tmp1_;
#line 46 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	gtk_window_set_title ((GtkWindow*) dpkgBusy, "Advertencia... Limpiando Configuracion de Paquetes");
#line 47 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	gtk_dialog_run ((GtkDialog*) dpkgBusy);
#line 48 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	gtk_widget_destroy ((GtkWidget*) dpkgBusy);
#line 43 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_object_unref0 (dpkgBusy);
#line 127 "plugin-packages.c"
}


gchar* get_packages_params (void) {
	gchar* result = NULL;
	gchar* _tmp0_;
	GFile* file = NULL;
	const gchar* _tmp1_;
	GFile* _tmp2_;
	GFile* _tmp3_;
	gboolean _tmp4_;
#line 53 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp0_ = g_strdup ("/var/cache/apt/archives");
#line 53 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_free0 (path_packages);
#line 53 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	path_packages = _tmp0_;
#line 54 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp1_ = path_packages;
#line 54 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp2_ = g_file_new_for_path (_tmp1_);
#line 54 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	file = _tmp2_;
#line 56 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp3_ = file;
#line 56 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp4_ = g_file_query_exists (_tmp3_, NULL);
#line 56 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	if (_tmp4_) {
#line 157 "plugin-packages.c"
		const gchar* _tmp5_;
		gchar* _tmp6_;
#line 58 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp5_ = path_packages;
#line 58 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp6_ = g_strdup (_tmp5_);
#line 58 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		result = _tmp6_;
#line 58 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_object_unref0 (file);
#line 58 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		return result;
#line 170 "plugin-packages.c"
	} else {
		FILE* _tmp7_;
		gchar* _tmp8_;
#line 60 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp7_ = stdout;
#line 60 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		fprintf (_tmp7_, "COM.GCLEANER.PLUGIN-PACKAGES-S: [PATH-ERROR]");
#line 61 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp8_ = g_strdup ("error");
#line 61 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		result = _tmp8_;
#line 61 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_object_unref0 (file);
#line 61 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		return result;
#line 186 "plugin-packages.c"
	}
#line 51 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_object_unref0 (file);
#line 190 "plugin-packages.c"
}


gint packages_clean (GtkWindow* win) {
	gint result = 0;
	gchar* _error_ = NULL;
	gint status = 0;
	gint _tmp21_ = 0;
	GError * _inner_error_ = NULL;
#line 65 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_return_val_if_fail (win != NULL, 0);
#line 202 "plugin-packages.c"
	{
		const gchar* _tmp0_;
		gchar* _tmp1_;
		gchar* _tmp2_;
		gchar* _tmp3_;
		gchar* _tmp4_;
		gchar* _tmp5_;
		gchar* _tmp6_;
		gchar* _tmp7_ = NULL;
		gint _tmp8_ = 0;
		const gchar* _tmp10_;
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp0_ = path_packages;
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp1_ = g_strconcat ("gksu --message \"Se necesita privilegios de administrador para limpiar" \
" la cache de APT\" -- bash -c \"rm -rf ", _tmp0_, NULL);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp2_ = _tmp1_;
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp3_ = g_strconcat (_tmp2_, "/*; apt-get clean; apt-get autoclean", NULL);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp4_ = _tmp3_;
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp5_ = g_strconcat (_tmp4_, "\"", NULL);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp6_ = _tmp5_;
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		g_spawn_command_line_sync (_tmp6_, NULL, &_tmp7_, &_tmp8_, &_inner_error_);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (_error_);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_error_ = _tmp7_;
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		status = _tmp8_;
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (_tmp6_);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (_tmp4_);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (_tmp2_);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 244 "plugin-packages.c"
			gint _tmp9_ = 0;
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			if (_inner_error_->domain == G_SPAWN_ERROR) {
#line 248 "plugin-packages.c"
				goto __catch28_g_spawn_error;
			}
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_g_free0 (_error_);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			g_clear_error (&_inner_error_);
#line 71 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			return _tmp9_;
#line 259 "plugin-packages.c"
		}
#line 72 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp10_ = _error_;
#line 72 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		if (g_strcmp0 (_tmp10_, "") != 0) {
#line 265 "plugin-packages.c"
			GtkWindow* _tmp11_;
#line 75 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp11_ = win;
#line 75 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			msg_cmdPackage_Failed (_tmp11_);
#line 76 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			result = 1;
#line 76 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_g_free0 (_error_);
#line 76 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			return result;
#line 277 "plugin-packages.c"
		} else {
#line 78 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			result = 0;
#line 78 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_g_free0 (_error_);
#line 78 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			return result;
#line 285 "plugin-packages.c"
		}
	}
	goto __finally28;
	__catch28_g_spawn_error:
	{
		GError* e = NULL;
		FILE* _tmp12_;
		GError* _tmp13_;
		const gchar* _tmp14_;
		FILE* _tmp15_;
		const gchar* _tmp16_;
		FILE* _tmp17_;
		gint _tmp18_;
		gchar* _tmp19_;
		gchar* _tmp20_;
#line 69 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		e = _inner_error_;
#line 69 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_inner_error_ = NULL;
#line 82 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp12_ = stdout;
#line 82 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp13_ = e;
#line 82 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp14_ = _tmp13_->message;
#line 82 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		fprintf (_tmp12_, "COM.GCLEANER.PLUGIN-PACKAGES-C: [COMMAND-ERROR: %s]", _tmp14_);
#line 83 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp15_ = stdout;
#line 83 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp16_ = _error_;
#line 83 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		fprintf (_tmp15_, "COM.GCLEANER.PLUGIN-PACKAGES-C: [ERROR: %s]\n", _tmp16_);
#line 84 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp17_ = stdout;
#line 84 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp18_ = status;
#line 84 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp19_ = g_strdup_printf ("%i", _tmp18_);
#line 84 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp20_ = _tmp19_;
#line 84 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		fprintf (_tmp17_, "COM.GCLEANER.PLUGIN-PACKAGES-C: [STATUS: %s]\n", _tmp20_);
#line 84 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (_tmp20_);
#line 85 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		result = 1;
#line 85 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_error_free0 (e);
#line 85 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (_error_);
#line 85 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		return result;
#line 339 "plugin-packages.c"
	}
	__finally28:
#line 69 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_free0 (_error_);
#line 69 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 69 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_clear_error (&_inner_error_);
#line 69 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	return _tmp21_;
#line 350 "plugin-packages.c"
}


gint packageconfig_scan (void) {
	gint result = 0;
	gchar* home = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* list_of_packages = NULL;
	gchar* _tmp2_;
	gint _tmp11_ = 0;
	GError * _inner_error_ = NULL;
#line 91 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp0_ = g_getenv ("HOME");
#line 91 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 91 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	home = _tmp1_;
#line 93 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp2_ = g_strconcat (home, "/.cache/gcleaner-packageconfig-list", NULL);
#line 93 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_free0 (list_of_packages);
#line 93 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	list_of_packages = _tmp2_;
#line 375 "plugin-packages.c"
	{
		gchar* _tmp3_;
		gchar* _tmp4_;
		gchar* _tmp5_;
		gchar* _tmp6_;
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp3_ = g_strconcat ("bash -c \"dpkg -l | grep '^rc  ' | awk '{print $2}' > ", list_of_packages, NULL);
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp4_ = _tmp3_;
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp5_ = g_strconcat (_tmp4_, "\"", NULL);
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp6_ = _tmp5_;
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		g_spawn_command_line_sync (_tmp6_, NULL, NULL, NULL, &_inner_error_);
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (_tmp6_);
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (_tmp4_);
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 397 "plugin-packages.c"
			gint _tmp7_ = 0;
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			if (_inner_error_->domain == G_SPAWN_ERROR) {
#line 401 "plugin-packages.c"
				goto __catch29_g_spawn_error;
			}
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_g_free0 (list_of_packages);
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_g_free0 (home);
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			g_clear_error (&_inner_error_);
#line 96 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			return _tmp7_;
#line 414 "plugin-packages.c"
		}
#line 97 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		result = 0;
#line 97 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (list_of_packages);
#line 97 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (home);
#line 97 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		return result;
#line 424 "plugin-packages.c"
	}
	goto __finally29;
	__catch29_g_spawn_error:
	{
		GError* e = NULL;
		FILE* _tmp8_;
		GError* _tmp9_;
		const gchar* _tmp10_;
#line 94 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		e = _inner_error_;
#line 94 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_inner_error_ = NULL;
#line 100 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp8_ = stdout;
#line 100 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp9_ = e;
#line 100 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp10_ = _tmp9_->message;
#line 100 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		fprintf (_tmp8_, "COM.GCLEANER.PLUGIN-PACKAGES-S: [ERROR PKGCONFIG: %s]", _tmp10_);
#line 101 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		result = 1;
#line 101 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_error_free0 (e);
#line 101 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (list_of_packages);
#line 101 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (home);
#line 101 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		return result;
#line 455 "plugin-packages.c"
	}
	__finally29:
#line 94 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_free0 (list_of_packages);
#line 94 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_free0 (home);
#line 94 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 94 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	g_clear_error (&_inner_error_);
#line 94 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	return _tmp11_;
#line 468 "plugin-packages.c"
}


gint armar_lista_paquetes (void) {
	gint result = 0;
	gint pkg_count = 0;
	gchar* home = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* list_of_packages = NULL;
	gchar* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	GFile* file = NULL;
	const gchar* _tmp5_;
	GFile* _tmp6_;
	GError * _inner_error_ = NULL;
#line 108 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	pkg_count = 0;
#line 109 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp0_ = g_getenv ("HOME");
#line 109 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 109 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	home = _tmp1_;
#line 112 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp2_ = g_strdup ("");
#line 112 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_free0 (list);
#line 112 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	list = _tmp2_;
#line 114 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp3_ = home;
#line 114 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp4_ = g_strconcat (_tmp3_, "/.cache/gcleaner-packageconfig-list", NULL);
#line 114 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_free0 (list_of_packages);
#line 114 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	list_of_packages = _tmp4_;
#line 115 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp5_ = list_of_packages;
#line 115 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp6_ = g_file_new_for_path (_tmp5_);
#line 115 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	file = _tmp6_;
#line 514 "plugin-packages.c"
	{
		GFileInputStream* _tmp7_ = NULL;
		GFile* _tmp8_;
		GFileInputStream* _tmp9_;
		GDataInputStream* dis = NULL;
		GDataInputStream* _tmp10_;
		gchar* line = NULL;
		gchar* aux = NULL;
		gchar* _tmp11_;
#line 119 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp8_ = file;
#line 119 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp9_ = g_file_read (_tmp8_, NULL, &_inner_error_);
#line 119 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp7_ = _tmp9_;
#line 119 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 532 "plugin-packages.c"
			goto __catch30_g_error;
		}
#line 119 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp10_ = g_data_input_stream_new ((GInputStream*) _tmp7_);
#line 119 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		dis = _tmp10_;
#line 121 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp11_ = g_strdup ("");
#line 121 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		aux = _tmp11_;
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		while (TRUE) {
#line 545 "plugin-packages.c"
			gchar* _tmp12_ = NULL;
			GDataInputStream* _tmp13_;
			gchar* _tmp14_;
			gchar* _tmp15_;
			const gchar* _tmp16_;
			const gchar* _tmp17_;
			gchar* _tmp18_;
			const gchar* _tmp19_;
			gchar* _tmp20_;
			gchar* _tmp21_;
			const gchar* _tmp22_;
			gchar* _tmp23_;
			gint _tmp24_;
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp13_ = dis;
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp14_ = g_data_input_stream_read_line (_tmp13_, NULL, NULL, &_inner_error_);
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp12_ = _tmp14_;
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
				_g_free0 (aux);
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
				_g_free0 (line);
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
				_g_object_unref0 (dis);
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
				_g_object_unref0 (_tmp7_);
#line 575 "plugin-packages.c"
				goto __catch30_g_error;
			}
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp15_ = _tmp12_;
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp12_ = NULL;
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_g_free0 (line);
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			line = _tmp15_;
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp16_ = line;
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			if (!(_tmp16_ != NULL)) {
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
				_g_free0 (_tmp12_);
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
				break;
#line 594 "plugin-packages.c"
			}
#line 125 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp17_ = list;
#line 125 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp18_ = g_strdup (_tmp17_);
#line 125 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_g_free0 (aux);
#line 125 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			aux = _tmp18_;
#line 126 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp19_ = aux;
#line 126 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp20_ = g_strconcat (_tmp19_, " ", NULL);
#line 126 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp21_ = _tmp20_;
#line 126 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp22_ = line;
#line 126 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp23_ = g_strconcat (_tmp21_, _tmp22_, NULL);
#line 126 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_g_free0 (list);
#line 126 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			list = _tmp23_;
#line 126 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_g_free0 (_tmp21_);
#line 127 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_tmp24_ = pkg_count;
#line 127 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			pkg_count = _tmp24_ + 1;
#line 123 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			_g_free0 (_tmp12_);
#line 626 "plugin-packages.c"
		}
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (aux);
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (line);
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_object_unref0 (dis);
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_object_unref0 (_tmp7_);
#line 636 "plugin-packages.c"
	}
	goto __finally30;
	__catch30_g_error:
	{
		GError* e = NULL;
		FILE* _tmp25_;
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		e = _inner_error_;
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_inner_error_ = NULL;
#line 131 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp25_ = stderr;
#line 131 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		fprintf (_tmp25_, "COM.GCLEANER.PLUGIN-PACKAGES-S: [NO SE PUDO LEER EL ARCHIVO DE CONFIGU" \
"RACION DE PAQUETES]");
#line 132 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		pkg_count = -1;
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_error_free0 (e);
#line 655 "plugin-packages.c"
	}
	__finally30:
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 660 "plugin-packages.c"
		gint _tmp26_ = 0;
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_object_unref0 (file);
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (list_of_packages);
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (home);
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		g_clear_error (&_inner_error_);
#line 117 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		return _tmp26_;
#line 674 "plugin-packages.c"
	}
#line 134 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	result = pkg_count;
#line 134 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_object_unref0 (file);
#line 134 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_free0 (list_of_packages);
#line 134 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_g_free0 (home);
#line 134 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	return result;
#line 686 "plugin-packages.c"
}


gchar* get_packageconfig_list (void) {
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 137 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp0_ = list;
#line 137 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 137 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	result = _tmp1_;
#line 137 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	return result;
#line 702 "plugin-packages.c"
}


void packageconfig_clean (void) {
	GError * _inner_error_ = NULL;
	{
		const gchar* _tmp0_;
		gchar* _tmp1_;
		gchar* _tmp2_;
		gchar* _tmp3_;
		gchar* _tmp4_;
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp0_ = list;
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp1_ = g_strconcat ("gksu --message \"Se necesita privilegios de administrador para limpiar" \
" la configuracion de los paquetes no desinstalados completamente.\" --" \
" bash -c \"dpkg --purge", _tmp0_, NULL);
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp2_ = _tmp1_;
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp3_ = g_strconcat (_tmp2_, "\"", NULL);
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp4_ = _tmp3_;
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		g_spawn_command_line_sync (_tmp4_, NULL, NULL, NULL, &_inner_error_);
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (_tmp4_);
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_free0 (_tmp2_);
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			if (_inner_error_->domain == G_SPAWN_ERROR) {
#line 734 "plugin-packages.c"
				goto __catch31_g_spawn_error;
			}
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			g_clear_error (&_inner_error_);
#line 143 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
			return;
#line 743 "plugin-packages.c"
		}
	}
	goto __finally31;
	__catch31_g_spawn_error:
	{
		GError* e = NULL;
		FILE* _tmp5_;
		GError* _tmp6_;
		const gchar* _tmp7_;
#line 141 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		e = _inner_error_;
#line 141 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_inner_error_ = NULL;
#line 146 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp5_ = stdout;
#line 146 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp6_ = e;
#line 146 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_tmp7_ = _tmp6_->message;
#line 146 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		fprintf (_tmp5_, "COM.GCLEANER.PLUGIN-PACKAGES-C: [ERROR PKGCONFIG: %s]", _tmp7_);
#line 141 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		_g_error_free0 (e);
#line 767 "plugin-packages.c"
	}
	__finally31:
#line 141 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 141 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 141 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		g_clear_error (&_inner_error_);
#line 141 "/home/jeremy/Documents/gcleaner/src/Plugins/plugin-packages.vala"
		return;
#line 778 "plugin-packages.c"
	}
}


