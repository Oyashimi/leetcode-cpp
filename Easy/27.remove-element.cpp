/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        auto tmp=remove(nums.begin(), nums.end(),val);
        nums={};
        int ans=0;
        for(auto i=nums.begin();i!=tmp;i++){
            nums.push_back(*i);
            ans++;
        }
        return ans;
    }
};
// @lc code=end

