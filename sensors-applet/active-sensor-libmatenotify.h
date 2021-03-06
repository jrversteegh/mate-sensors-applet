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

#ifndef ACTIVE_SESNOR_LIBMATENOTIFY_H
#define ACTIVE_SENSOR_LIBMATENOTIFY_H

#include "sensors-applet.h"
#include "active-sensor.h"

void active_sensor_libmatenotify_notify(ActiveSensor *active_sensor,
                                    NotifType notif_type,
                                    const gchar *summary,
                                    const gchar *message,
                                    const gchar *icon_filename,
                                    gint timeout_msecs,
                                    GtkWidget *attach);
void active_sensor_libmatenotify_notify_end(ActiveSensor *active_sensor,
                                        NotifType notif_type);

#endif /* SENSORS_APPLET_LIBMATENOTIFY_H */
