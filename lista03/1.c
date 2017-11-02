#include <stdio.h>
#include <stdlib.h>

int conta_vogais(char * s)
{
    int n = 0, contador = 0;
  
    while (s[n]!='\0') {
        if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u') {
            contador++;
        }
        n++;
    }
  
    return contador;  
}

int main()
{
    char entrada [255];
    fgets(entrada, 255, stdin);
    
    printf("%d\n", conta_vogais(entrada));  
}
