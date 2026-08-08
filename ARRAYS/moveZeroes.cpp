#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    int itrr = 0;
    for (int i = itrr; i < n; i++)
    {
        // itrr goes till first 0 
        if (nums[itrr]!=0) {
            itrr++;
        }
        // swapping zero till end
        else if (nums[i] != 0)
        {
            int temp = nums[itrr];
            nums[itrr] = nums[i];
            nums[i] = temp;
            itrr++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {2, 5, 1,0,5,0,0,6};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    moveZeroes(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}