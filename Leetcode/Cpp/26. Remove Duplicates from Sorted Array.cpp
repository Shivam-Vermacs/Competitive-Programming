#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int size = nums.size();
        int left = 1;
        for (int right = 1; right < size; right++)
        {
            if (nums[right] != nums[right - 1])
            {
                nums[left] = nums[right];
                left++;
            }
        }
        return left;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        
        sort(nums.begin(), nums.end());

        Solution sol;
        int k = sol.removeDuplicates(nums);

        cout << k << endl;
        for (int i = 0; i < k; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}