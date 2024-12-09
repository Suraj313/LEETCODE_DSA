class Solution {
public:
    string intToRoman(int num) {
        
        string ans="";
        while(num!=0){
            string a=to_string(num);
            if(num>=1000){
               ans+='M';
               num-=1000;
            }
            else if(num<1000 && num>=500){
                if(a[0]=='9'){
                   ans+='C';
                   ans+='M';
                   num-=900;
                }
                else {
                   ans+='D';
                   num-=500;
                }
            }
            else if(num<500 && num>=100){
                if(a[0]=='4'){
                    ans+='C';
                    ans+='D';
                    num-=400;
                }
                else{
                    ans+='C';
                    num-=100;
                }
            }
            else if(num<100 && num>=50){
                if(a[0]=='9'){
                    ans+='X';
                    ans+='C';
                    num-=90;
                }
                else{
                    ans+='L';
                    num-=50;
                }
            }
            else if(num<50 && num>=10){
                  if(a[0]=='4'){
                    ans+='X';
                    ans+='L';
                    num-=40;
                }
                else{
                    ans+='X';
                    num-=10;
                }
            }
            else if(num<10 && num>=5){
                  if(a[0]=='9'){
                    ans+='I';
                    ans+='X';
                    num-=9;
                }
                else{
                    ans+='V';
                    num-=5;
                }
            }
            else{
                  if(a[0]=='4'){
                    ans+='I';
                    ans+='V';
                    num-=4;
                }
                else{
                    ans+='I';
                    num-=1;
                }
            }
        }
     return ans;   
    }
};