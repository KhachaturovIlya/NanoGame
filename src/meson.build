project('my_project', 'cpp',
        version : '0.1',
        default_options : ['warning_level=3', 'cpp_std=c++23'])

subdir('model')

src = files('main.cpp') + model_src

executable('my_program', src)