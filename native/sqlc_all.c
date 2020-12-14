
#include "sqlite3.c"

#ifndef OMIT_BASE64
#include "cencode.c"

#include "sqlite3_base64.c"
#endif

#include "sqlc.h" /* types needed for EVPlusNativeDriver_JNI.c */

#include "EVPlusNativeDriver_JNI.c"

#include "sqlc.c"

#ifndef OMIT_REGEXP
#include "sqlite3_regexp.c"
#endif
