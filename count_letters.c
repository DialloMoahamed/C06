#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chaine[100];
    int voyelles = 0;
    int consonnes = 0;
    int i;

    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = 0;

    for (i = 0; chaine[i] != '\0'; i++) {
        char caractere = tolower(chaine[i]);

        if (isalpha(caractere)) {
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
    }

    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}