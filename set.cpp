class Solution {
public:
    int smallestNumber(int n) {
       int i=0;
       if(n==1){return 1;}
       while(pow(2,i)<=n){
        i++;

       }
       return pow(2,i)-1;
    }
};
