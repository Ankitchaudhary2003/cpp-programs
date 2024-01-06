class Solution {
public:
      int ans=0;
       int rev;
       int reverse(int num) {
       while(num!=0){
           if((ans<INT_MIN/10)||(ans>INT_MAX/10)){
               return 0;
           }else{
        rev=num%10;
        ans=ans*10+rev;
        num=num/10;
           }
          
            }
             return ans;
       }

 
 };
