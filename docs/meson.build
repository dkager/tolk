pandoc = find_program('pandoc', required: get_option('docs'))
if pandoc.found()
  doctitle = meson.project_name()
  docauthor = 'Davy Kager'

  tolk_docs = custom_target('docs',
    output : 'README.html',
    input : 'README.md',
    command : [pandoc,
      '-s', '--toc',
      '-M', 'title="@0@"'.format(doctitle),
      '-M', 'author="@0@"'.format(docauthor),
      '-r', 'markdown', '-w', 'html5',
      '-o', '@OUTPUT@', '@INPUT@'
    ],
    install : true,
    install_dir : get_option('datadir') / 'doc' / meson.project_name()
  )
endif

summary('Documentation', pandoc.found())
