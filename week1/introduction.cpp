#include<iostream>
using namespace std;

int main() {
    string Fullname, TVprogram,time, targetgrade;
    
    cout << "Enter your full name: " << endl;
    cin>> Fullname;

    cout << "Enter your favorite TV program: " << endl;
    cin>> TVprogram;

    cout << "When do yo usually wake up: " << endl;
    cin>> time;

    cout << "Enter your target grade in this course: " << endl;
    cin>> targetgrade;

    cout << "My name is " << Fullname << ", my favorite TV program is " << TVprogram << ", I woke up at " << time << ", and my target grade is " << targetgrade << "." << endl;
    return 0;

}