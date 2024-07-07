#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{

    char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    // Validate the Key provided and suggest modifications if necessary
    if (argc != 2)
    {
        printf("Usage: %s <key>\n", argv[0]);
        return 1;
    }

    else if (strlen(argv[1]) != 26)
    {
        printf("Key Should be Containing 26 characters.\n");
        return 1;
    }

    else
    {
        for (int j = 0; j < 26; j++)
        {
            int count = 0;
            for (int i = 0; i < strlen(argv[1]); i++)
            {
                if (!isalpha(argv[1][i]))
                {
                    printf("Key should only contain alphabetical characters\n");
                    return 1;
                }
                if (alphabets[j] == tolower(argv[1][i]))
                {
                    count++;
                }
            }
            if (count != 1)
            {
                printf("Enter A Valid Key without character repetition\n");
                return 1;
            }
        }
    }

    // Get Input From user
    string plaintxt = get_string("plaintext: ");

    // Encrypt The text using key
    for (int i = 0; i < strlen(plaintxt); i++)
    {
        if (isalpha(plaintxt[i]))
        {
            int identity = 0;
            // printf("%i", identity);
            for (int j = 0; j < 26; j++)
            {
                if (tolower(plaintxt[i]) == alphabets[j])
                {
                    identity = j;
                }
            }
            // printf("%i", identity);
            if (isupper(plaintxt[i]))
            {
                plaintxt[i] = toupper(argv[1][identity]);
            }
            

            else if (islower(plaintxt[i]))
            {
                plaintxt[i] = tolower(argv[1][identity]);
            }

            // pri
        }
    }

    printf("ciphertext: %s\n", plaintxt);

    return 0;
}