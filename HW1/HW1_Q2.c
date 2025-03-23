#include <stdio.h>

int main( void )
{
   int integer1; 
   int integer2; 
   int sum;      

   printf( "Enter first integer \n" ); 
   scanf( "%d", &integer1 );        

   printf( "Enter second integer\n" ); 
   scanf( "%d", &integer2 );           
   
   sum = integer1 + integer2; 

   printf( "Sum is %d \n", sum );
   system ("pause");
   
   return 0;

}
/* Sample run is as follows:
   
   Enter first integer
   4
   Enter second integer
   5
   Sum is 9
   Press any key to continue . . .
*/
