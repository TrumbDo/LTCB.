#include <stdio.h>
void Nhap(int hang , int cot, int a[hang][cot])
{
    for(int i = 0 ; i < hang; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
   printf("\n");
}
void TichMaTran(int n ,int m, int p, int A[n][m], int B[m][p],int C[n][p])
{
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < p; k++)
        {
            C[i][k] = 0;
            for(int j = 0 ; j < m; j++)
            {
                C[i][k] += A[i][j]*B[j][k];
            }
        }
    }
}
int main()
{
   int n, m, p;
   printf("Nhập kích thước ma trận A kích thước n x m : \n");
   scanf("%d %d", &n, &m);
   printf("Nhập kích thước ma trận B kích thước m x p : \n");
   scanf("%d %d", &m, &p);
   int A[n][m], B[m][p], C[n][p];
   printf("nhập ma trân A :\n");
   Nhap(n,m,A);
   printf("nhập ma trân B :\n");
   Nhap(m,p,B);
   TichMaTran(n,m,p,A,B,C);
   printf("Ma trận C là tích của hai ma trận A và B là :\n");
   for(int i = 0; i < n; i++)
   {
        for(int j = 0; j < p; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
   }
   return 0;
}