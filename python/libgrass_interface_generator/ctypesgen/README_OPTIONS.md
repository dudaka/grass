# Ctypesgen Options - Complete Guide

Ctypesgen is a tool that automatically generates Python bindings for C libraries by parsing C header files and creating Python ctypes wrappers. Here's a detailed breakdown of all available options:

## 1. Basic Parameters

### `-o, --output FILE`

**Purpose:** Specify output file for the generated Python wrapper  
**Usage:** `-o wrapper.py` or `--output wrapper.py`  
**Default:** stdout (prints to console)  
**Example:** `ctypesgen -o mylib_wrapper.py /path/to/header.h`

### `-l, --library LIBRARY`

**Purpose:** Specify libraries to link against  
**Usage:** Can be used multiple times for multiple libraries  
**Example:** `-l mylib -l math` links against libmylib and libm  
**Note:** Essential for runtime loading of shared libraries

### `header files`

**Purpose:** C header files to parse (positional arguments)  
**Usage:** List header files at the end of command  
**Required:** At least one header file must be specified

## 2. Include and Module Options

### `--include HEADER`

**Purpose:** Include system headers (like stdio.h, stdlib.h)  
**Usage:** `--include stdio.h --include stdlib.h`  
**Why useful:** For accessing standard C library functions/types

### `-m, --module, --link-module MODULE`

**Purpose:** Import symbols from existing Python modules  
**Usage:** `-m ctypes -m sys`  
**Use case:** When your C library depends on symbols from Python modules

### `-I, --includedir INCLUDEDIR`

**Purpose:** Add directories to header search path  
**Usage:** `-I /usr/local/include -I /opt/mylib/include`  
**Essential for:** Finding custom header files

## 3. Library Path Options

### `-L, -R, --rpath, --libdir LIBDIR`

**Purpose:** Add to both compile-time and runtime library search paths  
**Usage:** `-L /usr/local/lib -L /opt/mylib/lib`  
**Important:** Helps ctypes find shared libraries at runtime

### `--compile-libdir LIBDIR`

**Purpose:** Add to compile-time library search path only  
**Usage:** `--compile-libdir /tmp/build/lib`

### `--runtime-libdir LIBDIR`

**Purpose:** Add to runtime library search path only  
**Usage:** `--runtime-libdir /usr/lib64`

### `-W l,OPTION`

**Purpose:** Pass linker options (must be -L, -R, or --rpath)  
**Usage:** `-Wl,-L/usr/local/lib`  
**Note:** Alternative way to specify library paths

## 4. Preprocessor Options

### `--cpp COMMAND`

**Purpose:** Specify C preprocessor command  
**Usage:** `--cpp "clang -E"` or `--cpp "gcc -E -std=c99"`  
**Default:** `gcc -E`  
**Important:** Different compilers may handle headers differently

### `--allow-gnu-c`

**Purpose:** Keep `__GNUC__` macro defined during preprocessing  
**Usage:** `--allow-gnu-c`  
**Default:** ctypesgen undefines `__GNUC__` with `-U __GNUC__`  
**When to use:** When headers depend on GNU C extensions

### `-D, --define MACRO`

**Purpose:** Define preprocessor macros  
**Usage:** `-D DEBUG -D VERSION=2 -D "PLATFORM=\"linux\""`  
**Use case:** Control conditional compilation in headers

### `-U, --undefine NAME`

**Purpose:** Undefine preprocessor macros  
**Usage:** `-U WINDOWS -U __GNUC__`  
**Use case:** Remove problematic macro definitions

### `--save-preprocessed-headers FILENAME`

**Purpose:** Save preprocessed output to file for debugging  
**Usage:** `--save-preprocessed-headers debug.i`  
**Helpful for:** Troubleshooting preprocessing issues

### `--optimize-lexer`

**Purpose:** Run lexer in optimized mode (requires write access)  
**Usage:** `--optimize-lexer`  
**Note:** Creates/updates `lextab.py` file in ctypesgen package

## 5. Symbol Processing Options

### `-a, --all-headers`

**Purpose:** Include symbols from all headers (including system headers)  
**Usage:** `--all-headers`  
**Default:** Only include symbols from specified headers  
**Warning:** May include many unwanted symbols

### `--builtin-symbols`

**Purpose:** Include preprocessor-generated symbols  
**Usage:** `--builtin-symbols`  
**Use case:** When you need compiler-defined macros

### `--no-macros`

**Purpose:** Don't generate Python equivalents for C macros  
**Usage:** `--no-macros`  
**Default:** Macros are included

### `--no-undefs`

**Purpose:** Ignore `#undef` directives  
**Usage:** `--no-undefs`  
**Default:** Respects `#undef` directives

### `-i, --include-symbols REGEX`

**Purpose:** Include symbols matching regex pattern  
**Usage:** `-i "^mylib_.*" -i "^MYLIB_.*"`  
**Multiple:** Combined with OR logic: `(pattern1|pattern2)`

### `-x, --exclude-symbols REGEX`

**Purpose:** Exclude symbols matching regex pattern  
**Usage:** `-x "^_.*" -x ".*_internal"`  
**Use case:** Remove private/internal symbols

### `-P, --strip-prefix REGEX`

**Purpose:** Remove prefixes from symbol names  
**Usage:** `-P "^mylib_" -P "^MYLIB_"`  
**Result:** `mylib_init` becomes `init`

## 6. Type Support Options

### `--no-stddef-types`

**Purpose:** Don't include extra stddef.h types  
**Usage:** `--no-stddef-types`  
**Default:** Supports stddef.h types (size_t, ptrdiff_t, etc.)

### `--no-gnu-types`

**Purpose:** Don't include GNU C extension types  
**Usage:** `--no-gnu-types`  
**Default:** Supports GNU types

### `--no-python-types`

**Purpose:** Don't include Python built-in C types  
**Usage:** `--no-python-types`  
**Default:** Supports Python C API types

## 7. Output Options

### `--output-language LANGUAGE`

**Purpose:** Choose output format  
**Choices:** `py` (Python), `json`  
**Usage:** `--output-language json`  
**Default:** `py` (Python code)

### `--no-embed-preamble`

**Purpose:** Don't embed loader code in output  
**Usage:** `--no-embed-preamble`  
**Requires:** `--output FILE` and `--output-language py`  
**Use case:** When you want minimal output

### `--header-template TEMPLATE`

**Purpose:** Custom header template for output file  
**Usage:** `--header-template "# Generated by ctypesgen"`

### `--strip-build-path BUILD_PATH`

**Purpose:** Remove build paths from generated comments  
**Usage:** `--strip-build-path /tmp/build`  
**Use case:** Clean up generated code

### `--insert-file FILENAME`

**Purpose:** Append file contents to output  
**Usage:** `--insert-file extra_code.py`  
\*\*Can use multiple times for multiple files

## 8. Error and Debug Options

### `--all-errors`

**Purpose:** Show all warnings/errors, even non-critical ones  
**Usage:** `--all-errors`  
**Default:** Only shows errors affecting output

### `--show-long-errors`

**Purpose:** Show full error messages instead of abbreviated  
**Usage:** `--show-long-errors`  
**Helpful for:** Detailed debugging

### `--no-macro-warnings`

**Purpose:** Suppress macro-related warnings  
**Usage:** `--no-macro-warnings`  
**Default:** Shows macro warnings

### `--debug-level LEVEL`

**Purpose:** Set debug verbosity (0-9)  
**Usage:** `--debug-level 3`  
**Default:** 0 (no debug output)

## Practical Usage Examples

### Basic Usage:

```bash
ctypesgen -l mylib -o mylib_wrapper.py mylib.h
```

### Complex Library with Dependencies:

```bash
ctypesgen \
  -l mylib -l pthread -l m \
  -I /usr/local/include \
  -L /usr/local/lib \
  -D _GNU_SOURCE \
  --include stdio.h \
  --include stdlib.h \
  -i "^mylib_.*" \
  -x ".*_private" \
  -P "^mylib_" \
  -o mylib_wrapper.py \
  /usr/local/include/mylib.h
```

### Debug Preprocessing Issues:

```bash
ctypesgen \
  --save-preprocessed-headers debug.i \
  --cpp "gcc -E -dM" \
  --all-errors \
  --show-long-errors \
  --debug-level 5 \
  -l mylib mylib.h
```

### JSON Output for Analysis:

```bash
ctypesgen \
  --output-language json \
  -o analysis.json \
  --all-headers \
  mylib.h
```

The key to successful ctypesgen usage is understanding your C library's structure, dependencies, and choosing appropriate filters to include only the symbols you need while excluding internal/private ones.
