#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int found = 0;
    vector<int> newVec;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j && nums[i] + nums[j] == target)
            {
                newVec.push_back(i);
                newVec.push_back(j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }
    return newVec;
}

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int m = nums2.size();
    double ret;
    for (int i = 0; i < m; i++)
    {
        nums1.push_back(nums2.at(i));
    }
    sort(nums1.begin(), nums1.end());

    int n = nums1.size();
    if (n % 2 != 0)
    {
        ret = static_cast<double>(nums1.at((n / 2)));
    }
    else
    {
        ret = static_cast<double>(nums1.at((n / 2) - 1) + nums1.at(n / 2)) / 2;
    }
    return ret;
}

int maxArea(vector<int> &height)
{
    int length = height.size();
    int leftLen = length - 1;
    int maxRight = height.at(length - 1);
    int mx = height.at(0);

    for (int i = 0; i < length; i++)
        mx = max(mx, height.at(i));

    for (int i = leftLen; i >= 0; i--)
    {
        if (i == leftLen && maxRight < height.at((length >= 5 || length == 2) ? leftLen-1:leftLen))
            continue;
        if (i == leftLen && maxRight > height.at((length >= 5 || length == 2) ? leftLen-1:leftLen))
            break;
        if (maxRight < height.at(i) && height.at(i) > height.at((length >= 5 || length == 2) ? i-2:i-1))
        {
            maxRight = height.at(i);
            break;
        }
    }
    if(mx > maxRight) mx-=1;
    if(mx == maxRight && length !=2) mx-=1;
    return mx * maxRight;
}

string longestCommonPrefix(vector<string>& strs) {
    string prefix = "";
    for(int i = 0; i<strs[0].size();i++) {
        char c = strs[0][i];
        for(int j = 1; j<strs.size();j++) {
            if(i >= strs[j].size() || strs[j][i] != c) {
                return prefix;
            }
        }
        prefix += c;
    }
    return prefix;
}



int main()
{
    vector<int> nums = {1,2,34,5,7,6,3,2,5,7,2,4,7};
    int len = nums.size();
    int h = len-1,l = 0,target = 6;; 
    int m = nums.at(h)/nums.at(l);
    int high = nums.at(h), low = nums.at(l);

    int hl;
    for(int x: nums) 
        cout<<x<< " ";

    sort(nums.begin(), nums.end());
    cout<<endl;
    for(int x: nums) 
        cout<<x<< " ";

    while(1) {
        if(target > m) {
            low = m;
            m = (low+high )/ 2;
        }
        if(target < m)  {
            high = m;
            m = (low+high)/2;
        }
        if(target==m) {
            cout<<endl<<m;
            break;
        }   
    }
}