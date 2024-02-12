#include <stdio.h>

char GetStringOfCharacters(char *string, int number);
int CompareStrings(char string1[], char string2[]);
int CheckStringLength(char string[]);

int main()
{
    char string1[150];
    char string2[150];

    char *pointerString1;
    char *pointerString2;

    pointerString1 = string1;
    pointerString2 = string2;

    GetStringOfCharacters(pointerString1, 1);
    GetStringOfCharacters(pointerString2, 2);

    CompareStrings(pointerString1, pointerString2);
}

char GetStringOfCharacters(char *string, int number)
{
    if (number == 1)
    {
        printf("Please enter a string of characters: ");
        scanf(" %[^\n]", string);
    }
    else
    {
        printf("Please enter another string of characters: ");
        scanf(" %[^\n]", string);
    }
}

int CompareStrings(char string1[], char string2[])
{
    int lengthOfString1 = CheckStringLength(string1);
    int lengthOfString2 = CheckStringLength(string2);

    if (lengthOfString1 != lengthOfString2)
    {
        printf("The strings are not the same!");
        return 0;
    }
    else
    {
        int differences = 0;

        for (int i = 0; i < lengthOfString1; i++)
        {
            if (*(string1 + i) != *(string2 + i))
            {
                differences++;
            }
        }

        if (differences == 0)
        {
            printf("The strings are the same!");
            return 0;
        }
        else
        {
            printf("The strings are not the same!");
            return 0;
        }
    }
}

int CheckStringLength(char string[])
{
    int length = 0;

    while (*string != '\0')
    {
        length++;
        string++;
    }

    return length;
}
