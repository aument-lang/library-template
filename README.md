# library-template

A template for writing native Aument libraries in C.

## How to use

  1. You should already have Meson, a C compiler and Aument installed.
  2. [Download an archive of this repository.](https://github.com/aument-lang/library-template/archive/refs/heads/main.zip)
  3. Fill in information about your library in `meson.build`:
```
project(
    'library', # Name of your library
    'c'
)
```
  4. Run `build.sh` on Unix systems or run `build.bat` on Windows systems. A dynamically linked library should appear in the `build` folder.
  5. You can now run the example test file `tests/example.au`.

## License

MIT License
