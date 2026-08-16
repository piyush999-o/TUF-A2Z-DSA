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
            }
        }
    }
    return length;
}

int longestSubarray2(vector<int> &nums, int k)
{
    int n = nums.size();
    int left = 0, right = 0;
    int maxLen = 0;
    long long sum = nums[0];
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= nums[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += nums[right];
        }
    }
    return maxLen;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {10, 5, 2, 7, 1, 9};
    cout << longestSubarray2(v, 15);

    return 0;
}