#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i=0; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter a number up to which you want to calculate the sum: "<<endl;
    cin>>n;
    cout<<"the sum is: "<<sum(n)<<endl;
}