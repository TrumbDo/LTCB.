#include <stdio.h>
#include <string.h>
typedef struct
{
    char Ten_hang[50];
    int Don_gia;
    int So_luong;
    int Thanh_tien;
}mat_hang;
void swap(mat_hang *a,mat_hang *b)
{
    mat_hang tmp = *a;
    *a = *b;
    *b = tmp;
}
void sapxep(mat_hang hang[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(strcmp(hang[j].Ten_hang,hang[j+1].Ten_hang)>0)
            {
                swap(&hang[j], &hang[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    printf("nhập sô lượng mặt hàng :");
    scanf("%d", &n);
    getchar();
    mat_hang hang[n];
    for(int i = 0;  i<n ; i++)
    {
        printf("nhập tên mặt hàng thứ %d :", i + 1);
        fgets(hang[i].Ten_hang, sizeof(hang[i].Ten_hang), stdin);
        hang[i].Ten_hang[strcspn(hang[i].Ten_hang, "\n")] = 0;
        printf("nhập đơn giá :");
        scanf("%d", &hang[i].Don_gia);
        printf("nhập số lượng :");
        scanf("%d", &hang[i].So_luong);
        getchar();
        hang[i].Thanh_tien = hang[i].Don_gia*hang[i].So_luong;
    }
    sapxep(hang, n);
    int tong = 0;
    printf("SO LIEU BAN HANG\n");
    printf("STT  Tên hàng  Đơn giá  Số lượng  Thành tiền\n");
    for(int i = 0; i < n; i++)
    {
        printf(" %-3d %-10s %-8d %-9d %d", i+1, hang[i].Ten_hang, hang[i].Don_gia,hang[i].So_luong,hang[i].Thanh_tien);
        printf("\n");
        tong += hang[i].Thanh_tien;
    }
    printf("%38s %d", "Tong", tong);
    return 0;
}