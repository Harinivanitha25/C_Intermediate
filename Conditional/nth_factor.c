#include<stdio.h>
int main()
{
    int n,lar,count=1;
    scanf("%d %d",&n,&lar);
    for(int i=n;i>0;i--)
    {
        if(n%i==0)
        {
            if(count!=lar)
              count++;
            else
              {
                  printf("%d",i);
                  break;
              }
        }
    }
    
}
