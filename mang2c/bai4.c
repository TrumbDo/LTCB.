#include <stdio.h>
int main()
{
    int n , num = 1;
    printf("nhập kích thức ma trận n x n : ");
    scanf("%d", &n);
    int A[n][n];
    int trai = 0, phai = n - 1, tren = 0, duoi = n - 1;
    while( num <= n*n )
    {
        for(int i = trai; i <= phai; i++)
        {
            A[tren][i] = num;
            num++;
        }
        tren ++;
        for(int i = tren; i <= duoi; i++)
        {
            A[i][phai] = num;
            num++;
        }
        phai--;
        for(int i = phai; i >= trai; i--)
        {
            A[duoi][i] = num;
            num++;
        }
        duoi--;
        for(int i = duoi; i >= tren;i--)
        {
            A[i][trai]=num;
            num++;
        }
        trai++;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}