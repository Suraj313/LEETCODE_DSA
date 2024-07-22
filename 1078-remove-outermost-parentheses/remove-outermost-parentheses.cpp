class Solution {
public:
    string removeOuterParentheses(string s) {
        int open_count =0;
        int end_count=0;
        string res="";
        int start=0;
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(c=='('){
               open_count++;
            }
            else if(c==')'){
               end_count++;
             }
            if(open_count==end_count && open_count>0){
               res +=s.substr(start+1,i-start-1);
                start=i+1;
            }
            
        }
        return res;
    }
};