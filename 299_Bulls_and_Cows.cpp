//Bulls and Cows
//https://leetcode.com/problems/bulls-and-cows/description/
class Solution {
public:
    string getHint(string secret, string guess) {
        map<char,int> mp1,mp2;
        int bulls = 0, cows = 0;
        for(int i = 0; i < guess.size(); i++){
           if(secret[i] == guess[i]){
               bulls++;
           }
           else{
               mp1[guess[i]]++;
           } 
        }
        for(int i = 0; i < secret.size(); i++){
            if(secret[i] != guess[i] && mp1.find(secret[i]) != mp1.end()){
                mp1[secret[i]]--;
                if(mp1[secret[i]] == 0){
                    mp1.erase(secret[i]);
                }
                cows++;
            }
        }
        string s = to_string(bulls) + 'A' + to_string(cows) + 'B';
        return s;
    }
};
