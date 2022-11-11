/*
https://practice.geeksforgeeks.org/problems/stepping-numberswrong-output1813/1
*/
    //   int steppingNumbers(int n, int m)
    // {
    //     queue<int> q;
    //     int count = 0;
    //     for (int i = 0; i <= 9;i++)
    //     {
    //         q.push(i);
    //     }
    //     while(!q.empty())
    //     {
    //         int curr = q.front();
    //         q.pop();
    //         if(curr>=n&&curr<=m)
    //         {
    //             count++;
    //         }
    //         if(curr==0||curr>m)
    //         {
    //             continue;
    //         }
    //         int lastDigit = curr % 10;
    //         int step1 = curr * 10 + (lastDigit - 1);
    //         int step2 = curr * 10 + (lastDigit + 1);
    //         if(lastDigit==0)
    //         {
    //             q.push(step2);
    //         }
    //         else if(lastDigit==9)
    //         {
    //             q.push(step1);
    //         }
    //         else
    //         {
    //             q.push(step1);
    //             q.push(step2);
    //         }
    //     }
    // return count;
    // }