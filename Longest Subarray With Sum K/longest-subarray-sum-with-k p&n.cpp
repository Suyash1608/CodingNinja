#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    int n=nums.size();
    int maxlen=0;
    long long presum=0;
    unordered_map<long long,int> mp;
    for(int i=0;i<n;i++)
    {
        presum+=nums[i];
        if(presum==k)
        {
            maxlen=max(maxlen,i+1);
        }
        long long rem=presum-k;
        if(mp.find(rem)!=mp.end())
        {
            int len=i-mp[rem];
            maxlen=max(len,maxlen);
        }
        if(mp.find(presum)==mp.end())
        {
            mp[presum]=i;
        }
    }
    return maxlen;
}