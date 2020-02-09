Jsonnet reformatter v0.15.0

jsonnetfmt {<option>} { <filename> }

Available options:
  -h / --help             This message
  -e / --exec             Treat filename as code
  -o / --output-file <file> Write to the output file rather than stdout
  -i / --in-place         Update the Jsonnet file(s) in place.
  --test                  Exit with failure if reformatting changed the file(s).
  -n / --indent <n>       Number of spaces to indent by (default 2, 0 means no change)
  --max-blank-lines <n>   Max vertical spacing, 0 means no change (default 2)
  --string-style <d|s|l>  Enforce double, single (default) quotes or 'leave'
  --comment-style <h|s|l> # (h), // (s)(default), or 'leave'; never changes she-bang
  --[no-]pretty-field-names Use syntax sugar for fields and indexing (on by default)
  --[no-]pad-arrays       [ 1, 2, 3 ] instead of [1, 2, 3]
  --[no-]pad-objects      { x: 1, y: 2 } instead of {x: 1, y: 2} (on by default)
  --[no-]sort-imports     Sorting of imports (on by default)
  --debug-desugaring      Unparse the desugared AST without executing it
  --version               Print version

In all cases:
<filename> can be - (stdin)
Multichar options are expanded e.g. -abc becomes -a -b -c.
The -- option suppresses option processing for subsequent arguments.
Note that since filenames and jsonnet programs can begin with -, it is advised to
use -- if the argument is unknown, e.g. jsonnet -- "$FILENAME".
