/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int a,b;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        bool judge = false;
        for(int i=0;i<nums.size();i++){
            if(mp.count(target-nums[i]) && mp[target-nums[i]] != i) {
                a=i;
                b=mp[target-nums[i]];
                if(a>b){
                    int tmp=a;
                    a=b;
                    b=tmp;
                }
                judge = true;
                break;
            }
        }
        if(judge) return {a,b};
        else return {};
    }
};
// @lc code=end

