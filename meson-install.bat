@echo off

if %1 == x86_64 (
    set arch=x64
) else (
    set arch=%1
)

copy %MESON_SOURCE_ROOT%\libs\%arch%\* %MESON_INSTALL_DESTDIR_PREFIX%\bin
copy %MESON_SOURCE_ROOT%\LICENSE* %MESON_INSTALL_DESTDIR_PREFIX%\share\doc\tolk
