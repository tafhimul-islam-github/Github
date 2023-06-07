#include<stdio.h>
int tafhim(int n1)
{
    int i,s=0;
    for(i=1;i<=n1;i++)
    {
        s=s+i;
    } return s;
}
int main()
{
    int n,sum;
    printf("Enter the nth number: ");
    scanf("%d",&n);
    sum=tafhim(n);
    printf("The total value is %d",sum);
    return 0;
}
