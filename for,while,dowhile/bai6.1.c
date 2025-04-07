#include <stdio.h>
int ucln(int a, int b)
{
   while(b!=0)
   {
    int t = b;
    b = a % b;
    a = t;
   }
   return a;
}
int bcnn(int a,int b)
{
    return (a*b)/(ucln(a,b));
}
int main()
{
    int a, b;
    printf("nhập hai số nguyên bất kì :\n");
    scanf("%d %d", &a, &b);
    printf("bội chung nhỏ nhất của %d và %d là %d", a, b, bcnn(a,b));
    return 0;
}