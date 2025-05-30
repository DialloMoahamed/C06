#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char chaine[100];
    int voyelles = 0, consonnes = 0;

    fgets(chaine, sizeof(chaine), stdin);

    for (int i = 0; chaine[i] != '\0'; i++) {
        char caractere = tolower(chaine[i]); 

        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'y') {
            voyelles++;
        } 
        else if (isalpha(caractere)) {
            consonnes++;
        }
    }

    printf("Le nombre de voyelles : %d\n", voyelles);
    printf("Le nombre de consonnes : %d\n", consonnes);

    return 0;
}