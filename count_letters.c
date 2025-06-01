#include <stdio.h>

int main() {
    char tab[100];
    int i = 0;
    int voyelles = 0;
    int consonnes = 0;
    char c;

    // lit toute la ligne jusqu'au retour à la ligne
    fgets(tab, sizeof(tab), stdin); 

    while (tab[i] != '\0') {
        c = tab[i];

        if (c == '\n') {
            tab[i] = '\0';
            break;
        }
        // Convertir manuellement en minuscule si besoin
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        // Vérifie si c'est une lettre entre 'a' et 'z'
        if (c >= 'a' && c <= 'z') {
            // Vérifie si c'est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }

        i++;
    }

    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
