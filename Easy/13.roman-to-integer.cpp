/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(i<s.length()-1 && s.at(i)=='I'){
                if(s.at(i+1)=='V') sum+=4;
                else if(s.at(i+1)=='X') sum+=9;
                else {
                    sum+=1;
                    continue;
                }
                i++;
            }
            else if(i<s.length()-1 && s.at(i)=='X'){
                if(s.at(i+1)=='L') sum+=40;
                else if(s.at(i+1)=='C') sum+=90;
                else {
                    sum+=10;
                    continue;
                }
                i++;
            }
            else if(i<s.length()-1 && s.at(i)=='C'){
                if(s.at(i+1)=='D') sum+=400;
                else if(s.at(i+1)=='M') sum+=900;
                else {
                    sum+=100;
                    continue;
                }
                i++;
            }
            else{
                if(s.at(i)=='I') sum+=1;
                else if(s.at(i)=='V') sum+=5;
                else if(s.at(i)=='X') sum+=10;
                else if(s.at(i)=='L') sum+=50;
                else if(s.at(i)=='C') sum+=100;
                else if(s.at(i)=='D') sum+=500;
                else sum+=1000;
            }
        }
        return sum;
    }
};
// @lc code=end

