#include <stdio.h>

main(){
    int x,i;
    scanf("%d",&x);

    for(i = x - 1;i > 0;i--){
        x *= i;
    }

    printf("%d",x);
}
