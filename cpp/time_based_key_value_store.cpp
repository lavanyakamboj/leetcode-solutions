// ======================================
// LeetCode Problem: time based key value store
// Language: cpp
// Link: https://leetcode.com/problems/time-based-key-value-store/
// Synced by: LinkCode
// Date: 7/29/2026, 11:58:00 PM
// ======================================


class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        // string ans="";
        // for(auto i : mp[key]){
        //     if(i.first <= timestamp ){
        //         ans = i.second;
        //     }
        //     else {
        //         break;
        //     }

        auto &vec = mp[key]; // used reerance because agr new bnyenge to new bnane me o(n)time jyega
 
        int l = 0;
        int r = vec.size() - 1;
        string ans = "";

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid].first <= timestamp) {
                ans = vec[mid].second;   // possible answer
                l = mid + 1;             // search for a later valid timestamp
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */