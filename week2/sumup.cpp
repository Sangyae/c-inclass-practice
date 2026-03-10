#include<iostream>
using namespace std;

int sumup_rec(int n){
    if (n==0){
        return 0;
    }
    else{
        return n+sumup_rec(n-1);
    }
}

int main(){
    cout<<"the sum is: "<<sumup_rec(5)<<endl;
}