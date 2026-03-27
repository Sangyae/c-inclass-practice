#include<iostream>
#include<cmath>

class Fraction {
private:
    int num;
    int den;

    int gcd(int a, int b){
        a = std::abs(a);
        b = std::abs(b);
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
    }

}