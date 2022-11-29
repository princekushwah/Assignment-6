#include<stdio.h>
int main()
{
  int i,n,count;
    printf("Enter a number count a digit : ");
    scanf("%d",&n);
     for(i=n;n!=0;count++)
       n=n/10;
       printf("%d",count);
  return 0;


}
