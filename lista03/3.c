#include <stdio.h>
#include <stdlib.h>

void le(int * v)
{
    int i;
    
    for (i = 0;i < 5;i++) {
        scanf("%d",&v[i]);
    }
}

void imprime(int * v)
{
    int i;
    for (i = 0;i < 5; i++) {
        printf ("%d ",v[i]);        
    }
    printf ("\n");
}

int * soma(int * v1, int * v2)
{
    int * v3 = malloc(sizeof(int)*5);
    int i;
    
    for (i = 0;i < 5;i++) {
        v3[i] = v1[i] + v2[i];
    }
    
    return v3;   
}

int main()
{
    int v1[5];
    int v2[5];
    
    le(v1);
    le(v2);
    
    int * v3 = soma(v1,v2);
    
    imprime(v3);
    free(v3);
        
    return 0;
}
