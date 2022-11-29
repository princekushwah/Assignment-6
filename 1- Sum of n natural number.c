#include<stdio.h>
int main()
{
int i,n,sum=0;
 printf("Enter a number : ");
 scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   sum=i+sum;
    printf("%d\n",i);
  }
  printf("Sum of n natural number = %d",sum);

  return 0;
}
