#include <stdio.h>
#include <stdlib.h>

int preenche_zeros(int * v, int n)
{
    int i;
    for (i = 0;i < n;i++) {
        v[i] = 0;
    }
}

void imprime(int * valores, int * contador)
{
    int i = 0;
    while (valores[i] != 0) {
        if (contador[i] > 1) {
            printf("%d-%d ",valores[i],contador[i]);
        }       
        i++;
    }
    printf ("\n");
}

void le(int n,int * v)
{
    int i;
    
    for (i = 0;i < n;i++) {
        scanf("%d",&v[i]);
    }
}

int verifica_valor(int * v, int n, int valor)
{
    int i;
    for (i = 0; i < n; i++) {
        if (v[i] == valor) return i + 1;
    }
    return 0;
}

int nova_pos(int * v, int n)
{
    int i;
    for (i = 0;i < n;i++) {
        if (v[i]==0) return i;
    }
}

void * conta_repeticoes(int n,int * v)
{
    int i,j;
    
    le(n,v);
    
    int * valores = malloc(n * sizeof(int));
    int * contador = malloc(n * sizeof(int));
        
    preenche_zeros(valores,n);
    preenche_zeros(contador,n);
    
    for (i = 0;i < n;i++) {
        if (verifica_valor(valores,n,v[i])) { 
            int posicao = verifica_valor(valores,n,v[i]) - 1;
            contador[posicao]++;
        } else { 
            int posicao = nova_pos(valores,n);
            valores[posicao] = v[i]; 
            contador[posicao]++;
        }
    }
    
    imprime(valores,contador);
    
    free(valores);
    free(contador);
}

int main() 
{
    int n;
    
    scanf("%d",&n);
    int * v = malloc(n * sizeof(int));           
    
    conta_repeticoes(n,v);
    
    free(v);
        
    return 0;
}
