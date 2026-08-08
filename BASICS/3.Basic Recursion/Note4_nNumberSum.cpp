#include <bits/stdc++.h>
using namespace std;

int numberSum(int n){
    int sum;
    // if(n==0) curr=0;
    // cout<<n;
    if(n<=0) return 0;
    sum = n + numberSum(n-1);
    // n--;
    return sum;
}

int main(){

    cout<<numberSum(4);

    return 0;
}