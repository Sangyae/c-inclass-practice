#include <iostream>
using namespace std;
    int main() {    
        int t[] = { 1, 2 };
        int* pt = &(t[0]);
            for (int i = 0; i < 2; i++) {
                cout << "t[" << i << "]: " << t[i] << endl;
                cout << "pt + " << i << ": " << *(pt + i) <<endl;
            }
}