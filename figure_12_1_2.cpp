// Figure 12.1.2: BMI example with error-checking code but without using exception-handling constructs.

#include <iostream>
using namespace std;

int main() {
   int weightVal;       // User defined weight (lbs)
   int heightVal;       // User defined height (in)
   float bmiCalc;       // Resulting BMI
   char quitCmd;        // Indicates quit/continue

   quitCmd = 'a';
   
   while (quitCmd != 'q') {
      
      // Get user data
      cout << "Enter weight (in pounds): ";
      cin >> weightVal;
      
      // Error checking, non-negative weight
      if (weightVal < 0) {
         cout << "Invalid weight." << endl;
      }
      else {
         cout << "Enter height (in inches): ";
         cin >> heightVal;
         
         // Error checking, non-negative height
         if (heightVal < 0) {
            cout << "Invalid height." << endl;
         }
      }
      
      // Calculate BMI and print user health info if no input error
      // Source: http://www.cdc.gov/
      if ((weightVal <= 0) || (heightVal <= 0)) {
         cout << "Cannot compute info." << endl;
      }
      else {
         bmiCalc = (static_cast<float>(weightVal) /
                    static_cast<float>(heightVal * heightVal)) * 703.0;
         
         cout << "BMI: " << bmiCalc << endl;
         cout << "(CDC: 18.6-24.9 normal)" << endl;
      }
      
      // Prompt user to continue/quit
      cout << endl << "Enter any key ('q' to quit): ";
      cin >> quitCmd;
   }
   
   return 0;
}
