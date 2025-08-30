#include<stdio.h>
int main()
{
    float h;
    scanf("%f",&h);
    if(h<150)
      printf("The person is Dwarf.");
    else if(h>=150 && h<165)
        printf("The person is of average height.");
    else if(h>=165 && h<=195)
         printf("Taller");
    else
        printf("The person is of abnormal height.");
    
}
