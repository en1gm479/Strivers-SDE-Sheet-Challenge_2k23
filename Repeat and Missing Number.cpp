#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &nums, int n)
{
	// Write your code here 
	long long sum=0,tot = (n*(n+1))/2;
	int rp,mp;
	for(int i=0;i<nums.size();i++){
			sum+=abs(nums[i]);
            int x = abs(nums[i])-1;
            if(nums[x]<0){
				rp = x+1;
			} 
            nums[x]=-nums[x];
        }
	mp = tot-(sum-rp);
        
        return {mp,rp};

	
}
