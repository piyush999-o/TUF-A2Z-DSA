#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){

    int lastdigit;
    long revnum = 0;
    int tempn=n;
    while (tempn > 0)
    {
        lastdigit = tempn%10;
        tempn = tempn/10;
        revnum = (revnum*10)+lastdigit;
    }
    if(revnum==n) {
        return true;
    }
    
    return false;
}

int main(){
    cout<<isPalindrome(-45654);
    return 0;
}