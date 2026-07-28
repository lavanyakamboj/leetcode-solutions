// ======================================
// LeetCode Problem: smallest palindromic rearrangement i
// Language: cpp
// Link: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/
// Synced by: LinkCode
// Date: 7/28/2026, 10:19:39 PM
// ======================================


class Solution {
public:
    string smallestPalindrome(string s) {

        unordered_map<char,int> mp;

        // store frequency
        for(char ch : s){
            mp[ch]++;
        }

        vector<char> chars;

        // store unique chars
        for(auto it : mp){
            chars.push_back(it.first);
        }

        // sort characters
        sort(chars.begin(), chars.end());


        string left = "";
        char middle = '\0';


        // make first half
        for(char ch : chars){

            if(mp[ch] % 2 == 1){
                middle = ch;   // only one possible
            }

            int count = mp[ch] / 2;

            while(count--){
                left += ch;
            }
        }


        string right = left;
        reverse(right.begin(), right.end());


        return left + (middle == '\0' ? "" : string(1,middle)) + right;
    }
};