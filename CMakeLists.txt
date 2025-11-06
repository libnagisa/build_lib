cmake_minimum_required(VERSION 3.5...3.20)

# project(nagisa_build_lib VERSION "${NAGISA_SUPERPROJECT_VERSION}" LANGUAGE CXX)
project(nagisa_build_lib LANGUAGES CXX)

add_library(nagisa_build_lib INTERFACE)

add_library(nagisa::build_lib ALIAS nagisa_build_lib)

target_include_directories(nagisa_build_lib
	INTERFACE
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include>
)
include(GNUInstallDirs)
install(
	TARGETS nagisa_build_lib
	EXPORT  nagisa_build_lib_targets
)
install(
	DIRECTORY include/
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
install(
	EXPORT nagisa_build_lib_targets
	NAMESPACE nagisa::
	FILE nagisa_build_libConfig.cmake
	DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/nagisa_build_lib
)