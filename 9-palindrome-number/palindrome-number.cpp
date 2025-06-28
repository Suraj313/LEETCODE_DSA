class Solution {
public:
    bool isPalindrome(int x) {
      int a=x;
      long b=0;
      if(a<0) return false;
      while(x!=0){
        int y=x%10;
        b=b*10+y;
        x=x/10;
      }
      if(a==b) return true;
      else return false;
    }
};