#include<stdio.h>
int main()
{
    int i,n,ans;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
        ans=n%i;
        if(ans==0)
            printf("Not a prime number : ");
        else
            printf("This is prime number :");


    return 0;

}
