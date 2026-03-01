#include <iostream>

using namespace std;



int main() {

   int a, b;



   cout << "Enter the first integer: "; // Ask the user for input

   cin >> a;



   cout << "Enter the second integer: ";

   cin >> b;



   cout << "\n--- Results ---\n";

   cout << "Addition (a + b): " << (a + b) << endl;

   cout << "Subtraction (a - b): " << (a - b) << endl;

   cout << "Multiplication (a * b): " << (a * b) << endl;



   if (b != 0) {

       cout << "Division (a / b): " << (a / b) << endl;

       cout << "Modulo (a % b): " << (a % b) << endl;

   } else {

       cout << "Division: Cannot divide by zero!" << endl;

       cout << "Modulo: Cannot perform modulo with zero!" << endl;

   }


   return 0;

}