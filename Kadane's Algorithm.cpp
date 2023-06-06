class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int glsum=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            glsum=max(sum,glsum);
            if(sum<0) sum=0;
        }
        
        return glsum;
    }
};
