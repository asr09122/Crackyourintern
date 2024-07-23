class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left=0;
        int right=0;
        int sum=0;
        
        for(int i=0;i<k;i++){
            left=left+cardPoints[i];
            sum=left;
        }
        int right_idx=cardPoints.size()-1;
        
        for(int i=k-1;i>=0;i--){
            left=left-cardPoints[i];
            right=right+cardPoints[right_idx];
            right_idx--;
            sum=max(sum,left+right);
            
        }
        return sum;
    }
};