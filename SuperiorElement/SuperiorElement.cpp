vector<int> superiorElements(vector<int>&a) {
    int n=a.size();
    vector<int> ans;
    ans.push_back(a[n-1]);
    int maxi=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>maxi)
        {
            ans.push_back(a[i]);
            maxi=a[i];
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}