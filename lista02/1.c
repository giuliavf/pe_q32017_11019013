#include <stdio.h>

int parImpar(int n){
    if (n%2 == 0) return 0;
    return 1;
}

main(){
    int x;
    scanf("%d",&x);

    int y = parImpar(x);
    printf("%d\n",y);    
}
