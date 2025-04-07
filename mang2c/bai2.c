#include <stdio.h>
int nhap(int a[3][3])
{
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0 ; j < 3; j++)
        {
           scanf("%d", &a[i][j]);
        }
    }
}
void TongMaTran(int a[3][3],int b[3][3],int c[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
int main()
{
    int a[3][3], b[3][3], c[3][3];
    printf("nhập các phần tử cho ma trận A : \n");
    nhap(a);
    printf("nhập các phần tử cho ma trận B : \n");
    nhap(b);
    printf("Ma trận là tổng của hai ma trận A và B là :\n");
    TongMaTran(a, b, c);
    for(int i = 0 ; i < 9; i++)
    {
        if(i % 3==0) printf("\n");
        printf("%d ", *((int*)c + i));
    }
    printf("\n");
    return 0;
}