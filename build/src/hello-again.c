/* hello-again.c generated by valac 0.36.7, the Vala compiler
 * generated from hello-again.vala, do not modify */

/*
* Copyright (c) 2011-2017 Your Organization (https://yourwebsite.com)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Ariel Bereslavsky ariael2009@gmail.com
*/

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;

struct _Block1Data {
	int _ref_count_;
	GtkButton* btn_hello;
};



gint _vala_main (gchar** args, int args_length1);
void set_window_properties (GtkWindow* * window);
void init_labels (GtkWindow* * window);
void init_buttons (GtkWindow* * window);
static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void __lambda4_ (Block1Data* _data1_);
static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self);


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GtkWindow* window = NULL;
	GtkWindow* _tmp0_;
	GtkWindow* _tmp1_;
#line 26 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_init (&args_length1, &args);
#line 29 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp0_ = (GtkWindow*) gtk_window_new (GTK_WINDOW_TOPLEVEL);
#line 29 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	g_object_ref_sink (_tmp0_);
#line 29 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	window = _tmp0_;
#line 32 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	set_window_properties (&window);
#line 33 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	init_labels (&window);
#line 34 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	init_buttons (&window);
#line 37 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp1_ = window;
#line 37 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_widget_show_all ((GtkWidget*) _tmp1_);
#line 38 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_main ();
#line 39 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	result = 0;
#line 39 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_g_object_unref0 (window);
#line 39 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	return result;
#line 84 "hello-again.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 24 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	return _vala_main (argv, argc);
#line 94 "hello-again.c"
}


static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self) {
#line 47 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_main_quit ();
#line 101 "hello-again.c"
}


void set_window_properties (GtkWindow* * window) {
	GtkWindow* _tmp0_;
	GtkWindow* _tmp1_;
	GtkWindow* _tmp2_;
	GtkWindow* _tmp3_;
	GtkWindow* _tmp4_;
#line 42 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	g_return_if_fail (*window != NULL);
#line 43 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp0_ = *window;
#line 43 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_window_set_title (_tmp0_, "Hello World!");
#line 44 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp1_ = *window;
#line 44 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_container_set_border_width ((GtkContainer*) _tmp1_, (guint) 12);
#line 45 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp2_ = *window;
#line 45 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_window_set_position (_tmp2_, GTK_WIN_POS_CENTER);
#line 46 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp3_ = *window;
#line 46 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_window_set_default_size (_tmp3_, 350, 100);
#line 47 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp4_ = *window;
#line 47 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	g_signal_connect ((GtkWidget*) _tmp4_, "destroy", (GCallback) _gtk_main_quit_gtk_widget_destroy, NULL);
#line 133 "hello-again.c"
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
#line 50 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 50 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	return _data1_;
#line 142 "hello-again.c"
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 50 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 50 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
		_g_object_unref0 (_data1_->btn_hello);
#line 50 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
		g_slice_free (Block1Data, _data1_);
#line 155 "hello-again.c"
	}
}


static void __lambda4_ (Block1Data* _data1_) {
#line 53 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_button_set_label (_data1_->btn_hello, "Hello World!");
#line 54 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _data1_->btn_hello, FALSE);
#line 165 "hello-again.c"
}


static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 52 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	__lambda4_ (self);
#line 172 "hello-again.c"
}


void init_buttons (GtkWindow* * window) {
	Block1Data* _data1_;
	GtkButton* _tmp0_;
	GtkWindow* _tmp1_;
#line 50 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	g_return_if_fail (*window != NULL);
#line 50 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_data1_ = g_slice_new0 (Block1Data);
#line 50 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_data1_->_ref_count_ = 1;
#line 51 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp0_ = (GtkButton*) gtk_button_new_with_label ("Click me!");
#line 51 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	g_object_ref_sink (_tmp0_);
#line 51 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_data1_->btn_hello = _tmp0_;
#line 52 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	g_signal_connect_data (_data1_->btn_hello, "clicked", (GCallback) ___lambda4__gtk_button_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
#line 56 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp1_ = *window;
#line 56 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_container_add ((GtkContainer*) _tmp1_, (GtkWidget*) _data1_->btn_hello);
#line 50 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	block1_data_unref (_data1_);
#line 50 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_data1_ = NULL;
#line 202 "hello-again.c"
}


void init_labels (GtkWindow* * window) {
	GtkLabel* label = NULL;
	GtkLabel* _tmp0_;
	GtkWindow* _tmp1_;
#line 59 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	g_return_if_fail (*window != NULL);
#line 60 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp0_ = (GtkLabel*) gtk_label_new ("Hello Again World!");
#line 60 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	g_object_ref_sink (_tmp0_);
#line 60 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	label = _tmp0_;
#line 61 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_tmp1_ = *window;
#line 61 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	gtk_container_add ((GtkContainer*) _tmp1_, (GtkWidget*) label);
#line 59 "/home/ariel/Projects/elementaryOS/hello-world/hello-again/src/hello-again.vala"
	_g_object_unref0 (label);
#line 224 "hello-again.c"
}


