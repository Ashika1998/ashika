#include<stdio.h>


int main() 
{
  
 long int a;

   scanf("%ld",&a);

   if((a%2)==0)
  
 {
  
     printf("Even");

   }

   else if(a<0)
 
  {
       
      printf("invalid");
 
  }

   else

   {

       printf("Odd");

   }
 
  return 0;
}