#include <stdio.h>
int so_hoan_hao(int n)
{
   int sum = 0;
   for(int i = 1; i <= n; i++)
   {
      if(n % i == 0)
      {
         sum += i;
      }
   }
   if(sum == n*2)
      return 1;
   else 
      return 0;
}
int main()
{
   int n;
   printf("nhập số : ");
   do
   {
      scanf("%d", &n);
      if(n<0)
         printf("giá trị không hợp lệ vui lòng nhập lại\n");
   }while(n < 0);
   if(so_hoan_hao(n))
      printf("%d là số hoàn hảo\n", n);
   else 
      printf("%d không là số hoàn hảo \n", n);
   return 0;
}