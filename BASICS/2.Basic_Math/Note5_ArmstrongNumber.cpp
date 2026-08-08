#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){

    int count = 0;
    int lastdigit;
    int tempn = n;
    while (n>0)
    {
        n = n/10;
        count++;
    }
    int dig[count];
    for (int i = 0; i < count; i++)
    {
        lastdigit = tempn%10;
        tempn = tempn/10;
        dig[i] = lastdigit;
    }
        
    
    // cout<<count;
    

}

int main(){

    // cout<<isArmstrong(253);
    isArmstrong(253);

    return 0;
}