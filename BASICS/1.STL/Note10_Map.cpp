#include <bits/stdc++.h>
using namespace std;

int main(){

    /*
    Format:
    map<KEY, VALUE> var-name

    KEYS are:
        Unique
        Sorted

    */
    map<int, int> mpp;

    // map<int, pair<int, int>> mpp;
    
    // map<pair<int, int>, int> mpp;
    
    mpp[1] = 10;
    mpp.emplace(2, 21);
    mpp.insert({3, 30});
    mpp.insert({4, 40});
    
    map<int, pair<int, int>> mpp2;

    mpp2[5] = {50, 51}; 

    for(auto it: mpp){
        cout<<(it).first<<" : "<<(it.second)<<endl;
    }

    cout<<mpp[3]<<endl;
    cout<<mpp[5]<<endl; // it will return False: '0'

    auto itr = mpp.find(2);
    auto itr2 = mpp.find(5); // it will point to mpp.end()

    cout<<(*itr).second<<endl;
    cout<<(*itr2).first<<endl; // it will return 5 (beacause, it was find(5));
    cout<<(*itr2).second<<endl; // it will return 0
    
    /*
        lower_bound and upper_bound works,
        erase, size, swap, empty are same
    */;

    return 0;
}