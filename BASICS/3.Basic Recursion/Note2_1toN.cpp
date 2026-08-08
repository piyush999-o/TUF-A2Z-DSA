#include <bits/stdc++.h>
using namespace std;

// void printNumbers(int n){
//     if(n==0) return;
//     cout<<n<<endl;
//     n--;

//     printNumbers(n);
// }

void printNumbers(int cur=1, int n=1){
    int num = cur;
    if(num>n) return;
    cout<<num<<endl;
    num++;
    printNumbers(num, n);
}

int main(){

    printNumbers(1, 9);

    return 0;
}