#include <stdio.h>
int main()
{
    float GDP, tangtruong, condition;
    int i = 14;
    printf("nhập GDP 2014 :");
    scanf("%f", &GDP);
    printf("nhập tốc độ tăng trưởng kinh tế bình quân :");
    scanf("%f", &tangtruong);
    condition = GDP*2;
    printf("năm     GDP\n");
    while(GDP < condition)
    {
        printf("20%d    %.2f\n", i, GDP); 
        GDP *= tangtruong;
        i++;   
    }
    return 0;
}