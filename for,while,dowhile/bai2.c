#include <stdio.h>
#include <math.h>
int nt(int n) 
{
   if(n <= 1) 
    return 0;
   for(int i = 2;i <= sqrt(n) ; i++)
   { 
    if(n % i == 0)
    {
        return 0;
    }
   }
   return 1;
}
int main()
{
    int n;
    printf("nhập số bất kì :\n");
    scanf("%d", &n);
    if(nt(n))
       printf("%d là số nguyên tố\n", n);
    else 
       printf("%d không là số nguyên tố\n", n);
    return 0;
}