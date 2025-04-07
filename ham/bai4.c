#include <stdio.h>
void NhapMaTran(int arr[3][3]){
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
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
void TichMaTran(int a[3][3],int b[3][3],int c[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            c[i][j]=0;
            for(int k = 0 ; k < 3; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
}
void InMaTran(int c[3][3])
{
    for(int i = 0;  i< 3 ; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("nhập giá trị cho ma trận a kích thước 3x3 : \n");
    NhapMaTran(a);
    printf("nhập giá trị cho ma trận b kích thước 3x3 : \n");
    NhapMaTran(b);
    TongMaTran(a,b,c);
    printf("Tổng hai ma trận :\n");
    InMaTran(c);
    TichMaTran(a,b,c);
    printf("Tích hai ma trận :\n");
    InMaTran(c);
    return 0;
}