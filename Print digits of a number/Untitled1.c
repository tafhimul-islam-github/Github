#include <stdio.h>
int main()
{
    int num,m,count=0;
    scanf("%d", &num);
    while(num != 0)
    {
        m= num%10;
        num = num/10;
        count++;

    }
    printf("%d\n", count);

    return 0;
}
