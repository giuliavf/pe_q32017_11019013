#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
    while (x%2 == 0) {
        x /= 2; 
    }
    if (x == 1) return 1;
    return 0; 
}

ulint f2(ulint x)
{
    while (x%2 == 0) {
        x = x >> 1; 
    }
    if (x == 1) return 1;
    return 0;  
}

int main(void)
{
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    
    tempo_init = clock();
    for (int i=0; i<BIGNUM; i++) {
        if (f1(i) == 1) printf("sim\n");
        else printf("nao\n");
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
    
    tempo_init = clock();
    for (int i=0; i<BIGNUM; i++) {
        if (f2(i) == 1) printf("sim\n");
        else printf("nao\n");
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n",tempo_gasto);
    
    return 0;
}
