// include libraries
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

// main function
int main (int argc, string argv[])
{
    // print hello world (test)
    printf("hello, world\n");
    
    // print number of command line arguments
    printf("Argc: %i\n", argc);
    
    // print individual command line arguments
    for (int i = 0; i < argc; i++)
    {
        printf("Argv place %i: %s\n", i, argv[i]);
    }
    
}
