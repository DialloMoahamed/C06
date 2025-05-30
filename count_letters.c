#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char chaine[150];
    int Voyelles=0,Consonnes=0; 

    fgets(chaine, sizeof(chaine), stdin);

    size_t len = strlen(chaine);
    if (len > 0 && chaine[len - 1] == '\n') {
        chaine[len - 1] = '\0';
    }

    for (int i = 0; chaine[i] != '\0'; i++)
    {
        char chaineEnVoyelle = tolower(chaine[i]);
        if (chaineEnVoyelle == 'a' || chaineEnVoyelle == 'e' || chaineEnVoyelle == 'i' || chaineEnVoyelle == 'o' || chaineEnVoyelle == 'u' || chaineEnVoyelle == 'y')
        {
            Voyelles++;
        }
        else if (chaineEnVoyelle >= 'a' && chaineEnVoyelle <= 'z')
        {
            Consonnes++;
        }
        
    }

    printf("Voyelles : %d\n",Voyelles);
    printf("Consonnes : %d\n", Consonnes);
    
    return 0;
}
