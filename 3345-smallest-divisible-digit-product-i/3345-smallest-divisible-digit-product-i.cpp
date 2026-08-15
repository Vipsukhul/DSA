class Solution {
public:
    int smallestNumber(int n, int t) {
        
        while(true){
            int x=n;
            //crete product of its digits product 
            int product=1;
            while(x){
                product*=x%10;
                x/=10;
            }
            if(product%t==0) return n;
            n++;
        }
    }
};