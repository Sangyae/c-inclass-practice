#include<iostream>
using namespace std;

int main() {
    float P,R,year1,year2,year3;
    cout << "Enter the principal amount: " << endl;
    cin >> P;
    cout << "Enter the rate of interest: " << endl;
    cin >> R;

    float multiplier = 1 + (R / 100.0); // Calculate the multiplier for interest
    year1 = P * multiplier; // Amount after 1 year  
    year2 = year1 * multiplier; // Amount after 2 years
    year3 = year2 * multiplier; // Amount after 3 years

    cout << "Amount after 1 year: " << year1 << endl;
    cout << "Amount after 2 years: " << year2 << endl;  
    cout << "Amount after 3 years: " << year3 << endl;

    return 0;
}