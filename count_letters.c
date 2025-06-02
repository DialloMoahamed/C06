#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chaine[100];
    int voyelles = 0;
    int consonnes = 0;
    int i;

    printf("Entrez une chaîne de caractères : ");
    fgets(chaine, sizeof(chaine), stdin);

    // Supprimer le caractère de nouvelle ligne potentiellement ajouté par fgets
    chaine[strcspn(chaine, "\n")] = 0;

    for (i = 0; chaine[i] != '\0'; i++) {
        char caractere = tolower(chaine[i]); // Convertir en minuscule pour simplifier la comparaison

        if (isalpha(caractere)) { // Vérifier si le caractère est une lettre
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