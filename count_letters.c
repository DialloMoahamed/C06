#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int voyelles = 0;
    int consonnes = 0;
    char c;

    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        c = str[i];

        if (c == '\n') {
            str[i] = '\0';
            break;
        }
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c >= 'a' && c <= 'z') {
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
