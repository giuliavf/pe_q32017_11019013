#include <stdio.h>

int decToBin (int n){
    if (n < 2) return n;
    return (10 * decToBin (n / 2)) + n % 2;
}

int binToDec (int n){
    if (!(n / 10)) return (n);
    return (n % 10 + binToDec (n / 10) * 2); 
    
}

int main(){
    int n,op,resp=0;

    scanf("%d %d",&n,&op);

    if(op==1){  
        resp = decToBin (n);     
    }else if(op==2){
        resp = binToDec (n);           
    }else{
        printf("Valor invalido\n");
    }

    printf("%d\n",resp);
    return 0;
}
