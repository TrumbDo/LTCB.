#include <stdio.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a, b;
    printf("Nhập hai số a và b :");
    scanf("%d %d", &a, &b);
    printf("Trước khi hoán đổi\na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi hoán đổi\na = %d\nb = %d\n", a, b);
    return 0;
}