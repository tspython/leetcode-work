class Solution {
public:
    int minimumSum(int num) {

        int d[4] = {};
        int n = num;

        for(int i = 0; i < 4; ++i, n/=10)
            d[i] = n % 10;
        sort(begin(d), end(d)); //sort

        return 10 * (d[0] + d[1]) + d[2] + d[3];
    }
};
