class Solution {
public:
    bool self(int n){
        int x=n;
        while(x>0){
            //Check if Number containns 0
            // if(x%10==0) return false;
            if( x%10==0||n%(x%10)!=0)  return false;
            x/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(self(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};