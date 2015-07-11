/* Useful if you wish to make target-specific gcc changes. */
#undef TARGET_YOUROS
#define TARGET_YOUROS 1

/* Default arguments you want when running your x86_64-youros-gcc toolchain */
#define LIB_SPEC "-lc -lg -lm" /* link against C standard libraries */

/* Don't automatically add extern "C" { } around header files. */
#undef NO_IMPLICIT_EXTERN_C
#define NO_IMPLICIT_EXTERN_C 1

/* Standard include directory. */
#undef STANDARD_INCLUDE_DIR
#define STANDARD_INCLUDE_DIR ="/lib/include"

/* Additional predefined macros. */
#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS()		\
	do {								\
		builtin_define("__youros__");	\
		builtin_assert("system=youros");\
	} while(0);
