/*
https://practice.geeksforgeeks.org/problems/max-length-chain/1?page=1&difficulty[]=0&difficulty[]=1&difficulty[]=2&status[]=unsolved&sortBy=submissions
*/
/*
   bool static comp(val fst, val sec){
        return fst.second<sec.second;
    }
    int maxChainLen(struct val p[],int n){
        sort(p, p+n,comp);
        int check = p[0].second;
        int ans = 1;
        for(int i=1;i<n;i++)
        {
            if(check<p[i].first)
            {
                ans++;
                check = p[i].second;
            }
        }
        return ans;
        
    }*/