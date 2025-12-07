class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string,int> m;
        m["I"]  = 1;
        m["V"]  = 5;
        m["X"]  = 10;
        m["L"]  = 50;
        m["C"]  = 100;
        m["D"]  = 500;
        m["M"]  = 1000;
        m["IV"] = 4;
        m["IX"] = 9;
        m["XL"] = 40;
        m["XC"] = 90;
        m["CD"] = 400;
        m["CM"] = 900;

        int ans = 0;
        int i = 0;

        while (i < s.size()) {

            if (i < s.size() - 1) {
                string sub2 = s.substr(i, 2);   
                auto it2 = m.find(sub2);
                if (it2 != m.end()) {
                    ans += it2->second;
                    i += 2;                     
                    continue;
                }
            }

            string sub1 = s.substr(i, 1);
            auto it1 = m.find(sub1);
            ans += it1->second;
            i += 1;                             
        }

        return ans;
    }
};
