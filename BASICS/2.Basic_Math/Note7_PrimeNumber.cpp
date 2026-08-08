#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    /*
    vector<int> divnum;
    for (int i = 1; i*i <= n; i++){
        if ((n%i)==0){
            divnum.push_back(i);
            if (i != (n/i))
            {
                divnum.push_back((n/i));
            }   
        }
    }
    if (divnum.size() == 2)
    {
        return true;
    }
    return false;
    */

    // Without using vector:
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if ((n%i)==0)
        {
            cnt++;
            if (i != (n/i))
            {
                cnt++;
            }
            
        }
        
    }
    if (cnt==2)
    {
        return true;
    }
    return false;

}

int main(){

    cout<<isPrime(51);

    return 0;
}