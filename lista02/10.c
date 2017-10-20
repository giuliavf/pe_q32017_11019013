#include <stdio.h>

int fibMem[1000];

int fib (int n){
    if (n==0) return 0;
    if (n<=2) return 1;
    /* altere a linha abaixo */

    int k1, k2;

    if(fibMem[n-1] == NULL){ 
        k1 = fibMem[n-1];
        k2 = fibMem[n-2];
    }else if (fibMem[n-2] != NULL){
        k1 = fib(n-1);
        k2 = fibMem[n-2];
        fibMem[n] =  k1 + k2;   
    }else{
        k1 = fib(n-1);
        k2 = fib(n-2);  
        fibMem[n] =  k1 + k2;  
    }   
        
    return k1 + k2;
}

int main (){
    int n;

    fibMem[0] = 0;
    fibMem[1] = 1;
    fibMem[2] = 1;

    scanf("%d", &n); 
    printf("%d\n", fib(n)); 
    return 0;
}
