// Provide output capability.
#include <iostream>
using std::cout;
using std::endl;


/* MAIN PROGRAM */
int main() {

   //  Initialize variables.
   const int NUMBERS_SIZE = 10;
   double numbers[NUMBERS_SIZE] = {1.0, 2.0, 3.0, 4.0, 5.0,
                                   6.0, 7.0, 8.0, 9.0, 10.0};
   int windowSize = 4;
   double sum = 0.0;
   double movingAverage = 0.0;


   //  Loop through nums in list, excluding any at the end that will be
   //+ covered by the nested for-loop.
   for (int i = 0; i <= (NUMBERS_SIZE - windowSize); i++) {

      sum = 0.0;                // Reinitialize sum back to zero.
      cout << "For numbers ";   // Output message.

      // Loop through x numbers from current i position, where x = windowSize.
      for (int j = i; j < i + windowSize; j++) {
         sum += numbers[j];           // Increment sum.
         cout << numbers[j] << " ";   // Display the currently addressed num.
      }

      // Calculate moving average and display.
      movingAverage = sum / windowSize;
      cout << endl << "Moving Average: " << movingAverage << endl << endl;

   }


   return 0;
}
