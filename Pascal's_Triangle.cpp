class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            vector<int> ls;
            for(int j=0;j<=i;j++){
                if(j==0 or j==i) ls.push_back(1);
                else ls.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            ans.push_back(ls);
        }
        
        return ans;
    }
};
