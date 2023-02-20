class Solution {
public:
    int hammingWeightHelper(string n) {
        if (n.length() == 1) {
            if (n == "1") {
                return 1;
            }
            else {
                return 0;
            }
        }
        else {
            int mid = n.length() / 2;
            string s_left = n.substr(0, mid);
            string s_right = n.substr(mid);
            return hammingWeightHelper(s_left) + hammingWeightHelper(s_right);
        }
    }

    int hammingWeight(uint32_t n) {
        string s = bitset<32>(n).to_string();
        return hammingWeightHelper(s);
    }
};
