#include <stdio.h>
#include <stdlib.h>

int tamanho(char * s)
{
    int n = 0;
  
    while(s[n]!='\0') n++;
  
    return n;  
}

char * inverte_string(char * s)
{
    int i = 0, size;
    char * invertida;
    invertida = malloc(sizeof(char)*(size));
    size = tamanho(s);
  
    for (i = 0;i < size;i++) {
        invertida[size-1-i] = s[i];        
    }
  
    return invertida;  
}

int main()
{
    char entrada [255];
    fgets(entrada, 255, stdin);
    
    char * invertida = inverte_string(entrada);
    
    printf("%s\n", invertida);  
    free(invertida);
    
    return 0;
}
