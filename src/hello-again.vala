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

using Gtk;

int main(string[] args){
	// Initialize Gtk
	Gtk.init (ref args);

	// Init window
	var window = new Gtk.Window ();

	// Initialize app
	set_window_properties (ref window);
	init_labels (ref window);
	init_buttons (ref window);

	// Start app
	window.show_all ();
	Gtk.main ();
	return 0;
}

private void set_window_properties(ref Window window){
	window.title = "Hello World!";
	window.set_border_width (12);
	window.set_position (Gtk.WindowPosition.CENTER);
	window.set_default_size (350, 100);
	window.destroy.connect (Gtk.main_quit);
}

private void init_buttons(ref Window window){
	var btn_hello = new Gtk.Button.with_label ("Click me!");
	btn_hello.clicked.connect (() => {
		btn_hello.label = "Hello World!";
		btn_hello.set_sensitive (false);
	});
	window.add (btn_hello);
}

private void init_labels(ref Window window){
	var label = new Gtk.Label ("Hello Again World!");
	window.add (label);
}




