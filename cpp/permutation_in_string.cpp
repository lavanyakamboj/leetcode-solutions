// ======================================
// LeetCode Problem: permutation in string
// Language: cpp
// Link: https://leetcode.com/problems/permutation-in-string/
// Synced by: LinkCode
// Date: 7/17/2026, 9:19:27 PM
// ======================================


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }

        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        
        for(char ch : s1){
            map1[ch]++;
        }

        int windowSize = s1.size();
        int left = 0;

        for(int right =0;right<s2.size();right++){
            map2[s2[right]]++;

             if(right-left+1 > windowSize){
                char ch = s2[left];
                left++;
                map2[ch]--;

                if(map2[ch]==0){
                    map2.erase(ch);
                }
            }

            if(right-left+1 == windowSize){
                if(map1 == map2)
                    return true; 
            }
        }
        return false;
    }
};