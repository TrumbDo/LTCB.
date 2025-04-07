#include <stdio.h>
#include <math.h>
void nhap(int n, int a[])
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    } 
}
int tinh(int n, int a[], int x)
{
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        result += a[i]*pow(x,n - i - 1);
    }
    return result;
}
void in(int n, int a[])
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int n, m, x, P, Q;
    printf("nhập sô lượng hệ số của đa thức P : ");
    scanf("%d", &n);
    printf("nhập sô lượng hệ số của đa thức Q : ");
    scanf("%d", &m);
    printf("nhập hệ số của đa thức P : \n");
    int a[n], b[m];
    nhap(n, a);
    printf("nhập số lượng hệ số của đa thức Q : \n");
    nhap(m, b);
    printf("nhập x : ");
    scanf("%d", &x);
    printf("hệ số của đa thức P : ");
    in(n, a);
    printf("hệ số của đa thức Q : ");
    in(m, b);
    inT(m ,n ,a, b);
    printf("giá trị của đa thức P và Q với x = %d là :\n", x);
    P = tinh(n, a, x);
    Q = tinh(m, b, x);
    printf("P = %d\n");
    printf("Q = %d\n", Q);
    printf("giá trị của đa thức tổng T = P + Q là : T = %d\n", P + Q);
    return 0;
}