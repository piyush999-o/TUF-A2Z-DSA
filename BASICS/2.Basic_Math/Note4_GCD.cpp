#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2){
    int minnum = min(n1, n2);
    int gcdnum;
    int i;
    for (i = minnum; i >= 1; i--)
    {
        if((n1%i==0) && (n2%i==0)){
            gcdnum=i;
            break;
        }
    }
    return i;

}

int main(){

    // cout<<max(20, 80)<<endl;
    // cout<<min(20, 80)<<endl;
    cout<<gcd(16, 20)<<endl;

    return 0;
}