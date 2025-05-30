#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[100];
    fgets(str, sizeof(str), stdin);
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
        i++;
        
    }
    str[j] = '\0';

    printf("%s\n",str);
    
}
