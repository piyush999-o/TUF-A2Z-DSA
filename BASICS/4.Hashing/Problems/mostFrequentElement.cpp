#include <bits/stdc++.h>
using namespace std;

int mostFrequentElement(vector<int>& nums) {
    int maxint = 0;
    int maxcnt = 0;
    int prevint = 0;
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    /*
    4 : 2
    5 : 2
    6 : 1
    */

    for (auto itr : mpp)
    {
        int key = itr.first;
        int value = itr.second;
        // cout<<"Key: "<<key<<endl;

        if (value>maxcnt)
        {
            maxcnt = value;
            maxint = key;
            prevint = key;
            // cout<<"1";
        }
        else if (value==maxcnt)
        {
            maxint = prevint;
            // cout<<"2";
        }
        else {
            // cout<<"3";
        }
        // cout<<endl;
        
    }

    return maxint;
    
}

int main(){
    vector<int> v1 = {4, 4, 5, 5, 6};
    cout<<mostFrequentElement(v1);

    return 0;
}