#include <stdio.h>
int main()
{
    int a[10], tong = 0, tong_duong = 0, tong_am = 0, tmp1 =0, tmp2=0;
    printf("nhập 10 số nguyên bất kì :\n");
    for(int i = 0 ; i < 10; i++)
    {
        scanf("%d", a + i);
    }
    for(int i = 0; i < 10; i++)
    {
       tong += *(a+i);
       if(*(a+i) > 0 )
       {
        tong_duong += *(a+i);
        tmp1++;
       }
       else 
       {
        tong_am += *(a+i);
        tmp2++;
       }
    }
    printf("Tổng các số trong mảng :%d\nn", tong);
    printf("Tổng các số nguyên dương trong mảng :%d\n", tong_duong);
    printf("Tổng các số nguyên âm trong mảng :%d\n", tong_am);
    printf("Trung bình cộng tắt cả các số trong mảng :%.2f\n", (1.0*tong)/10);
    printf("Trung bình cộng tắt các số nguyên dương trong mảng :%.2f\n", (tmp1 > 0) ? (1.0*tong_duong)/tmp1 : 0);
    printf("Trung bình cộng tắt các số nguyên âm trong mảng :%.2f\n", (tmp2>0) ? (1.0*tong_am)/tmp2 : 0);
    return 0;
}