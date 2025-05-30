#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char caractere[100];
    int longueur=0;

    fgets(caractere, sizeof(caractere), stdin);

    while (caractere[longueur] != '\0' && caractere[longueur] != '\n')
    {
        longueur++;
    }
    
    printf("Longueur de la chaîne : %d", longueur);
    return 0;
}
