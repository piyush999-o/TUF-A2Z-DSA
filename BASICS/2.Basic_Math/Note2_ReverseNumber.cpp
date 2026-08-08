#include <bits/stdc++.h>
using namespace std;


int reverseNumber(int n){

    int lastdigit;
    int revnum=0;
        while (n!=0)
        {
            lastdigit = n%10;
            n = n/10;
            revnum = (revnum*10)+lastdigit;
        }
        if (revnum > INT_MAX || revnum < INT_MIN){
            return 0;
        }
    // do
    // {
    //     lastdigit = n%10;
    //     n = n/10;
    //     revnum = (revnum*10)+lastdigit;
    // } while (n>0);
    

    return revnum;
    
}

int main(){

    cout<<reverseNumber(525698)<<endl;

    // cout<<(-521)%10;


    return 0;
}