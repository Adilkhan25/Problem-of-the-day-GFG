/*
https://practice.geeksforgeeks.org/problems/sum-of-beauty-of-all-substrings-1662962118/1

*/
class Solution {
  public:
    
  
    int beautySum(string s) {
        // Your code goes here
        int maxi=INT_MIN, mini=INT_MAX;
        
        int ans = 0;
        for(int i=0;i<s.length();i++)
        {   // unordered_map<char,int> mp;
            int a[26];
            memset(a, 0,sizeof(a));
            for(int j=i;j<s.length();j++)
            {
               a[s[j]-'a']++;
               maxi = 0,mini=s.length();
                for(int k=0;k<26;k++)
                {
                   maxi = max(maxi,a[k]);
                   if(a[k]!=0) mini = min(mini, a[k]);
                }
              ans+=(maxi-mini);
            }
        
          //  mp.clear();
          
        }
        return ans;
    }
};