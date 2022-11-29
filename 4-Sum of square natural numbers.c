#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number for sum : ");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         sum=i*i+sum;
         printf("%d sqaure is %d\n",i,i*i);

     }
     printf("Sum of n natural numbers %d",sum);
    return 0;
}
