building_dotnet = add_languages('cs', native: false, required: get_option('dotnet'))
if building_dotnet
  tolkdotnet_srcs = ['Tolk.cs']
  tolkdotnet_res = windows.compile_resources('TolkDotNet.rc')
  tolkdotnet_srcs += tolkdotnet_res

  tolkdotnet_lib = library('TolkDotNet',
    sources: tolkdotnet_srcs,
    cs_args: '/nologo',
    install: true
  )
endif

summary('DotNet', building_dotnet, section: 'Bindings')
