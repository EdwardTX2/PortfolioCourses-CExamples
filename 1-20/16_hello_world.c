#include <stdio.h>
// this tells c to include the library named stdio.h

// below defines a function called main that returns an integer
// and does not take any arugments (void)
int main(void)
{
    // function call
    // function name is printf
    // argument is "Hello, World!\n"
    // ; ends statements
    // \n tells it go to next line
    printf("Hello, World!\n");

    return 0;
}
// compile this program with command:
// gcc -o demo 16_hello_world.c
// this creates demo.exe an executable
// that you can run with the command:
// ./demo