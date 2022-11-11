/*
https://practice.geeksforgeeks.org/problems/primes-sum5827/1
*/
class Solution {
public:
    bool isPrime(int n)
    {
        if(n<=3)
        {
            return true;
        }
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    string isSumOfTwo(int N){
       if(N<4) return "No";
       for(int i=2; i<N;i++)
       {
           if(isPrime(i) && isPrime(N-i)) return "Yes";
       }
       return "No";
       
    }
};