#include<stdio.h>
int main()
{   int start,end,nth;
    scanf("%d%d%d",&start,&end,&nth);
    for(int j=start;j<=end;j++)
    {
    int count=0;
    for(int i=1;i<=j;i++)
    {
        if(j%i==0)
          count++;
    }
    if(count==nth)
     printf("%d ",j);
    }
}
