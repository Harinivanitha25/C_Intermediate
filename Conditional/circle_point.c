#include<stdio.h>
#include<math.h>
int main()
{
    int r,x,y;
    scanf("%d%d%d",&r,&x,&y);
    if(sqrt((x*x)+(y*y))==r)
      printf("On the Circle");
    else if(sqrt((x*x)+(y*y))<r)
      printf("Inside"); 
     else if(sqrt((x*x)+(y*y))>r)
      printf("Outside");
}
