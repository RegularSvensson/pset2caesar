// include libraries
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

// main function
int main (int argc, string argv[])
{
    // validate argc
    if (argc != 2)
    {
        printf("Please supply an integer key for caesar.\n");
        return 1;
    }
    
    // store key as integer
    int key = atoi(argv[1]);
    
    // validate key
    if (key == 0)
    {
        printf("Please supply an integer key for caesar.\n");
        return 1;
    } 
    
    // print hello world (test)
    printf("hello, world\n");

    // print key
    printf("key: %i\n", key);
    
    // print number of command line arguments
    printf("Argc: %i\n", argc);
    
    // print individual command line arguments
    for (int i = 0; i < argc; i++)
    {
        printf("Argv place %i: %s\n", i, argv[i]);
    }
    
    // return 0 for success
    return 0;
    
}
