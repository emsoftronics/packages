#configuration
CONFIG +=  cross_compile shared qpa release qt_no_framework
host_build {
    QT_ARCH = x86_64
    QT_TARGET_ARCH = arm
} else {
    QT_ARCH = arm
}
QT_CONFIG +=  minimal-config small-config medium-config large-config full-config fontconfig libudev evdev xkbcommon-evdev gbm kms c++11 c++14 c++1z accessibility egl eglfs eglfs_gbm opengl opengles2 shared qpa reduce_exports clock-gettime clock-monotonic posix_fallocate mremap getaddrinfo ipv6ifname getifaddrs inotify eventfd threadsafe-cloexec poll_poll png no-gif doubleconversion system-freetype system-harfbuzz zlib iconv glib dbus dbus-linked openssl rpath alsa pulseaudio gstreamer-1.0 icu concurrent audio-backend release

#versioning
QT_VERSION = 5.7.1
QT_MAJOR_VERSION = 5
QT_MINOR_VERSION = 7
QT_PATCH_VERSION = 1

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 

QT_EDITION = OpenSource

# pkgconfig
PKG_CONFIG_SYSROOT_DIR = /home/lntts/Jacinto/Jacinto_linux/targetfs
PKG_CONFIG_LIBDIR = /home/lntts/Jacinto/Jacinto_linux/targetfs/usr/lib/pkgconfig

# sysroot
!host_build {
    QMAKE_CFLAGS    += --sysroot=$$[QT_SYSROOT]
    QMAKE_CXXFLAGS  += --sysroot=$$[QT_SYSROOT]
    QMAKE_LFLAGS    += --sysroot=$$[QT_SYSROOT]
}

QT_COMPILER_STDCXX = 199711
QT_GCC_MAJOR_VERSION = 5
QT_GCC_MINOR_VERSION = 3
QT_GCC_PATCH_VERSION = 1
