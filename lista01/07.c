#include <stdio.h>

main(){
    int x,y,i,resp = 1;
    scanf("%d",&x);
    scanf("%d",&y);

    for(i = 0;i < y;i++){
        resp *= x;
    }

    printf("%d",resp);
}
