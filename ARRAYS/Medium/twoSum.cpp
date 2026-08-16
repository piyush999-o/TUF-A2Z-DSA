#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> resultvec;
    int itr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[j] + nums[i] == target && i != j)
            {
                resultvec.push_back(i);
                resultvec.push_back(j);
                break;
            }
            
        }
        
    }

    return resultvec;
}

vector<int> twoSum2(vector<int> &nums, int target)
{
    vector<int> resultvec;
    // int itr = 0;
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        int a = nums[i];
        int req = target - a;
        if (mpp.find(req) != mpp.end())
        {
            // mpp[a] = i;
            resultvec.push_back(i);
            resultvec.push_back(mpp[req]);
        }
        mpp[a] = i;
        
    }

    return resultvec;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 3, 5, -7, 6, -3};
    vector<int> rsvec = twoSum2(v, 0);
    for (int i = 0; i < rsvec.size(); i++)
    {
        cout << rsvec[i] << " ";
    }

    return 0;
}