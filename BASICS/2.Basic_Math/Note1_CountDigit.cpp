#include <bits/stdc++.h>
using namespace std;

int main(){

    int num = 85670;
    int count = 0;

    while (num>0)
    {
        // int lastDigit = num%10;
        num = num/10;
        count++;
    }
    cout<<"Number of Digits: "<<count<<endl;
    

    return 0;
}