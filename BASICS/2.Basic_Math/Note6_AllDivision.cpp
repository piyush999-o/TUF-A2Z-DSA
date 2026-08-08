#include <bits/stdc++.h>
using namespace std;

vector<int> divisor(int n){
    vector<int> divnum;    
    // for (int i = 1; i <= n; i++)
    // {
    //     if ((n%i)==0)
    //     {
    //         divnum.push_back(i);
    //     }
        
    // }

    // optimal approach
    // for (int  i = 1; i <= sqrt(n); i++)
    for (int  i = 1; i*i<=n; i++)
    {
        if ((n%i)==0)
        {
            divnum.push_back(i);
            if (i!=(n/i))
            {
                divnum.push_back((n/i));
            }
            
        }
        
    }
    sort(divnum.begin(), divnum.end());
    
    for(auto itr = divnum.begin(); itr != divnum.end(); itr++)
    {
        cout<<*itr<<" ";
    }

    return divnum;
}

int main(){
    
    divisor(99);

    return 0;
}