pymod = import('python', required: get_option('python'))
if pymod.found()
  python = pymod.find_installation('python3', required: get_option('python'))
  if python.found()
    python.install_sources('Tolk.py')
  endif
endif

summary('Python', pymod.found() and python.found(), section: 'Bindings')
