#include<stdio.h>
int main()
{
   int marks;
   char grade[10]={'A','B','C','D','E','F'};
   printf("Enter Marks: ");
   scanf("%d", &marks);
   if(marks>100)
   printf("Wrong Input");
   else
   {
   switch(marks/10)
   {

   case 10:
     printf("Grade: %c",grade[0]);
     break;

   case 9:
     printf("Grade: %c",grade[0]);
     break;

   case 8:
     printf("Grade: %c",grade[1]);
     break;

   case 7:
     printf("Grade: %c",grade[2]);
     break;

   case 6:
     printf("Grade: %c",grade[3]);
     break;

   case 5:
     printf("Grade: %c",grade[4]);
     break;

   default:
     printf("Grade: %c",grade[5]);
     break;
   }
   }
   return 0;
}