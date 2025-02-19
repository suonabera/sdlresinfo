AC_INIT(sdlresinfo, 1.0)
AC_PREREQ(2.50)
AM_INIT_AUTOMAKE([foreign])
AC_PROG_CC
AC_PROG_CPP
AC_PROG_CXX

dnl Check for SDL
SDL_VERSION=1.2.0
AM_PATH_SDL($SDL_VERSION,
            :,
	    AC_MSG_ERROR([*** SDL version $SDL_VERSION not found!])
)
LIBS="$LIBS $SDL_LIBS"
CPPFLAGS="$CPPFLAGS $SDL_CFLAGS"

dnl Check if SDL is 1.2.x (1.3 not supported)
AC_MSG_CHECKING([SDL version only being 1.2.X])
AC_COMPILE_IFELSE([AC_LANG_SOURCE([
#include "SDL.h"
void blah(){
#if SDL_MINOR_VERSION != 2
#error "Only SDL 1.2 supported"
#endif
;
}
])],AC_MSG_RESULT([yes]),[
 AC_MSG_RESULT([no]) 
 AC_MSG_ERROR([Only libSDL 1.2.X supported])])
 
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
])
AC_OUTPUT