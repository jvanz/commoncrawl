project('commoncrawl_parser', 'cpp', version: '0.9.0', default_options : ['cpp_std=c++14'])

#dependencies
seastar = dependency('seastar')

sources = ['src/main.cc']

executable('commoncrawl', sources, dependencies: seastar)

