#include <stdio.h>

int nDigitos (int x){
    if (x < 10) return 1;
    return 1 + nDigitos (x / 10);
}

int palindromo (char *n,int ini, int fim){
    if (fim-ini <= 1) return 1;
    if (n[ini] != n[fim-1]) return 0;
    return palindromo (n,ini+1,fim-1);
}

int main (){
    int input, tam;
    char inchar;
    int pal;

    scanf("%d", &input);
    inchar = input;
    tam = nDigitos (input);

    pal = palindromo (inchar,0,tam);

    if (pal == 1){
        printf("sim"); //
    }else{
        printf("nao");
    }
    return 0;
}
