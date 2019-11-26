project('wl_egl_example', ['c'], version: '0.0.1')

add_global_arguments(['-Wall',
                      '-Wextra',
                      '-Wno-unused-parameter',
                      '-Wshadow',
                      '-Wpointer-arith',
                      '-Wno-missing-field-initializers',
                      '-fdata-sections',
                      '-ffunction-sections'],
                      language : 'c')

wl_egl_dep = dependency('egl wayland-client wayland-egl')

executable('wl_egl_example', 'main.c', dependencies : [wl_egl_dep])

