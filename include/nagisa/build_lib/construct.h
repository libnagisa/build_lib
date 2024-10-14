//#pragma once

#include "./config.h"

#include "./details/root.h"
#include "./details/name.h"
#include "./details/detail.h"
#include "./details/version.h"
//

// build version

NAGISA_BUILD_LIB_BEGIN

struct lib_version
{
	NAGISA_BUILD_LIB_PRIVATE_CALL(NAGISA_BUILD_LIB_PRIVATE_PARSE_VERSION, NAGISA_BUILD_LIB_VERSION);
};

NAGISA_BUILD_LIB_END