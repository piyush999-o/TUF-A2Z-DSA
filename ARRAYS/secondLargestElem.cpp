#include <bits/stdc++.h>

using namespace std;

// BETTER APPROACH THAN SORTING
int secondlargestElement(vector<int> &nums)
{
    int maxI = nums[0];
    int max2I = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > maxI)
        {
            maxI = nums[i];
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < maxI && nums[i] > max2I)
        {
            max2I = nums[i];
        }
    }
    if (max2I == INT_MIN)
        return -1;

    else
    {
        return max2I;
    }
}

// OPTIMAL APPROACH
int secondlargestElement2(vector<int> &nums)
{
    int maxI = nums[0];
    int max2I = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > maxI)
        {
            maxI = nums[i];
        }
        if (nums[i] > max2I && nums[i] != maxI)
        {
            max2I = nums[i];
        }
    }
    if (max2I != INT_MIN)
    {
        return max2I;
    }
    else
    {
        return -1;
    }
}

// OPTIMAL APPROACH 2 : Same as Optimal Approach(ABOVE) just combined few conditions
int secondlargestElement3(vector<int> &nums)
{
    int maxI = nums[0];
    int max2I = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > maxI)
        {
            max2I = maxI;
            maxI = nums[i];
        }
        else if (nums[i]<maxI && nums[i]>max2I){
            max2I = nums[i];
        }
    }
    if (max2I != INT_MIN)
    {
        return max2I;
    }
    else
    {
        return -1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {8, 8, 7, 6, 5};
    cout << secondlargestElement3(v);

    return 0;
}