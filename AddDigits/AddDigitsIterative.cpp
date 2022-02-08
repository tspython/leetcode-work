class Solution {
public:
    int addDigits(int num) {
      int sum=0; //keep until greater than single digit
        
        while(num>9)
        {
            while(num)
            {
                sum+=(num%10); //split into digits
                num/=10;
            }
            num=sum; //set num to new number
            sum=0; //reset sum to 0 so we can refresh it
        }
        return num;
    }
};
