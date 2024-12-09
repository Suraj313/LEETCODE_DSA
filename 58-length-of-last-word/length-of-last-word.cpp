class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int index=n-1;
        for(int i=n-1;i>=0;i--){
            if(isspace(s[i])) continue; 
            else{
                index=i;
                break;
            }
        }
        int count=0;
        for(int j=index;j>=0;j--){
            if(!isspace(s[j])) count++;
            else break;
        }
    return count;    
    }
};