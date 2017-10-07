#include <stdio.h>

main(){
    int i,j,k,v1 = 0,v2 = 1;
    scanf("%d",&i);

    for(j = 0;j <= i;j++){
        if(j == 0) {
            printf("%d",v1);
        }else if (j == 1){
            printf("%d",v2);
        } else{
            k = v1 + v2;
            v1 = v2;
            v2 = k;
            printf("%d",k);
        }
        if(j != i) printf(", ");
    }
}
