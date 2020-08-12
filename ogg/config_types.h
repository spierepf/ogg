#ifndef __CONFIG_TYPES_H__
#define __CONFIG_TYPES_H__

/* these are filled in by configure or cmake*/
#define INCLUDE_INTTYPES_H @INCLUDE_INTTYPES_H @
#define INCLUDE_STDINT_H @INCLUDE_STDINT_H @
#define INCLUDE_SYS_TYPES_H @INCLUDE_SYS_TYPES_H @

#include <stdint.h>

typedef int16_t ogg_int16_t;
typedef uint16_t ogg_uint16_t;
typedef int32_t ogg_int32_t;
typedef uint32_t ogg_uint32_t;
typedef int64_t ogg_int64_t;
typedef uint64_t ogg_uint64_t;

#endif
