// ======================================
// LeetCode Problem: valid anagram
// Language: cpp
// Link: https://leetcode.com/problems/valid-anagram/
// Synced by: LinkCode
// Date: 7/8/2026, 9:12:05 PM
// ======================================


// solution using two unordered maps -- space comp - O(2n) 
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int len = s.size();
//         if(len != t.size()){
//             return false;
//         }
//         unordered_map<char,int> map1;
//         unordered_map<char,int> map2;
//         for(int i=0;i<len;i++){
//             // for first map - string s
//                 map1[s[i]]++;
            
//             // for second map string t
//                 map2[t[i]]++;
//         }
//         for(auto i : map1){
//             if(map2[i.first] != map1[i.first]){
//                 return false;
//             }
//         }
//         return true;
//     }
// };




//solution using only 1 unordered map  -- space comp : O(n)

class Solution {
public:
    bool isAnagram(string s, string t) {
        int len = s.size();
        if(len != t.size()){
            return false;
        }
        unordered_map<char,int> map1;
        for(int i=0;i<len;i++){
                map1[s[i]]++;
        }
        for(int i=0;i<len;i++){
                map1[t[i]]--;
        }
        for(auto i : map1){
            if(map1[i.first] != 0){
                return false;
            }
        }
        return true;
    }
};