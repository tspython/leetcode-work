class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> ans;

        //sort each string
        for(int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(strs[i].begin(), strs[i].end());
            m[strs[i]].push_back(s);
        }
        for(auto i : m) 
            ans.push_back(i.second);
        return ans;
    }
};

// too slow
/*
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> ms;
        for (char c : s) {
            ms[c]++;
        }

        for (char c : t) {
            ms[c]--;
            if (ms[c] < 0) {
                return false;
            }
        }

        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<bool> visited(strs.size(), false);

        for (int i = 0; i < strs.size(); i++) {
            if (!visited[i]) {
                vector<string> temp;
                temp.push_back(strs[i]);
                visited[i] = true;

                for (int j = i + 1; j < strs.size(); j++) {
                    if (!visited[j] && isAnagram(strs[i], strs[j])) {
                        temp.push_back(strs[j]);
                        visited[j] = true;
                    }
                }

                ans.push_back(temp);
            }
        }

        return ans;
    }
*/
