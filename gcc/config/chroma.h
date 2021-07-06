#undef TARGET_CHROMA
#define TARGET_CHROMA 1

#undef LIB_SPEC
#define LIB_SPEC "-lc -lm"

#undef STARTFILE_SPEC
#define STARTFILE_SPEC "crt0.o%s crti.o%s crtbegin.o%s"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC "crtend.o%s crtn.o%s"

#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BULTINS()             \
    do {                                    \
        builtin_define("__chroma__");       \
        builtin_assert("system=chroma");    \
    } while(0);