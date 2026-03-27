#include<stdio.h>

int main() {
  

   printf("---- Task 1 ----\n");

   // TODO: Print all numbers from -15 to 5 in a row
   // OUTPUT DESIRED: 
   //   -15, -14, -13, [and so on...], 3, 4, 5
   

   //Variable T1
   
   int startvalueT1 = -15;
   int stopvalueT1 = 5;

   int counterT1 = startvalueT1;

   while (counterT1 <= stopvalueT1) {

      if (counterT1 < 5) {
         printf("%d, ", counterT1);
      } else {
         printf("%d", counterT1);
      }

      counterT1++;
   }

   printf("\n");

   printf("---- Task 2 ----\n");

   // TODO: Print odd numbers from -15 to 5 in a row
   // OUTPUT DESIRED: 
   //   -15, -13, -11, [and so on...], 3, 5
   
   // Variables T2

   int startvalueT2 = -15;
   int stopvalueT2 = 5;

   int counterT2 = startvalueT2;

   while (counterT2 <= stopvalueT2) {

      if (counterT2 % 2 != 0) {

         if (counterT2 < 5) {
            printf("%d, ", counterT2);
         } else {
            printf("%d", counterT2);
         }
      }

      counterT2++;
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

   // Variables T3
   
   int lower_t3 = 0;
   int upper_t3 = 0;
   int sumT3 = 0;

   printf("Please enter two integer numbers: \n");
   scanf("%d %d", &lower_t3, &upper_t3);

   int counterT3 = lower_t3;

   while (counterT3 <= upper_t3) {

      sumT3 += counterT3;

      

      counterT3++;
   }

   printf("SUM: %d\n", sumT3);

   


   printf("\n");

   printf("---- Task 4 ----\n");

   // TODO: Read in how many numbers of the seqeunce below 
   //       should be printed (variable name: limit_t4)
   //       1, -2, -3, 4, -5, -6, 7, -8, -9, 10, -11, -12, 13, ...
   // OUTPUT DESIRED:      
   // Enter sequence limit: 5
   //   Result: 1, -2, -3, 4, -5
   // HINT: if within the while-block...

   //Variables T4

   int limitT4 = 0;
   int counterT4 = 1;
   int valueT4 = 1;

   printf("Please enter the sequence limit: \n");
   scanf("%d", &limitT4);

   while (counterT4 <= limitT4) {

      if ((counterT4 -1) % 3 == 0) {

         printf("%d", valueT4);
      } else {
         printf("-%d", valueT4);
      }

      if (counterT4 < limitT4) {
         printf(", ");
      } else {
         printf("");
      }

      counterT4++;
      valueT4++;

   }

   

   printf("\n");

   printf("---- Task 5 ----\n");

   // TODO: Read in how many numbers of the seqeunce below 
   //       should be printed (variable name: limit_t5)
   //       1, 0, -2, 0, 3, 0, -4, 0, 5, 0, -6, 0, ...
   // OUTPUT DESIRED: 
   //   Enter sequence limit: 5
   //   Result: 1, 0, -2, 0, -3
   // HINT: if in while...

   //Variables T5

   int limit_t5 = 0;
   int counterT5 = 1;
   int valueT5 = 1;

   printf("Please enter the limit: ");
   scanf("%d", &limit_t5);

   while (counterT5 <= limit_t5) {

      if (counterT5 % 2 == 0) {
         printf("0");
      } else {
         printf("-%d", valueT5);
      }

      if (counterT5 < limit_t5) {
         printf(", ");
      } else {
         printf(" ");
      }

      counterT5++;
      valueT5++;
   }



   printf("\n");

   printf("---- Task 6 ----\n");

   // TODO: Read in how many numbers of the seqeunce below 
   //       should be printed (variable name: limit_6)
   //       10, -20, 30, -40, 50, -60, 70, ...
   // OUTPUT DESIRED: 
   //   Enter sequence limit: 4
   //   Result: 10, -20, 30, -40

   //Variables T6

   int limitT6 = 0;
   int counterT6 = 1;
   int valueT6 = 10;

   printf("Please enter the limit: ");
   scanf("%d", &limitT6);

   while (counterT6 <= limitT6) {

      if (counterT6 % 2 == 1) {
         printf("%d", valueT6);
      } else {
         printf("-%d", valueT6);
      }

      if (counterT6 < limitT6) {
         printf(", ");
      } else {
         printf(" ");
      } 

      counterT6++;
      valueT6 += 10;
   }



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

   // WRITE YOUR CODE HERE!

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
   
   // Variables Task 9

   int rowT9 = 0;
   int colT9 = 0;
   int square_lenghtT9 = 0;

   printf("Please enter the lenght: ");
   scanf("%d", &square_lenghtT9);

   while (c <= square_lenghtT9) {

   }

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