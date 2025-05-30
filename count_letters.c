#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    int voyelles = 0;
    int consonnes = 0;
    char c;

    // lit toute la ligne jusqu'au retour à la ligne
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        c = str[i];

        if (c == '\n') {
            str[i] = '\0';
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

    printf("Nombre de voyelles : %d\n", voyelles);
    printf("Nombre de consonnes : %d\n", consonnes);

    return 0;
}
