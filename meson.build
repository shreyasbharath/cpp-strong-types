project(
    'cpp-strong-types', # project name
    'c', 'cpp',
    version : '0.1.0',
    license : 'Unlicense',
    default_options : ['c_std=c11', 'cpp_std=c++2a', 'buildtype=debug']) # compile for C++

# it will be referred from subdir projects
inc = include_directories('inc', 'src')

# meson will try to find a meson.build file inside following directories
subdir('inc')
subdir('src')
subdir('test')
