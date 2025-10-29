class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        map<char,int>n;
        for(auto it:s){
            m[it]++;
        }
        for(auto it:t){
            n[it]++;
        }
    return m == n;

    }
};