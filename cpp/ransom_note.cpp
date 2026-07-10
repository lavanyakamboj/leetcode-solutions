// ======================================
// LeetCode Problem: ransom note
// Language: cpp
// Link: https://leetcode.com/problems/ransom-note/
// Synced by: LinkCode
// Date: 7/10/2026, 12:27:37 PM
// ======================================


// using two hash maps :    

// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//         unordered_map<char,int> map1;
//         unordered_map<char,int> map2;
// hashmap storing frequency for rensom number 
//         for(char s : ransomNote){
//             map1[s]++;
//         }
// hashmap storing frequency for the magazine
//         for(char s : magazine){
//             map2[s]++;
//         }
//         for(auto i : map1){
//             if(i.second > map2[i.first]){
//                 return false;
//             }
//         }
//         return true;
//     }
// };


// solution using only one hashmap

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map;
        for(char s : magazine){
            map[s]++;
        }
        for(auto i : ransomNote){
            if(map[i]==0){
                return false;
            }
            map[i]--;
        }
        return true;
    }
};