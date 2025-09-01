#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h,m,s,t;
    scanf("%d %d %d %d",&h,&m,&s,&t);
    int offset=abs(s)+abs(t);
    if(offset+h<24)
    printf("%02d:%02d",offset+h,m);
    else
     printf("%02d:%02d",h-offset,m);
}
