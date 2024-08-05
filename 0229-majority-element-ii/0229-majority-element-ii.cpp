class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=(nums.size()/3);
            vector<int>ans;
            map<int,int>freq;
        for(auto &i:nums){
            freq[i]++;
        }
        for(auto &y:freq){
            if(y.second>n){
                ans.push_back(y.first);
            }
        }
        return ans;
    }
};