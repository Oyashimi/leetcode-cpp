/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string numSum(vector<int> num,int goal){
        string back;
        for(int i=0;i<goal;i++){
            back+=to_string(num[i]);
        }
        return back;
    }
    vector<int> plusOne(vector<int>& digits) {
        string ans;
        int num=-1;
        if(digits[digits.size()-1]!=9){
            ans=numSum(digits,digits.size()-1);
            ans+=to_string(digits[digits.size()-1]+1);
        }
        else{
            for(int i=digits.size()-1;i>=0;i--){
                if(digits[i]!=9){
                    num=i;
                    break;
                }
            }
            if(num==-1){
                ans="1";
                for(int i=0;i<digits.size();i++){
                    ans+="0";
                }
            }
            else{
                ans=numSum(digits,num);
                ans+=to_string(digits[num]+1);
                for(int i=num+1;i<digits.size();i++){
                    ans+="0";
                }
            }
        }
        vector<int> kotae;
        for(int i=0;i<ans.length();i++){
            kotae.push_back(ans.at(i)-'0');
        }
        return kotae;
    }
};
// @lc code=end

