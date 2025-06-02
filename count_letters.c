#include <stdio.h>

int main() {
    char chaine[100];              // Tableau pour stocker la chaîne
    int voyelles = 0;              // Compteur de voyelles
    int consonnes = 0;             // Compteur de consonnes
    int i = 0;                     // Index pour parcourir la chaîne
    char c;                        // Caractère temporaire

    // Lire une ligne complète (avec espaces), jusqu'à la fin de ligne
    scanf("%[^\n]", chaine);

    // Parcourir la chaîne caractère par caractère
    while (chaine[i] != '\0') {
        c = chaine[i];

        // Convertir en minuscule si c'est une majuscule
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        // Vérifier si c'est une lettre de l'alphabet
        if (c >= 'a' && c <= 'z') {
            // Vérifier si c'est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }

        i++;
    }

    // Affichage du résultat au format exact attendu
    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
