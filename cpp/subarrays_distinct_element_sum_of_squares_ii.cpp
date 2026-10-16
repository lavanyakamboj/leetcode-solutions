// ======================================
// LeetCode Problem: subarrays distinct element sum of squares ii
// Language: cpp
// Link: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-ii/
// Synced by: LinkCode
// Date: 10/16/2026, 7:25:54 PM
// ======================================



class Solution {
public:
    static const int MOD = 1000000007;

    struct Node {
        long long sum = 0;
        long long squareSum = 0;
        long long lazy = 0;
    };

    vector<Node> tree;
    int n;

    void apply(int node, int left, int right, long long value) {
        long long length = right - left + 1;
        long long oldSum = tree[node].sum;

        tree[node].squareSum =
            (tree[node].squareSum
             + 2LL * value % MOD * oldSum % MOD
             + value * value % MOD * length % MOD) % MOD;

        tree[node].sum =
            (oldSum + value * length) % MOD;

        tree[node].lazy =
            (tree[node].lazy + value) % MOD;
    }

    void push(int node, int left, int right) {
        if (tree[node].lazy == 0 || left == right) {
            return;
        }

        int mid = left + (right - left) / 2;
        long long value = tree[node].lazy;

        apply(node * 2, left, mid, value);
        apply(node * 2 + 1, mid + 1, right, value);

        tree[node].lazy = 0;
    }

    void update(int node, int left, int right,
                int queryLeft, int queryRight) {
        if (queryLeft > right || queryRight < left) {
            return;
        }

        if (queryLeft <= left && right <= queryRight) {
            apply(node, left, right, 1);
            return;
        }

        push(node, left, right);

        int mid = left + (right - left) / 2;

        update(node * 2, left, mid, queryLeft, queryRight);
        update(node * 2 + 1, mid + 1, right,
               queryLeft, queryRight);

        tree[node].sum =
            (tree[node * 2].sum + tree[node * 2 + 1].sum) % MOD;

        tree[node].squareSum =
            (tree[node * 2].squareSum
             + tree[node * 2 + 1].squareSum) % MOD;
    }

    int sumCounts(vector<int>& nums) {
        n = nums.size();
        tree.resize(4 * n);

        unordered_map<int, int> lastSeen;
        long long answer = 0;

        for (int right = 0; right < n; right++) {
            int prev = -1;

            if (lastSeen.count(nums[right])) {
                prev = lastSeen[nums[right]];
            }

            update(1, 0, n - 1, prev + 1, right);

            lastSeen[nums[right]] = right;

            answer = (answer + tree[1].squareSum) % MOD;
        }

        return answer;
    }
};
