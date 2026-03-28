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
        return a;
    }

void simplify(){
    if (den == 0){
        std::cerr << "Denominator cannot be zero.making it 0/1" << std::endl;
        num = 0; den = 1;   // we can use this as well -> exit(1);
        return;      
    }
    if (den < 0){
        num = -num;
        den = -den;
    }

    int common = gcd(num, den);{
        num /= common;
        den /= common;
    }
}

public:
    Fraction(int n = 0, int d = 1){
        num = n;
        den = d;
        simplify();
    }

    Fraction (float f){
        const int precision = 10000; // 4 decimal places
        num = static_cast<int>(f*precision);
        den = precision;
        simplify();
    }

                // Addition
    friend Fraction operator+(const Fraction& f1, const Fraction& f2) {
        int new_num = (f1.num * f2.den) + (f2.num * f1.den);
        int new_den = f1.den * f2.den;
        return Fraction(new_num, new_den); // Simplification happens in the constructor!
    }

                // Subtraction
    friend Fraction operator-(const Fraction& f1, const Fraction& f2) {
        int new_num = (f1.num * f2.den) - (f2.num * f1.den);
        int new_den = f1.den * f2.den;
        return Fraction(new_num, new_den);
    }

                // Multiplication
    friend Fraction operator*(const Fraction& f1, const Fraction& f2) {
        int new_num = f1.num * f2.num;
        int new_den = f1.den * f2.den;
        return Fraction(new_num, new_den);
    }

                // Division
    friend Fraction operator/(const Fraction& f1, const Fraction& f2) {
        int new_num = f1.num * f2.den;
        int new_den = f1.den * f2.num;
        return Fraction(new_num, new_den);
    }

                // Overload << operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Fraction& f) {
        if (f.den == 1) {
            os << f.num; // Print as a whole number if denominator is 1
        } else {
            os << f.num << "/" << f.den;
        }
        return os;
    }
}; 

int main() {
    Fraction f1(1, 2);   // 1/2
    Fraction f2(3, 4);   // 3/4
    
    std::cout << "--- Fraction Math ---" << std::endl;
    std::cout << f1 << " + " << f2 << " = " << (f1 + f2) << std::endl;
    std::cout << f1 << " - " << f2 << " = " << (f1 - f2) << std::endl;
    std::cout << f1 << " * " << f2 << " = " << (f1 * f2) << std::endl;
    std::cout << f1 << " / " << f2 << " = " << (f1 / f2) << std::endl;

    std::cout << "\n--- Integer & Float Math ---" << std::endl;
    // Because of our constructors, C++ implicitly converts the int and float!
    std::cout << f1 << " + 2 (int) = " << (f1 + 2) << std::endl; 
    std::cout << f1 << " * 1.5 (float) = " << (f1 * 1.5f) << std::endl;
    std::cout << "3.5 (float) - " << f2 << " = " << (3.5f - f2) << std::endl;

    std::cout << "\n--- Simplification Check ---" << std::endl;
    Fraction f3(10, 20);
    std::cout << "Fraction(10, 20) is automatically simplified to: " << f3 << std::endl;

    return 0;
}