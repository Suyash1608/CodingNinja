vector<int> alternateNumbers(vector<int>&a) {
    int p=0, n=1;
    vector<int> res(a.size(),0);
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>0)
        {
            res[p]=a[i];
            p=p+2;
        }
        else
        {
            res[n]=a[i];
            n=n+2;
        }
    }
    return res;
}