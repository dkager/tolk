tolk_srcs = [
  'fsapi.c',
  'ScreenReaderDriverJAWS.cpp',
  'ScreenReaderDriverNVDA.cpp',
  'ScreenReaderDriverSA.cpp',
  'ScreenReaderDriverSAPI.cpp',
  'ScreenReaderDriverSNova.cpp',
  'ScreenReaderDriverWE.cpp',
  'ScreenReaderDriverZT.cpp',
  'Tolk.cpp',
  'wineyes.c',
  'zt.c',
]
tolk_cflags = ['-D_EXPORTING', '-DUNICODE']
tolk_incdir = include_directories('.')

if building_jni
  tolk_cflags += ['-D_WITH_JNI']
  tolk_srcs += 'TolkJNI.cpp'
endif

tolk_res = windows.compile_resources('Tolk.rc')
tolk_srcs += tolk_res

      tolk_lib = library('Tolk',
  sources: tolk_srcs,
  c_args: tolk_cflags,
  cpp_args: tolk_cflags,
  include_directories: tolk_incdir,
  install: true
)

      # Make this project usable as a Meson subproject
tolk_dep = declare_dependency(link_with: tolk_lib, include_directories: tolk_incdir)
