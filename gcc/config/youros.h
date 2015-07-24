/* Useful if you wish to make target-specific gcc changes. */
#undef TARGET_YOUROS
#define TARGET_YOUROS 1

/* Default arguments you want when running your x86_64-youros-gcc toolchain */
#define LIB_SPEC "-lc -lg -lm" /* link against C standard libraries */

/* Provide start of programm */
#undef STARTFILE_SPEC
#define STARTFILE_SPEC "crt0.o%s"

/* Provide end of programm */
#undef ENDFILE_SPEC
#define ENDFILE_SPEC ""

/* Don't automatically add extern "C" { } around header files. */
#undef NO_IMPLICIT_EXTERN_C
#define NO_IMPLICIT_EXTERN_C 1

/* Additional predefined macros. */
#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS()		\
	do {								\
		builtin_define("__youros__");	\
		builtin_assert("system=youros");\
	} while(0);
