class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> freq;
        vector<string> distinct;
        
        for (auto &str : arr) {
            freq[str]++;
        }
        for (auto &str : arr) {
            if (freq[str] == 1) {
                distinct.push_back(str);
            }
        }
        if (k - 1 < 0 || k - 1 >= distinct.size()) {
            return "";
        }
        
        return distinct[k - 1];
    }
};
