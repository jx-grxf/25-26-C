#include <stdio.h>


int main() {
   // TODO: Declaration of variables you may need!

   //Task 1
   int startvalueT1 = -15;
   int stopvalueT1 = 5;
   int task1 = startvalueT1;

   //Task 2

   int startvalueT2 = -15;
   int stopvalueT2 = 5;
   int task2 = startvalueT2;
   



   // Control variable(s) - Laufvariable
   // int i = 0;
   // int j = 0;
   // int k = 0; 

   printf("---- Task 1 ----\n");

   // TODO: Print all numbers from -15 to 5 in a row
   // OUTPUT DESIRED: 
   //   -15, -14, -13, [and so on...], 3, 4, 5
   // WRITE YOUR CODE HERE!

   while (task1 <= stopvalueT1) {

      if (task1 < stopvalueT1) {

         printf("%d, ", task1);
      } else {

         printf("%d", task1);
      }

      task1++;
   }

   printf("\n");

   printf("---- Task 2 ----\n");

   // TODO: Print odd numbers from -15 to 5 in a row
   // OUTPUT DESIRED: 
   //   -15, -13, -11, [and so on...], 3, 5
   // WRITE YOUR CODE HERE!

   while (task2 <= stopvalueT2) {

      
      if (task2 % 2 != 0) {

         if (task2 < stopvalueT2) {

         printf("%d, ", task2);
         } else {

         printf("%d", task2);
         }
      }

      task2++;

   }

   printf("\n");


   printf("---- Task 3 ----\n");

   // TODO: Read in two integer numbers lower_t3 and upper_t3
   //       Compute the sum of all numbers from lower_t3 to upper_t3
   //       and print the sum.      
   // OUTPUT DESIRED:
   //   Enter [a,b]: [-5,3]
   //   Result: -9 
   // HINT: Variable for storing the sum. 

   // WRITE YOUR CODE HERE!

   // Task 3 Variables

   int lower_t3 = 0;
   int upper_t3 = 0;

 
   printf("---- Task 4 ----\n");
   // TODO: Read in how many numbers of the seqeunce below 
   //       should be printed (variable name: limit_t4)
   //       1, -2, -3, 4, -5, -6, 7, -8, -9, 10, -11, -12, 13, ...
   // OUTPUT DESIRED:      
   // Enter sequence limit: 5
   //   Result: 1, -2, -3, 4, -5
   // HINT: if within the while-block...

   int limit_4 = 0;

   scanf("%d", &limit_4);

   limit_4 = 5;
   int lauf = 1; 

 


   




   printf("\n");

   printf("---- Task 5 ----\n");

   // TODO: Read in how many numbers of the seqeunce below 
   //       should be printed (variable name: limit_t5)
   //       1, 0, -2, 0, 3, 0, -4, 0, 5, 0, -6, 0, ...
   // OUTPUT DESIRED: 
   //   Enter sequence limit: 5
   //   Result: 1, 0, -2, 0, -3
   // HINT: if in while...

   int limitT5 = 0;
   int i = 1;
   int help = 1;

   scanf("%d", &limitT5);

   while (i <= limitT5) {

      if (i % 4 == 1) {
         printf("%d", help);
      }

      if (i % 4 == 0 || i % 4 == 2) {
         printf("0, ");
         help++;
      }
      if (i % 4 == 3) {
         printf("%d, ", -help);
      }

      if (i < limitT5) {
         printf(", ");

      }

      if (i % 5 )

      i++;
   }


   


   printf("\n");

   printf("---- Task 6 ----\n");

   // TODO: Read in how many numbers of the seqeunce below 
   //       should be printed (variable name: limit_6)
   //       10, -20, 30, -40, 50, -60, 70, ...
   // OUTPUT DESIRED: 
   //   Enter sequence limit: 4
   //   Result: 10, -20, 30, -40
   
   

   printf("\n");

   printf("---- Task 7 ----\n");

   // TODO: Print the the first 10 square numbers and compute their average.     
   // e.g. 1, 4, 9, 16, 25, 36, 49, 64, 81, 100
   // OUTPUT DESIRED: 
   //   Average: 37.80
   // WRITE YOUR CODE HERE!


   printf("\n");

 
   printf("---- Task 8 ----\n");

   // TODO: Compute and print the first 10 Fibonacci numbers:  
   // OUTPUT DESIRED:
   //    0, 1, 1, 2, 3, 5, 8, 13, 21, 34
   // The first Fibonacci number is 0
   // The second Fibonacci number is 1
   // All other Fibonacci numbers are the sum of its two predecessors (Vorgänger). 
   // e.g. 1 = 1 + 0
   //      2 = 1 + 1
   //      3 = 2 + 1
   //      5 = 3 + 2
   //      ....

   int counter = 1;
   int maxcounter = 10;
   int fib_1 = 0;
   int fib_2 = 1;
   int fib_neu = 0;

   printf("%d, %d", fib_1, fib_2);

   while (counter <= maxcounter) {

      
      printf(", ");
      fib_neu = fib_1 + fib_2;
      printf("%d", fib_neu);
      fib_1 = fib_2;
      fib_2 = fib_neu;
      



      counter++;
   }

   printf("\n");

   printf("---- Task 9 ----\n");

   // TODO: Read a positive number square_length (less or eqal than 20) from the console and 
   //       print a square with the length of square_length
   // OUTPUT DESIRED:
   //    Please enter the length of the square: 5
   // *****
   // *****
   // *****
   // *****
   // *****
   // WRITE YOUR CODE HERE!

   printf("\n");

   printf("---- Task 10 ----\n");

   // TODO: Read two positive numbers rect_length and rect_width 
   //       (less or eqal than 20) from the console and print a 
   //       square with length rect_length and width rect_width.
   // OUTPUT DESIRED:
   //    Please enter the length of the rectangle: 5
   //    Please enter the width of the rectangle: 10
   // **************
   // **************
   // **************
   // **************
   // **************
   // WRITE YOUR CODE HERE!

   printf("\n");

printf("---- Task 11 ----\n");

   // TODO: Create a multiplication table for the numbers 1 to 10. 
   // OUTPUT DESIRED:
   //   1   2   3   4   5   6   7   8   9  10
   //   2   4   6   8  10  12  14  16  18  20
   //   3   6   9  12  15  18  21  24  27  30
   //   4   8  12  16  20  24  28  32  36  40
   //   5  10  15  20  25  30  35  40  45  50
   //   6  12  18  24  30  36  42  48  54  60
   //   7  14  21  28  35  42  49  56  63  70
   //   8  16  24  32  40  48  56  64  72  80
   //   9  18  27  36  45  54  63  72  81  90
   //  10  20  30  40  50  60  70  80  90 100
   // HINT: while (i <= 100) {
   // WRITE YOUR CODE HERE!

   printf("\n");
      
printf("---- Task 12 ----\n");

   // TODO: Modify task 11, such that it creates a multiplication table 
   //       from 1 to n. n is read from the console
   // OUTPUT DESIRED:
   // Enter n: 5
   //   1   2   3   4   5
   //   2   4   6   8  10 
   //   3   6   9  12  15 
   //   4   8  12  16  20 
   //   5  10  15  20  25   
   // HINT: while (i <= n*n) {
   // WRITE YOUR CODE HERE!

   printf("\n");
  
   return 0;
}