project('crawler', 'cpp', version: '0.9.0', default_options : ['cpp_std=c++14'],
    license: 'GPL2', )

#dependencies
seastar = dependency('seastar')
libwarc_dep = dependency('libwarc', fallback: ['libwarc', 'libwarc_dep'])


sources = ['src/main.cc']

executable('crawler', sources, dependencies: [libwarc_dep, seastar])

