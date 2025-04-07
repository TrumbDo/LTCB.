#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SinhVien
{
    char HoTen[30];
    int Tuoi;
    int Diem;
    struct SinhVien *next;
};
typedef struct SinhVien SinhVien;
SinhVien *makenode(char HoTen[], int Tuoi, int Diem)
{
    SinhVien *SinhVienMoi = (SinhVien*)malloc(sizeof(SinhVien));
    if(SinhVienMoi == NULL)
    {
        printf("Lỗi cấp phát bộ nhớ");
        return NULL;
    }
    strncpy(SinhVienMoi->HoTen, HoTen, sizeof(SinhVienMoi->HoTen) - 1);
    SinhVienMoi->HoTen[sizeof(SinhVienMoi->HoTen) - 1] = '\0';
    SinhVienMoi -> Tuoi = Tuoi;
    SinhVienMoi -> Diem = Diem;
    SinhVienMoi -> next = NULL;
    return SinhVienMoi;
}
void Duyet(SinhVien *head)
{
    int i = 1;
    while( head != NULL)
    {
        printf(" %-2d %-15s %-5d %-5d \n", i, head -> HoTen, head -> Tuoi, head -> Diem);
        head = head -> next;
        i++;
    }
}
void TaoDanhSach(SinhVien **head,char HoTen[], int Tuoi, int Diem)
{
    SinhVien *SinhVienMoi = makenode(HoTen,Tuoi,Diem);
    SinhVienMoi -> next = *head;
    *head = SinhVienMoi;
}
void XoaSinhVien(SinhVien **head,char HoTen[])
{
    SinhVien *tmp = *head; 
    SinhVien *prev = NULL;
    while( tmp != NULL )
    {
        if(strcmp(tmp->HoTen,HoTen) == 0)
        {
            if(prev == NULL)
            {
                *head = tmp ->next;
            }else{
                prev -> next = tmp ->next;
            }
            printf("-----------------\n");
            printf("Đã xóa sinh viên!\n");
            printf("-----------------\n");
            free(tmp);
            return;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    printf("--------------------------------\n");
    printf("Không tìm thấy sinh viên cần xóa\n");
    printf("--------------------------------\n");
}
void indanhsach(SinhVien *head)
{
    printf("----------------------------\n");
    printf("     %s\n", "DANH SÁCH SINH VIÊN");
    printf("%-2s %-15s %-5s %-5s\n", "STT", "HoTen", "Tuoi", "Diem");
    if(head == NULL)
    {
        printf("Danh sách rỗng");
    }
    else
    {
        Duyet(head);
    }
    printf("----------------------------\n");
}
void ThemSinhVien(SinhVien **head,char HoTen[], int Tuoi, int Diem)
{
    SinhVien *tmp = *head;
    SinhVien *ThemSVmoi = makenode(HoTen,Tuoi,Diem);
    if(*head == NULL)
    {
        *head = ThemSVmoi;
        return;
    }
    while( tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = ThemSVmoi;
}
void freelist(SinhVien **head)
{
    while( *head != NULL )
    {
        SinhVien *tmp = *head;
        *head = (*head) -> next;
        free(tmp);
    }
    *head = NULL;
}
int main()
{
    int n;
    printf("Nhập số lượng sinh viên :");
    scanf("%d", &n);
    SinhVien *head = NULL;
    SinhVien SV[n];
    getchar();
    for(int i = 0; i < n; i++)
    {
        printf("Nhập họ tên của sinh viên thứ %d :", i+1);
        fgets(SV[i].HoTen,sizeof(SV[i].HoTen),stdin);
        SV[i].HoTen[strcspn(SV[i].HoTen,"\n")] = 0;
        printf("Nhập tuổi của sinh viên thứ %d :", i+1);
        scanf("%d", &SV[i].Tuoi);
        printf("Nhập điểm của sinh viên thứ %d :", i+1);
        scanf("%d", &SV[i].Diem);
        getchar();
    }
    for(int i = n-1; i >= 0; i--)
    {
        TaoDanhSach(&head,SV[i].HoTen,SV[i].Tuoi,SV[i].Diem);
    }
    indanhsach(head);
    while(1)
    {
        int lc;
        int i = n;
        printf("1.Thêm sinh viên\n");
        printf("2.Xóa sinh viên\n");
        printf("3.In danh sách\n");
        printf("4.Thoát\n");
        printf("Nhập các lựa chọn : ");
        scanf("%d", &lc);
        getchar();
        if(lc == 1)
        {
            SinhVien SVmoi;
            printf("Nhập họ tên sinh viên muốn thêm :");
            fgets(SVmoi.HoTen,sizeof(SVmoi.HoTen),stdin);
            SVmoi.HoTen[strcspn(SVmoi.HoTen,"\n")] = 0;
            printf("Nhập tuổi của sinh viên muốn thêm :");
            scanf("%d", &SVmoi.Tuoi);
            printf("Nhập điểm của sinh viên muốn thêm :");
            scanf("%d", &SVmoi.Diem);
            ThemSinhVien(&head,SVmoi.HoTen,SVmoi.Tuoi,SVmoi.Diem);
            getchar();
        }
        if(lc == 2)
        {
            char HoTen[30];
            printf("Nhập họ tên của sinh viên muốn xóa :");
            fgets(HoTen,sizeof(HoTen),stdin);
            HoTen[strcspn(HoTen, "\n")] = 0;
            XoaSinhVien(&head,HoTen);
        }
        if(lc == 3)
        {
            indanhsach(head);
        }
        if(lc == 4)
        {
            break;
        }
    }
    freelist(&head);
    return 0;
}