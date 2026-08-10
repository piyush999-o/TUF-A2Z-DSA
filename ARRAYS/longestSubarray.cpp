#include <bits/stdc++.h>

using namespace std;

int longestSubarray(vector<int> &nums, int k)
{
    int length = 0;
    int itrr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int cnt = 0;
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            cnt++;
            if (sum == k)
            {
                length = max(cnt, length);
                break;
            }
        }
    }
    return length;
}

int longestSubarray2(vector<int> &nums, int k)
{
    int length = 0;
    int itrr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int cnt = 0;
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            cnt++;
            if (sum == k)
            {
                length = max(cnt, length);
                break;
            }
        }
    }
    return length;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {10, 5, 2, 7, 1, 9};
    cout << longestSubarray(v, 15);

    return 0;
}