/*
https://practice.geeksforgeeks.org/problems/fill-up-buckets3500/1

*/
class Solution{
public:
    int totalWays(int n, vector<int>arr) {
        long long ans = 0;
        sort(arr.begin(),arr.end());
        const int mod = 1e9+7;
        ans = arr[0];
        for(int i=1;i<n;i++)
        {
            ans = (ans*(arr[i]-i)*1L)%mod;
        }
        return (int)ans;
    }
};