#include <string>
#include <iostream>

using namespace std;

int main() {
   string inputName;
   int age;
   // Set exception mask for cin stream
   cin.exceptions(ios::failbit);

   cin >> inputName;
   while(inputName != "-1") {
      // The following line will throw an ios_base::failure.
      //        Insert a try/catch statement to catch the exception.
      //        Clear cin's failbit to put cin in a useable state.
      try {
         cin >> age;
         cout << inputName << " " << (age + 1) << endl;
      }
      catch (ios_base::failure) {
         // Clear failbit to be able to use cin again
         cin.clear();
         // Throw away the rest of the failed input line
         string garbage;
         getline(cin, garbage);

         age = 0;
         cout << inputName << " " << age << endl;
      }
      cin >> inputName;
   }
   
   return 0;
}
