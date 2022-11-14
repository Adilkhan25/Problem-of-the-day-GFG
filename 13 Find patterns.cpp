
/*


https://practice.geeksforgeeks.org/problems/find-patterns0606/1
*/


class Solution{   
public:
    int numberOfSubsequences(string S, string W){
         int cnt=0,ans=0;

        vector<int> vg;

        for(int i=0;i<S.length();i++){

            if(S[i]==W[0]){

                vg.push_back(i);

            }

        }

        if(vg.size()==0){

            return 0;

        }

        int i=vg[0];

        int vgc=0;

        int pt=0;

        while(i<S.length()){

             if(vgc==vg.size()){

              break;

          }

           i=vg[vgc];

            int j=i;

            int cnt=0;

            int pt=0;

          while(j<S.length()){

              if(S[j]==W[pt]){

                  cnt++;

                  pt++;

                  S[j]='#';

              }if(cnt==W.length()){

                  ans++;

                  break;

              }

              j++;

          }vgc++;

        }return ans;
    }
};