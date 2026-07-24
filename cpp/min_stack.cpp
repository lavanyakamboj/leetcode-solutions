// ======================================
// LeetCode Problem: min stack
// Language: cpp
// Link: https://leetcode.com/problems/min-stack/
// Synced by: LinkCode
// Date: 7/24/2026, 10:40:27 PM
// ======================================


class MinStack {
public:
    stack<int> st;
    stack<int> minSt;
    MinStack() {
    }
    void push(int value) {
        st.push(value);
        
        // if minstack is empty or new wlwmwnt is less then last eleent then only add it
        if (minSt.empty() || value <= minSt.top()) {
            minSt.push(value);
        }
    }

    void pop() {
        if (st.top() == minSt.top()) {
            minSt.pop();
        }

        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};