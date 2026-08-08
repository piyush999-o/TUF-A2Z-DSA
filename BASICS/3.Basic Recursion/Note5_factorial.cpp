#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int fact;
    if (n==0 || n==1) return 1;

    fact = n*factorial(n-1);
    return fact;
    
}

int main(){

    cout<<factorial(5)<<endl;
    cout<<factorial(10)<<endl;
    cout<<factorial(1)<<endl;
    cout<<factorial(0)<<endl;

    return 0;
}