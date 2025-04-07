#include <stdio.h>
int main() {
    int diem;
    printf("nhập điểm :\n");
    scanf("%f", &diem);
    if(diem < 5)
        printf("yếu");
    else if(diem >= 5 && diem <7)
        printf("trung bình");
    else if(diem >= 7 && diem < 8)
        printf("khá");
    else if(diem >= 8 && diem <9)
        printf("giỏi");
    else 
        printf("xuất xắc");
    return 0;
}