/*
https://practice.geeksforgeeks.org/problems/maximum-sub-string-after-at-most-k-changes3220/1

*/
class Solution {
	public:
	  
		int characterReplacement(string s, int k){
		   unordered_map<char, int> mp;
		//   for(ch = 'A'; ch<='Z';ch++) mp[ch] = 0;
		    int same = 0;
		    int diff = 0;
	     	int pre = 0;
		    int ans = 1;
            int end = 0;
            while(end<s.length())
            {
              int ct =   mp[s[end++]]++;
                same = max(same,ct+1);
                if((same+k)<(end-pre))
                {
                    mp[s[pre]]--;
                    pre++;
                }
                else
                {
                    ans = max(ans, end-pre);
                }
                
            }
		   return ans;
		}

};