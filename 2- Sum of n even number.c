#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
         printf("%d\n",2*i);
         sum=2*i+sum;
   }
      printf("Sum of n even number = %d",sum);
     return 0;
}
