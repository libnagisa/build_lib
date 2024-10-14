#pragma once

#include "./root.h"

#if !defined(NAGISA_BUILD_LIB_NAME)
#	error "NAGISA_BUILD_LIB_NAME is not defined."
#endif

#define NAGISA_BUILD_LIB_BEGIN NAGISA_BUILD_LIB_INLINE_MODIFIER namespace NAGISA_BUILD_LIB_NAME {
#define NAGISA_BUILD_LIB_END }