#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter an integer: " << endl;
    cin >> a;
    if (a>=0)
        cout << "The number is positive." << endl;
    else
        cout << "The number is negative." << endl;
}