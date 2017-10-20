#include <stdio.h>

int fatorial (int x){
    int i;
    for(i=x-1;i>0;i--){
        x = x * i;
    }
}

int coefbin (int n, int k){
    int p1 = fatorial (n);
    int p2 = fatorial (k);
    int p3 = fatorial (n-k);

    int resp = p1/(p2*p3);
    return resp;
}

main(){
    int n,k;

    scanf("%d %d",&n,&k);

    int t = coefbin (n,k);

    printf("%d\n",t);       
}
