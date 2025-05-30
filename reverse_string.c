#include <stdio.h>
#include <string.h>

int main()
{
    char s[100],temp;

    int i, length;

    scanf("%s", s);

    length = strlen(s);

    for ( i = 0; i < length / 2; i++)
    {
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
    printf("Chaîne inversée : %s", s);
     
    return 0;
}
