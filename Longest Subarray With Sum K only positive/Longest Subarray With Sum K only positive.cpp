int longestSubarrayWithSumK(vector<int>& a, long long k) 
{
    int n=a.size();
    int maxlen=0;
    long long sum=0;
    int i=0;
    for(int j = 0; j < n; j++) {
        sum += a[j];
        if(sum == k) {
            maxlen =max(maxlen, j - i + 1);
        } else {
            while(sum > k && i <= j) {
                sum -= a[i];
                i++;
            }
            if(sum == k) {
                maxlen =max(maxlen, j - i + 1);
            }
        }
    }
    return maxlen;
    }
