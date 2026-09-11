// ======================================
// LeetCode Problem: count primes
// Language: cpp
// Link: https://leetcode.com/problems/count-primes/
// Synced by: LinkCode
// Date: 9/11/2026, 1:56:04 PM
// ======================================


// --- time limit exceeds -- not the best solution ---
// class Solution {
// public:
// // check weather a number is prime or not
//     bool isprime(int num){
//         if(num<2)
//             return false;
//         for(int i=2 ; i*i<=num ; i++){
//             if(num % i == 0)
//                 return false;
//         }
//         return true;
//     }

// // count total prime numbers
//     int countPrimes(int n) {
//         int num=0;
//         for(int i=0 ; i<n ; i++){
//             if(isprime(i)){
//                 num++;
//             }
//         }
//         return num;
//     }
// };


//  -- better solution -- using 
class Solution {
public:
    int countPrimes(int n) {
         
        if (n <= 2) return 0;

        vector<char> isPrime(n, 1);

        for (int i = 3; 1LL * i * i < n; i += 2) {
            if (isPrime[i]) {
                for (long long j = 1LL * i * i;
                     j < n; j += 2 * i) {
                    isPrime[j] = 0;
                }
            }
        }

        int count = 1; 

        for (int i = 3; i < n; i += 2) {
            if (isPrime[i]) {
                count++;
            }
        }
        return count;
        
    }
};