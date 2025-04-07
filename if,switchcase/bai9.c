#include <stdio.h>
int main() {
    int thang, nam, ngay;
    printf("nhập tháng :");
    scanf("%d", &thang);
    printf("nhập năm :");
    scanf("%d", &nam);
    switch(thang) 
    {
        case 1:
            ngay = 31;
            break;
        case 2:
            if( nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0 )
               ngay = 29;
            else 
               ngay = 28;
            break;
        case 3:
            ngay = 31;
            break;
        case 4:
            ngay = 30;
            break;
        case 5:
            ngay = 31;
            break;
        case 6:
            ngay  = 30;
            break;
        case 7:
            ngay = 31;
            break;
        case 8:
            ngay = 31;
            break;
        case 9:
            ngay = 30;
            break;
        case 10:
            ngay = 31;
            break;
        case 11:
            ngay = 30;
            break;
        case 12:
            ngay = 31;
            break;
        default :
            printf("dữ liệu không hợp lệ\n");
    }
    printf("thang %d nam %d co %d ngay", thang, nam, ngay);
    return 0;
}