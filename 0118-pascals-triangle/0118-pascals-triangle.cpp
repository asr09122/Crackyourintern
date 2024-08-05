class Solution {
public:
    vector<int> generater(int row) {
        long long ans = 1;
        vector<int> ansr;
        ansr.push_back(ans);
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansr.push_back(ans);
        }
        return ansr;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> anst;
        for (int row = 1; row <= numRows; row++) {
            anst.push_back(generater(row));
        }
        return anst;
    }
};
