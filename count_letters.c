#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char chaine[150];
    int voyelles = 0, consonnes = 0;

    fgets(chaine, sizeof(chaine), stdin);

    size_t len = strlen(chaine);
    if (len > 0 && chaine[len - 1] == '\n') {
        chaine[len - 1] = '\0';
    }

    for (int i = 0; chaine[i] != '\0'; i++)
    {
        char c = tolower(chaine[i]);

        if (isalpha(c))
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
                voyelles++;
            else
                consonnes++;
        }
    }

    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
