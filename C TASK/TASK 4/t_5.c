#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sent[100];
    int vcount = 0;
    int len, i;

    printf("Enter a sentence: ");
    fgets(sent, sizeof(sent), stdin);  // safer than gets()

    len = strlen(sent);

    for (i = 0; i < len; i++)
    {
        // Check if current character is start of the sentence or after a delimiter
        if (i == 0 || sent[i - 1] == ' ' || sent[i - 1] == ';' || sent[i - 1] == ',' || 
            sent[i - 1] == '?' || sent[i - 1] == '!' || (sent[i - 1] == '.' && i - 1 != len - 1))
        {
            char ch = toupper(sent[i]);
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vcount++;
            }
        }
    }

    printf("Number of words starting with a vowel: %d\n", vcount);

    return 0;
}
