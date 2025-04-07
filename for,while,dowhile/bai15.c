#include <stdio.h>
#include <math.h>  // Thêm thư viện toán học để dùng pow()

int main()
{
    double tien;
    int thang;
    printf("Nhập số tiền gửi tiết kiệm: ");
    scanf("%lf", &tien);
    
    printf("Nhập số tháng: ");
    scanf("%d", &thang);
    tien = tien * pow(1.045, thang);
    printf("Số tiền sau %d tháng gửi tiết kiệm là: %.2lf\n", thang, tien);
    return 0;
}