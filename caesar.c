/*
 * caesar.c
 * by Elias Svensson
 *
 * Takes a key and a plaintext string, 
 * enciphers plantext according to caesar cipher and key,
 * and outputs encrypted string.
 *
 * Usage: ./caesar key
 *
 * v1. check50 :) style50 :)
 *
 */


// include libraries
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// main function
int main(int argc, string argv[])
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
    
    // loop over each character
    for (int i = 0; i < strlen(text); i++)
    {
        // check if character is in alphabet
        if (isalpha(text[i]))
        {
            // check if uppercase
            if (isupper(text[i]))
            {
                // encipher letter
                char letter = ((text[i] - 65 + key) % 26) + 65;
                
                // print letter
                printf("%c", letter);
            }
            // else, is lowercase
            else
            {
                // encipher letter
                char letter = ((text[i] - 97 + key) % 26) + 97;
                
                // print letter
                printf("%c", letter);
            }
        }
        // else, non-alphabetic char
        else
        {
            // print non-alphabetic char
            printf("%c", text[i]);
        }
    }
    // print new line
    printf("\n");
    
    // return 0 for success
    return 0;
    
}
