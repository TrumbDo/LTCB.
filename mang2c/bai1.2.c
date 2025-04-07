#include <stdio.h>
void nhap(int a[][3])
{
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", (int*)a + i);
    }
    printf("\n");
}
void in(int a[][3])
{
    for(int i = 0; i < 9; i++)
    {
        if(i % 3 == 0 ) printf("\n");
        printf("%d ", *((int*)a + i));
    }
    printf("\n");
}
int main()
{
    int a[3][3];
    int b[3][3];
    printf("Nhập ma trận A :\n");
    nhap(a);
    printf("Nhập ma trận B :\n");
    nhap(b);
    printf("Ma trận A :\n");
    in(a);
    printf("Ma trận B :\n");
    in(b);
    return 0;
}