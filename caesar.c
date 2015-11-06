// include libraries
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
    
    // get plaintext
    string text = GetString();
    
    {
    }
    
    // return 0 for success
    return 0;
    
}
