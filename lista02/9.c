#include <stdio.h>

int potencia(int x, int y)
{
    if (y == 0) return 1;
    if (y == 1) return x;

    return x * potencia(x,y-1);
}

int main()
{
    int x,y,pot;
    scanf("%d %d",&x,&y);

    pot = potencia(x,y);
    printf("%d\n",pot);
    return 0;
}
