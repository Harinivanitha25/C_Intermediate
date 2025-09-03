#include<stdio.h>
int main()
{
    int a,b,nth,count=1;
    scanf("%d%d%d",&a,&b,&nth);
    for(int i=1;i<b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            if(count==nth)
            {
                printf("%d",i);
                break;
            }
            count++;
        }
    }
}
