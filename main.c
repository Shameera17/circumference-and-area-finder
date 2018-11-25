#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   //program to calculate circumference and area
   double rad,circ,area;
   double pi=3.14159;
   char choice;

   printf("Enter the radius of the circle:\t");
   scanf("%f",&rad);

   while(choice == 'C' ||choice == 'A');
   printf("Do you want to find the Circumference or Area of the circle?\n");
   printf("\tcircumference press C  \n\tarea press A \n");
   scanf("%c",&choice);

   if (choice == 'C')
   {
       circ=2*pi*rad;
       printf("the circumference :\t%.2f",circ);
   }
   else if(choice == 'A')
   {
       area=pi*(rad*rad);
       printf("the area :\t%.2f",area);
   }

system("pause");
    return 0;
}
