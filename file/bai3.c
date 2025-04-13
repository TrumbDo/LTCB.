#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char TenHang[20];
    int DonGia;
    int SoLuong;
    int ThanhTien;
} Hang;
void swap(Hang *a, Hang *b)
{
    Hang tmp = *a;
    *a = *b;
    *b = tmp;
}
void sapxep(int n,Hang mathang[n])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(strcmp(mathang[j].TenHang,mathang[j+1].TenHang)<0)
            {
                swap(&mathang[j],&mathang[j+1]);
            }
        }
    }
}
int main()
{
    FILE *file;
    int n, tong = 0;
    printf("Nhập số lượng mặt hàng : ");
    scanf("%d", &n);
    Hang mathang[n];
    for(int i = 0; i < n; i++)
    {
        printf("Nhập tên hàng :");
        scanf("%s", mathang[i].TenHang);
        printf("Nhập đơn giá :");
        scanf("%d", &mathang[i].DonGia);
        printf("Nhập số lượng :");
        scanf("%d", &mathang[i].SoLuong);
        mathang[i].ThanhTien = mathang[i].DonGia*mathang[i].SoLuong;
    }
    file = fopen("SO_LIEU.bin", "wb");
    if(file == NULL)
    {
        printf("Lỗi tạo hoặc mở file!!");
        return 1;
    }
    fwrite(mathang, sizeof(Hang), n, file);
    fclose(file);
    file = fopen("SO_LIEU.bin", "rb");
    if(file == NULL)
    {
        printf("Lỗi tạo hoặc mở file!!");
        return 1;
    }
    fread(mathang, sizeof(Hang), n, file);
    sapxep(n,mathang);
    printf("\n-----------------------------------\n");
    printf("%25s\n", "SO LIEU BAN HANG");
    printf("%-3s %-20s %-10s %-10s %-10s\n" , "STT", "TenHang", "DonGia", "SoLuong", "ThanhTien");
    for (int i = 0; i < n; i++)
    {
        printf("%-3d %-20s %-10d %-10d %-10d\n", i+1, mathang[i].TenHang, mathang[i].DonGia, mathang[i].SoLuong, mathang[i].ThanhTien);
        tong += mathang[i].ThanhTien;
    }
    printf("%49s  %d\n","Tong Tien" ,tong);
    fclose(file);
    return 0;
}