#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          sum = (2*i-1)+sum;
          printf("%d\n",i*2-1);

      }
    printf("Sum of n odd numbers = %d",sum);
    return 0;
}
