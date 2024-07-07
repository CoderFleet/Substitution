#include <cs50.h>
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
        printf("Key must contain 26 characters.\n");
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

    return 0;
}