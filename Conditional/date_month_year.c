#include<stdio.h>
int main()
{
    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);
    if(d==1)
      printf("1st ");
    else if(d%10==2)
      printf("%dnd ",d);
    else if(d==3)
      printf("3rd ");
    else
      printf("%dth ",d);
    switch(m)
    {
        case 1:
          printf("January, %d",y);
          break;
        case 2:
          printf("Feburary, %d",y);
          break;
            case 3:
          printf("March, %d",y);
          break;
            case 4:
          printf("April, %d",y);
          break;
            case 5:
          printf("May, %d",y);
          break;
            case 6:
          printf("June, %d",y);
          break;
            case 7:
          printf("July, %d",y);
          break;
            case 8:
          printf("August, %d",y);
          break;
            case 9:
          printf("September, %d",y);
          break;
            case 10:
          printf("October, %d",y);
          break;  
          case 11:
          printf("November, %d",y);
          break;  
          case 12:
          printf("December, %d",y);
          break;
        default:
          break;
    }
}
