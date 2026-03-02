#include<iostream>
using namespace std;

int fact(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    return n;
}

int main(){
    int n;
    cout<<"Enter a number up to which you want to calculate the factorial: "<<endl;
    cin>>n;
    int result = fact(n);
    cout<<"The factorial of "<<n<<" is: "<<result<<endl;
    return 0;
}
