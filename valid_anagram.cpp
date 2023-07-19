class Solution {
public:
    bool isAnagram(string s, string t) {
        //count characters in s
        if(s.length() == t.length()){
            unordered_map<char,int> ms;
            unordered_map<char,int> mt;
            for(int i = 0; i < s.length(); i++ ) {
                ms[s[i]]++;
            }
            for(int i = 0; i < t.length(); i++ ) {
                mt[t[i]]++;
            }   
            for(auto i : ms) {
                char c = i.first;
                int count_s = i.second;
                int count_t = mt[c];
                if(count_s != count_t) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
};


//slow solution
/*
    bool isAnagram(string s, string t) {
        return (s.size() == t.size() ? (sort(s.begin(), s.end()), sort(t.begin(), t.end()), s == t) : false);
    }
*/
