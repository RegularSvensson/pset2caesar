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
                
            }
        }
    }
    
    // return 0 for success
    return 0;
    
}
