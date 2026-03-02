#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}
    
int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int result = add(a,b);
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<result<<endl;
    return 0;
}