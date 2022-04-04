int arr[46] = {0};
class Solution {
public:
    int climbStairs(int n) {
        if(n<3) 
            return n;
            
        if(arr[n]!=0) 
            return arr[n];
            
        arr[n] = climbStairs(n-2)+climbStairs(n-1);
        return arr[n];
    }
};

//TOO SLOW
/*
 int climbStairs(int n) {
        map<int,int> ways;
        if(n <0)
            return 0;
        if(n==0)
            return 1;
        if(n <= 3)
            return n;
        ways[n] = climbStairs(n-1) + climbStairs(n-2);
        return ways[n];
    }
*/
