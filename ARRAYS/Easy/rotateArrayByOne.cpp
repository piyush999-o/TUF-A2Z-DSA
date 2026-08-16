#include <bits/stdc++.h>

using namespace std;

void rotateArrayByOne(vector<int> &nums, int k)
{
    k = k%nums.size();
    for (int j = 0; j < k; j++)
    {
        for (int i = nums.size()-1 ; i >= 1; i--)
        {
            long long temp = nums[i];
            nums[i] = nums[i - 1];
            nums[i - 1] = temp;
        }
    }


    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";
}

void rotateArrayByOne2(vector<int> &nums)
{
    int t = 2;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
    nums[nums.size() - 1] = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 2, 3, 4, 5, 6};
    rotateArrayByOne(v, 2);

    return 0;
}