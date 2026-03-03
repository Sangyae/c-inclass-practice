#include<iostream>
using namespace std;

int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}

int main(){
    int n;
    cout<<"enter a number up to which you want to calculate the sum: "<<endl;
    cin>>n;
    cout<<"the sum is: "<<sum(n)<<endl;
}