project(
    'library', # Name of your library
    'c'
)

prog_python = import('python').find_installation('python3')

aument = find_program('aument')

arg = run_command(aument, [ '--cflags' ]).stdout()
if arg != ''
    add_project_arguments(arg, language: ['c'])
endif

arg = run_command(aument, [ '--libs' ]).stdout()
if arg != ''
    add_global_link_arguments(arg, language: ['c'])
endif

src = run_command(prog_python, [
    './build-scripts/meson_files.py'
]).stdout().split('\n')

shared_module(meson.project_name(), src,
    include_directories: include_directories('src'))