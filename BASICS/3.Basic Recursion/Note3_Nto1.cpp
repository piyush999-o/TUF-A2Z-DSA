#include <bits/stdc++.h>
using namespace std;

void printNumRev(int n){
    if(n < 1) return;
    cout<<n<<endl;
    n--;
    printNumRev(n);
}

int main(){

    printNumRev(1);
    
    return 0;
}