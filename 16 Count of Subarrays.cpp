/*
https://practice.geeksforgeeks.org/problems/count-of-subarrays5922/1
*/

class Solution{
public:
	// #define ll long long

	ll countSubarray(int arr[], int n, int K) {
	    int i=0,j=0;
	    long long ans = 0;
	   while(i<n)
	   {
	       if(arr[i]>K)
	       {
	           long long new_ans = i+1;
	           j = i+1;
	           int ct=0;
	           int fans = new_ans;
	           if(j<n && arr[j]<=K)
	           {
	               while(arr[j]<=K && j<n)
	               {
	               ct++;
	               j++;
	               }
	           
	           }
	           new_ans*=(ct*1L);
	           ans+=(new_ans+fans);
	          
	           i=j;
	           
	       }
	       else i++;
	   }
	   return ans;
	}
};