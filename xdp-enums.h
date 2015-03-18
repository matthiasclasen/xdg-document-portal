#ifndef XDP_ENUMS_H
#define XDP_ENUMS_H

#include <gom/gom.h>

G_BEGIN_DECLS

typedef enum {
  XDP_PERMISSION_FLAGS_READ              = (1<<0),
  XDP_PERMISSION_FLAGS_WRITE             = (1<<1),
  XDP_PERMISSION_FLAGS_GRANT_PERMISSION  = (1<<2),

  XDP_PERMISSION_FLAGS_ALL               = ((1<<3) - 1)
} XdpPermissionFlags;

G_END_DECLS

#endif /* XDP_ENUMS_H */
