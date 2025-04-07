#include <stdio.h>
int luy_thua(int x, int y)
{
    if(y == 0)
    {
        return 1;
    }
    return x*luy_thua(x,y-1);
}
int main()
{
    int x, y;
    printf("nhập x , y :\n");
    scanf("%d %d", &x, &y);
    printf("giá trị của %d^%d là : %d", x, y, luy_thua(x, y));
    return 0;
}