#include<stdio.h>
int main()
{
    int i,n,ans=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n==0||n==i)
        ans=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
         {
         ans=1;
        break;
        }
    }

        if(ans==0)
            printf("prime number : ");
        else
            printf("Not prime number :");


    return 0;

}
