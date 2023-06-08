class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,mini=prices[0];
        
        for(auto it:prices){
            maxi = max(maxi,it-mini);
            mini = min(mini,it);
        }
        
        return maxi;
    }
};
