#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char chaine[150];
    int Voyelles=0,Consonnes=0; 

    fgets(chaine, sizeof(chaine), stdin);

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

    printf("Voyelles : %d\nConsonnes : %d\n",Voyelles, Consonnes);
    
    return 0;
}
