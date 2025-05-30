#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char chaine[100];

    fgets(chaine, sizeof(chaine), stdin);

    for (int i = 0; chaine[i] != '\0'; i++)
    {
        chaine[i] = toupper(chaine[i]);
    }
    
    printf("%s\n", chaine);
    return 0;
}

