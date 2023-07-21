class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> balloon_storage;
        for(int i = 0; i < text.length(); i++) 
            balloon_storage[text[i]] += 1;
        //balloon[l]/=2;
        //balloon[o]/=2;
        string balloon = "balloon";
        int count = 0;
        while(true) {
            for(int i = 0; i < balloon.length(); i++) {
                if(balloon_storage[balloon[i]] > 0) 
                    balloon_storage[balloon[i]]--;
                else 
                    return count;
            }
            count++;
        }
        return count;    
    }
};

//Beats 54.53%
//Memory 6.5 MB
