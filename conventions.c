/* Comments are always in this format, even for a single line.
 * You must not use more than 80 chars per line (also for regular code).
 * This is 80 chars: ---------------------------------------------------------*/

/* We always start with library includes */
#include <stdio.h>
#include <stdlib.h>

/* Macros: Always BIG CAPS and snake-case. Arguments as well. */
#define INTEGER_MACRO 4
#define FUNCTION_MACRO(X) (X*X)

/* Multiline macros need "\" at the end of the line,
 * make sure this char is on the same column */
#define MULTILINE_MACRO                                              \
"This is a string macro. We can do multiline strings in C "          \
"Like this. Note that the back-slash is used for multiline macros, " \
"and they must be at the same column!"

/* Structs are defined as following: */
struct meaningful_name {
    int var1;
    long var2;
};

/* We never use typedefs unless in special cases (further in course).
 * When we do use them, we use the suffix "_t": */
typedef int another_name_for_int_t;

/* Functions are defined in a single line. They all must begin with a
 * "Doxygen" comment block as follows: */

/**
 * @brief This line briefly describes the method operation.
 * @param argc An explanation on the "argc" parameter
 * @param argv An explanation on the "argv" parameter
 * @return What this function returns in all possible scenarios.
 * @note We can add notes like this
 */
int main(int argc, char **argc) {
    /* We must indent each block. Indentation using 4 spaces, not tabs! */

    /* Pointers (*) should be adjacent to the variable name, not to the type! */
    int *num = NULL;

    /* This is incorrect: */
    int* wrong;

    /* Control blocks should be written like this: */
    if (0 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    /* Also loops: */
    while (0) {
        for (int i=0; i<10; i++) {
            /* We always open and close code blocks, even for single lines! */
            printf("Iteration: %d\n", i);
        }
    }

}

/**
 * @brief We use snake-case for all function and variable names!
 * @return We use integers to return the function status (success/error).
 * success is always 0!
 */
int this_is_a_long_function_name() {
    if (1 == 1) {
        return 0;
    } else {
        /* We never use "magic numbers" - always define them in macros! */
        return INTEGER_MACRO;
    }
}

/**
 * @brief Functions with a large number of arguments are written like this
 */
int this_function_has_many_arguments(int arg1,
                                     char *arg2,
                                     void **arg3) {
    /* When we call function with many arguments, we prefer one line: */
    this_function_has_many_arguments(arg1, arg2, arg3);

    int this_is_a_long_variable_name;
    char *this_is_another_long_variable_name;
    void **this_is_a_third_long_variable_name;

    /* If we don't have enough space (until 80 chars), we do it like this: */
    this_function_has_many_arguments(this_is_a_long_variable_name,
                                     this_is_another_long_variable_name,
                                     this_is_a_third_long_variable_name);

    return 0;
}