#include<stdio.h>
#include<math.h>
int main()
{
    int start,end;
    scanf("%d %d",&start,&end);
    for(int k=start;k<=end;k++)
    {
    long int sum=0,prod=1;
    for(int i=1;i<=sqrt(k);i++)
    {
        if(k%i==0)
         { sum=sum+i;
           prod=prod*i;
         }
    }
    for(int i=sqrt(k);i>0;i--)
    {
        if(k%i==0 && k!=i*i)
         { sum=sum+(k/i);
           prod=prod*(k/i);
    }
    }
    if(prod%sum==0 && k!=1)
       printf("%d ",k);
    }
}
