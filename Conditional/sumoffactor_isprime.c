#include<stdio.h>
int is_prime(int n)
{  
   for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {  return 0;
        }
    } 
    return 1;
}
int main()
{   int start,end;
    scanf("%d%d",&start,&end);
    for(int n=start;n<=end;n++)
    {
    int sum=0;
    if(!is_prime(n))
    {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
          sum=sum+i;
    }
    if(is_prime(sum))
      printf("%d ",n);
    }
    
}}
