class Solution {
public:
    int maximum69Number (int num) {
        /*split number into digits*/
        vector<int> digits;
        string numStr = to_string(num);

        for(char& c : numStr) {
            int digit = stoi(string(1,c));
            digits.push_back(digit);
        }

        for(int i = 0; i < digits.size(); i++) {
            if(digits[i] == 6) {
                digits[i] = 9;
                break;
            }
        }

        return vectorToInt(digits);
    }

    int vectorToInt(vector<int> digits) {
        int num = 0;

        for(int digit : digits) {
            num = num * 10 + digit;
        }

        return num;
    }
  
};
