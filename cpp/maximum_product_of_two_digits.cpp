// ======================================
// LeetCode Problem: maximum product of two digits
// Language: cpp
// Link: https://leetcode.com/problems/maximum-product-of-two-digits/
// Synced by: LinkCode
// Date: 7/25/2026, 7:17:50 PM
// ======================================


// solution using the array and sorting -- time comp == O(nlog n)

// class Solution {
// public:
//     int maxProduct(int n) {
//         vector<int> res;
//         while(n!=0){
//             int i = n%10;
//             res.push_back(i);
//             n=n/10;
//         }
//         sort(res.begin(),res.end());
//         int s = res.size();
//         int num = res[s-1] * res[s-2];
//         return num;
//     }
// };


// more optimised solution - no sorting or array 

class Solution {
public:
    int maxProduct(int n) {
        int num1 =0 , num2 = 0;
        while(n !=0 ){
            int digit = n % 10;
            if(digit >= num1){
                num2 = num1;
                num1=digit;
            }
            else if(digit >= num2 ){
                num2=digit;
            }
            n = n/10;
        }
        return num1 * num2;
    }
};