#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct SinhVien SinhVien;
struct SinhVien
{
    char HoTen[30];
    int Tuoi;
    int diem;
    SinhVien *next;
};
SinhVien *makenode(char HoTen[30], int tuoi, int diem)
{
    SinhVien *SVmoi = (SinhVien*)malloc(sizeof(SinhVien));
    strcpy(SVmoi->HoTen,HoTen);
    SVmoi->Tuoi = tuoi;
    SVmoi->diem = diem;
    SVmoi->next = NULL;
    return SVmoi;
}
void Tao_danh_sach(SinhVien **head,char HoTen[30], int tuoi, int diem)
{
    SinhVien *SV = makenode(HoTen,tuoi,diem);
    SV->next = *head;
    *head = SV; 
}
void in_danh_sach(SinhVien *head)
{
    int i = 1;
    while( head != NULL)
    {
        printf(" %-2d %-15s %-5d %-5d \n", i, head ->HoTen , head -> Tuoi, head -> diem);
        head = head -> next;
        i++;
    }
}
void Them_sinh_vien(SinhVien **head,char HoTen[30], int tuoi, int diem)
{
    SinhVien *tmp = *head;
    SinhVien *Sv_moi = makenode(HoTen,tuoi,diem);
    if(*head == NULL)
    {
        *head = Sv_moi;
        return;
    }
    if(tmp != NULL)
    {
        tmp = tmp->next;
    }
    tmp ->next = Sv_moi;
    printf("Đã thêm sinh viên!");
}
void sua(SinhVien **head,char HoTen[30], int tuoi, int diem)
{
    SinhVien *tmp = *head;
    while (tmp != NULL)
    {
        if(strcmp(tmp->HoTen,HoTen)==0)
        {
            tmp->Tuoi = tuoi;
            tmp->diem = diem;
            printf("Đã sửa!!");
            return;
        }
        tmp=tmp->next;
    }
    printf("Không tìm thấy sinh vien!!\n");
}
void freelist(SinhVien **head)
{
    while (*head != NULL )
        {
            SinhVien *tmp = *head;
            *head = (*head) -> next;
            free(tmp);
        }
        *head = NULL;
}
int main()
{
    FILE *file;
    SinhVien *head = NULL;
    int n;
    printf("Nhập số lượng sinh viên : ");
    scanf("%d", &n);
    getchar();
    SinhVien Sv[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhập họ tên sinh viên thứ %d :", i + 1);
        fgets(Sv[i].HoTen,sizeof(Sv[i].HoTen),stdin);
        Sv[i].HoTen[strcspn(Sv[i].HoTen,"\n")] = '\0';
        printf("Nhập tuổi sinh viên %d :", i + 1);
        scanf("%d", &Sv[i].Tuoi);
        printf("Nhập điểm sinh viên %d :", i + 1);
        scanf("%d", &Sv[i].diem);
        getchar();
    }
    file = fopen("DSACH.bin", "wb");
    if(file == NULL)
    {
        printf("Lỗi tạo hoặc mở file!!");
        return 1;
    }
    fwrite(Sv,sizeof(Sv), n, file);
    fclose(file);
    printf("Dã ghi dữ liệu vào file DSACH.bin!!");
    file = fopen("DSACH.bin", "rb");
    if(file == NULL)
    {
        printf("Lỗi tạo hoặc mở file!!");
        return 1;
    }
    for (int i = n; i > 0; i--)
    {
        Tao_danh_sach(&head,Sv[i].HoTen,Sv[i].Tuoi,Sv[i].diem);
    }
    fclose(file);
    printf("----------------------------\n");
    printf("     %s\n", "DANH SÁCH SINH VIÊN");
    printf("%-2s %-15s %-5s %-5s\n", "STT", "HoTen", "Tuoi", "Diem");
    if(head == NULL)
    {
        printf("Danh sách rỗng");
    }
    else
    {
        in_danh_sach(head);
    }
    printf("----------------------------\n");
    int lc;
    scanf("%d", lc);
    while(1)
    {
       printf("1.Thêm Sinh Viên\n");
       printf("2.Sửa tuôỉ và điểm của sinh viên\n");
       printf("3.In danh sách\n");
       printf("4.thoát\n");
       printf("--------------------------------\n");
       printf("Nhập lựa chọn :\n");
       if(lc == 1)
       {
        char HoTen[30];
        int tuoi;
        int diem;
        printf("Nhập tên sinh viên muốn thêm :");
        fgets(HoTen,sizeof(HoTen),stdin);
        HoTen[strcspn(HoTen,"\n")] = '\0';
        printf("Nhập tuổi sinh viên muốn thêm :");
        scanf("%d", &tuoi);
        printf("Nhập điểm sinh viên muốn thêm :");
        scanf("%d", &diem);
        Them_sinh_vien(&head,HoTen,tuoi,diem);
       }
       if(lc = 2)
       {
        char HoTen[30];
        int tuoi;
        int diem;
        printf("Nhập họ tên sinh viên muốn sửa : ");
        fgets(HoTen,sizeof(HoTen),stdin);
        HoTen[strcspn(HoTen,"\n")] = '\0';
        printf("Nhập tuổi muốn sửa :");
        scanf("%d", &tuoi);
        printf("Nhập điểm muón sửa :");
        scanf("%d", &diem);
        sua(&head,HoTen,tuoi,diem);
       }
       if(lc == 3)
       {
        in_danh_sach(head);
       }
       if(lc == 4)
       {
        break;
       }
    }
    freelist(&head);
    return 0;
}