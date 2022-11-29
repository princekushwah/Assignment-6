#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a nubmer for cube : ");
    scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          sum=i*i*i+sum;
          printf("%d is cube %d\n",i,i*i*i);
     }
    printf("Sum of cube N natural numbers = %d",sum);
    return 0;
}
