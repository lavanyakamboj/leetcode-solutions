// ======================================
// LeetCode Problem: perfect number
// Language: cpp
// Link: https://leetcode.com/problems/perfect-number/
// Synced by: LinkCode
// Date: 9/12/2026, 9:35:22 PM
// ======================================


//  -- time comp -- O(n) 
// class Solution {
// public:
//     bool checkPerfectNumber(int num) {
//         long long sum =0;
//         for(int i=1; i<=num/2 ;i++){
//             if(num%i ==0)
//                 sum = sum +i;
//         }
//         return sum == num;
//     }
// };


// -- time comp -- O(root n)

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num <= 1)
            return false;
        long long sum = 1;
        for(int i=2 ; i*i <= num ;i++){
            if(num%i ==0){
                sum = sum +i;

                if(i != num/i){
                    sum = sum + (num/i);
                }   
            }
        }
        return sum == num;
    }
};