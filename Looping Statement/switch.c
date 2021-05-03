#include <stdio.h>
 
int main () {

   /* local variable definition */
//    char grade = 'B';
    int a;
    printf("Enter your choice:");
    scanf("%d",&a);

   switch(a) {
      case 1 :
         printf("Excellent!\n" );
         break;
      case 2 :
         printf("Well done\n" );
         break;
      case 3 :
         printf("You passed\n" );
         break;
      case 4 :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %d\n", a );
 
   return 0;
}