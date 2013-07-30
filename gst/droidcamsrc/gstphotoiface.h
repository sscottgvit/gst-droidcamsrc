/*
 * Copyright (C) 2013 Jolla LTD.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __GST_PHOTO_IFACE_H__
#define __GST_PHOTO_IFACE_H__

#include <gst/gst.h>

G_BEGIN_DECLS

enum
{
  PROP_0,
  PROP_CAMERA_DEVICE,
  PROP_MODE,
  PROP_READY_FOR_CAPTURE,
  PROP_VIDEO_METADATA,

  /* photography */

  /* end */
  N_PROPS,
};

void gst_photo_iface_init (GType type);
void gst_photo_iface_add_properties (GObjectClass * gobject_class);
gboolean gst_photo_iface_get_property (GObject * object, guint prop_id,
				       GValue * value, GParamSpec * pspec);
gboolean gst_photo_iface_set_property (GObject * object, guint prop_id,
				       const GValue * value, GParamSpec * pspec);

G_END_DECLS

#endif /* __GST_PHOTO_IFACE_H__ */
