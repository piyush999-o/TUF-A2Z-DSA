#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {

    cout<<s<<endl;

    int length = s.size();
    int leftptr = 0;
    int rightptr = (length-1);
    while (leftptr<rightptr)
    {
        // Checks for alphanumeric
        // Below, if char is "#" isalnum return false but ! make together true so, if cond continued
        if(!isalnum(s[leftptr])) leftptr++;

        else if(!isalnum(s[rightptr])) rightptr--;

        else if (tolower(s[leftptr])!=tolower(s[rightptr])) return false;
        else{
            leftptr++;
            rightptr--;
        }
        
    }
    return true;
    
    
}

int main(){

    string str = "capy:pac";
    cout<<isPalindrome(str);
    return 0;
}