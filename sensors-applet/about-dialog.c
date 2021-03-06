/*
 * Copyright (C) 2005-2009 Alex Murray <murray.alex@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */

#include <mate.h>
#include "about-dialog.h"

void about_dialog_open(SensorsApplet *sensors_applet) {
    gchar *translator;
    const gchar *authors[] = {
        "Alex Murray <murray.alex@gmail.com>",
        "Stefano Karapetsas <stefano@karapetsas.com>",
        NULL
    };

    if (_("Translator") == "Translator") {
        translator = NULL;
    } else {
        translator = g_strdup(_("To translator: Put your name here to show up in the About dialog as the translator"));
    }

    /* Construct the about dialog */
    gtk_show_about_dialog(NULL,
                  "program-name", PACKAGE_NAME, 
                  "version", PACKAGE_VERSION,
                  "copyright", "(C) 2005-2009, Alex Murray <murray.alex@gmail.com>\n(C) 2011, Stefano Karapetsas <stefano@karapetsas.com>",
                  "authors", authors,
                  "documenters", authors,
                  "translator-credits", translator,
                  "logo-icon-name", SENSORS_APPLET_ICON,
                  "website", "http://www.mate-desktop.org",
                  NULL);


    if (translator != NULL) {
        g_free(translator);
    }

}
