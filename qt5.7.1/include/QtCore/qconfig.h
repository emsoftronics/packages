#define QT_VERSION_MAJOR    5
#define QT_VERSION_MINOR    7
#define QT_VERSION_PATCH    1
#define QT_VERSION_STR      "5.7.1"

/* Everything */
/* Compile time features */
#define QT_LARGEFILE_SUPPORT 64
#define QT_COORD_TYPE float
#define QT_COORD_TYPE_STRING "float"

// Compiler sub-arch support

#ifndef QT_BOOTSTRAPPED

#if defined(QT_NO_CUPS) && defined(QT_CUPS)
# undef QT_NO_CUPS
#elif !defined(QT_NO_CUPS) && !defined(QT_CUPS)
# define QT_NO_CUPS
#endif

#if defined(QT_NO_EGL_X11) && defined(QT_EGL_X11)
# undef QT_NO_EGL_X11
#elif !defined(QT_NO_EGL_X11) && !defined(QT_EGL_X11)
# define QT_NO_EGL_X11
#endif

#if defined(QT_NO_IMAGEFORMAT_JPEG) && defined(QT_IMAGEFORMAT_JPEG)
# undef QT_NO_IMAGEFORMAT_JPEG
#elif !defined(QT_NO_IMAGEFORMAT_JPEG) && !defined(QT_IMAGEFORMAT_JPEG)
# define QT_NO_IMAGEFORMAT_JPEG
#endif

#if defined(QT_NO_LIBPROXY) && defined(QT_LIBPROXY)
# undef QT_NO_LIBPROXY
#elif !defined(QT_NO_LIBPROXY) && !defined(QT_LIBPROXY)
# define QT_NO_LIBPROXY
#endif

#if defined(QT_NO_OPENVG) && defined(QT_OPENVG)
# undef QT_NO_OPENVG
#elif !defined(QT_NO_OPENVG) && !defined(QT_OPENVG)
# define QT_NO_OPENVG
#endif

#if defined(QT_NO_TSLIB) && defined(QT_TSLIB)
# undef QT_NO_TSLIB
#elif !defined(QT_NO_TSLIB) && !defined(QT_TSLIB)
# define QT_NO_TSLIB
#endif

#if defined(QT_NO_XRENDER) && defined(QT_XRENDER)
# undef QT_NO_XRENDER
#elif !defined(QT_NO_XRENDER) && !defined(QT_XRENDER)
# define QT_NO_XRENDER
#endif

#if defined(QT_OPENGL_ES) && defined(QT_NO_OPENGL_ES)
# undef QT_OPENGL_ES
#elif !defined(QT_OPENGL_ES) && !defined(QT_NO_OPENGL_ES)
# define QT_OPENGL_ES
#endif

#if defined(QT_OPENGL_ES_2) && defined(QT_NO_OPENGL_ES_2)
# undef QT_OPENGL_ES_2
#elif !defined(QT_OPENGL_ES_2) && !defined(QT_NO_OPENGL_ES_2)
# define QT_OPENGL_ES_2
#endif

#if defined(QT_RUNTIME_XCURSOR) && defined(QT_NO_RUNTIME_XCURSOR)
# undef QT_RUNTIME_XCURSOR
#elif !defined(QT_RUNTIME_XCURSOR) && !defined(QT_NO_RUNTIME_XCURSOR)
# define QT_RUNTIME_XCURSOR
#endif

#if defined(QT_RUNTIME_XFIXES) && defined(QT_NO_RUNTIME_XFIXES)
# undef QT_RUNTIME_XFIXES
#elif !defined(QT_RUNTIME_XFIXES) && !defined(QT_NO_RUNTIME_XFIXES)
# define QT_RUNTIME_XFIXES
#endif

#if defined(QT_RUNTIME_XRANDR) && defined(QT_NO_RUNTIME_XRANDR)
# undef QT_RUNTIME_XRANDR
#elif !defined(QT_RUNTIME_XRANDR) && !defined(QT_NO_RUNTIME_XRANDR)
# define QT_RUNTIME_XRANDR
#endif

#if defined(QT_THREADSAFE_CLOEXEC) && defined(QT_NO_THREADSAFE_CLOEXEC)
# undef QT_THREADSAFE_CLOEXEC
#elif !defined(QT_THREADSAFE_CLOEXEC) && !defined(QT_NO_THREADSAFE_CLOEXEC)
# define QT_THREADSAFE_CLOEXEC 1
#endif

#endif // QT_BOOTSTRAPPED

#define QT_VISIBILITY_AVAILABLE

#define QT_QPA_DEFAULT_PLATFORM_NAME "xcb"
