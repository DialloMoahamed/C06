#include <stdio.h>

int main() {
    char c;
    int voyelles = 0;
    int consonnes = 0;

    // Lecture caractère par caractère jusqu'à '\n'
    while (scanf("%c", &c) == 1 && c != '\n') {

        // Convertir en minuscule
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }

        // Vérifier si c'est une lettre
        if (c >= 'a' && c <= 'z') {
            // Vérifier si c'est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
    }

    // Affichage strict du format attendu
    printf("Voyelles : %d, Consonnes : %d", voyelles, consonnes);

    return 0;
}
