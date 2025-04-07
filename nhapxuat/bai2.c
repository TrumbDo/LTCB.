#include <stdio.h>
int main (){
    int day, month, year;
    printf("nhap ngay :");
    scanf("%d", &day);
    printf("nhap thang :");
    scanf("%d", &month);
    printf("nhap nam :");
    scanf("%d", &year);
    printf("%d/%d/%d \n", day, month, year);
    return 0;
}