#include <stdio.h>

void my_constructor(void) __attribute__((constructor));

/**
 * my_constructor - Function to run before main.
 */
void my_constructor(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
