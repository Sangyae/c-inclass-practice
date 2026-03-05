#include <iostream>
    int main() {    
        int t[] = { 1, 2 };
        int* pt = &(t[0]);
            for (int i = 0; i < 2; i++) {
                std::cout << "t[" << i << "]: " << t[i] << std::endl;
                std::cout << "pt + " << i << ": " << *(pt + i) <<std::endl;
            }
}