class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans =0;
        for(int i=0;i<n;i++){
            int count=1;
            ans=max(ans,count);
            string st="";
            st+=s[i];
            for(int j=i+1;j<n;j++){
                string sub = "";
                sub+=s[j];
                if (st.find(sub) != string::npos){
                    break;
                }
                st+=s[j];
                count++;
                ans=max(ans,count);
            }
        }
        return ans;
    }
};