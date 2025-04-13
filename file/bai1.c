#include <stdio.h>
#include <stdlib.h>
void nhap_ma_tran(int hang, int cot,int MT[hang][cot])
{
    for(int i = 0;  i < hang; i++)
    {
        for(int j = 0; j < cot ; j++)
        {
            scanf("%d", &MT[i][j]);
        }
    }
    printf("\n");
}
void cong_ma_tran(int hang, int cot ,int A[hang][cot],int B[hang][cot],int C[hang][cot])
{
    for(int i = 0 ; i < hang ; i++)
    {
        for(int j = 0; j < cot ; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void in_ma_tran(int hang, int cot, int MT[hang][cot],FILE *file)
{
    for(int i = 0; i < hang ; i++)
    {
        for(int j = 0; j < cot ; j++)
        {
            fprintf(file ,"%d ", MT[i][j]);
        }
        fprintf(file ,"\n");
    }
    fprintf(file ,"\n");
}
int main()
{
    int n, m;
    printf("Nhập kích thước ma trận : ");
    scanf("%d %d", &n, &m);
    int A[n][m];
    int B[n][m];
    int C[n][m];
    printf("Nhập các phần tử cho mảng A:\n");
    nhap_ma_tran(n, m, A);
    printf("Nhập các phần tử cho mảng B:\n");
    nhap_ma_tran(n, m, B);
    cong_ma_tran(n ,m ,A ,B, C);
    FILE *file;
    file = fopen("CONG_MT.txt", "w");
    if(file == NULL)
    {
        printf("lỗi tạo hoặc mở file");
        return 1;
    }
    fprintf(file, "Ma trận A :\n");
    in_ma_tran(n, m, A, file);
    fprintf(file, "Ma trận B :\n");
    in_ma_tran(n, m, B, file);
    fprintf(file, "Ma trận C :\n");
    in_ma_tran(n, m, C, file);
    fclose(file);
    printf("Đã ghi ma trận vào file!!");
    return 0;
}