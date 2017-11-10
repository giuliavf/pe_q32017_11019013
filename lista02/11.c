#include <stdio.h>

int dec_bin(int n)
{
    if (n < 2) return n;
    return (10 * dec_bin(n / 2)) + n % 2;
}

int bin_dec(int n)
{
    if (!(n / 10)) return (n);
    return (n % 10 + bin_dec(n / 10) * 2); 
    
}

int main(){
    int n,op,resp = 0;

    scanf("%d %d",&n,&op);

    if(op==1){  
        resp = dec_bin(n);     
    }else if(op==2){
        resp = bin_dec(n);           
    }else{
        printf("Valor invalido\n");
    }

    printf("%d\n",resp);
    return 0;
}
