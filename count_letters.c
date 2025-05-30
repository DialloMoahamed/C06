#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chaine[100];
    int voyelles = 0, consonnes = 0;

    printf("Entrez une chaîne : ");
    fgets(chaine, sizeof(chaine), stdin);

    for (int i = 0; chaine[i] != '\0'; i++) {
        char caractere = tolower(chaine[i]); 

        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            voyelles++;
        } else if (isalpha(caractere)) {
            consonnes++;
        }
    }

    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}