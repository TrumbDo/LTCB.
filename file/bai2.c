#include <stdio.h>
#include <stdlib.h>
void  nhap_ma_tran(int hang, int cot, int MT[hang][cot],FILE *file)
{
    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            fscanf(file ,"%d", &MT[i][j]);
        }
        
    }
}
void tich_ma_tran(int n ,int m ,int p ,int A[n][m] ,int B[m][p] ,int C[n][p])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}
void in_ma_tran(int hang ,int cot ,int MT[hang][cot], FILE *file)
{
    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            fprintf(file ,"%d ", MT[i][j]);
        }
        fprintf(file ,"\n");
    }
}
int main()
{
    FILE *file;
    file = fopen("TICH_MT.txt", "a+");
    if(file == NULL)
    {
        printf("lỗi tạo hoặc mở file");
        return 1;
    }
    int n, m ,p;
    fscanf(file,"%d %d %d",&n, &m, &p);
    int A[n][m], B[m][p], C[n][p];
    nhap_ma_tran(n,m,A,file);
    nhap_ma_tran(m,p,B,file);
    tich_ma_tran(n,m,p,A,B,C);
    fprintf(file ,"\nKet qua:\n");
    in_ma_tran(n,p,C,file);
    fclose(file);
    return 0;
}