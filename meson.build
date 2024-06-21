project('tolk', ['c', 'cpp'],
  version: '1.0',
  license: 'lgpl-3-or-later',
  default_options: ['warning_level=3'],
  meson_version: '>=0.59.0',
)

windows = import('windows')

# Determine if we need JNI support
building_java = add_languages('java', native: false, required: get_option('java'))
building_jni = get_option('jni') or building_java
summary('JNI support', building_jni)

subdir('src')
  subdir('src/dotnet')
  subdir('src/java')
  subdir('src/python')
  subdir('docs')

meson.add_install_script('meson-install.bat', build_machine.cpu_family())
