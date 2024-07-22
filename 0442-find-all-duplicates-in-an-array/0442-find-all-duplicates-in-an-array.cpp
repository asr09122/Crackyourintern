class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>dupli;
        for(int i=0;i<nums.size();i++){
            dupli[nums[i]]++;
        }
        vector<int>result;
        for(auto &i:dupli){
            if(i.second>1){
                result.push_back(i.first);
            }
        }
        return result;
    }
};