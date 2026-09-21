// objective: test that \ref to a file-scope static resolves within its own file but not from another file, see issue #12360
// input: more_125_b.h
// config: EXTRACT_STATIC = YES
// The cross-file reference below is expected not to resolve, which warns.
// config: WARN_IF_DOC_ERROR = NO
// check: 125__static__ref_8cpp.xml
// check: classcls.xml
/** @file */

/** @brief A documented file-scope static variable. */
static const int MY_STATIC_CONST = 1;

/** @brief Refers to @ref MY_STATIC_CONST from the same file, which resolves. */
void myFunction();
