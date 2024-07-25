class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int odd_pos=0; 
        
        for(int i=0;i<n;i++){
            char c = num[i];
            int a =c-'0';
            if(a%2==1){
odd_pos=i+1;
            }
}
        string ans="";
        if(odd_pos>0){
ans+=num.substr(0,odd_pos);}
        
        return ans;
    }
};