class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> temp;

        for(int i=0; i<n-1; i++){
            int cur = nums[i];
            while(cur+1 != nums[i+1]){//sort ahe tr next element parynt check karaycha 
                temp.push_back(cur+1);
                cur++;
            }
        }
        return temp;
    }
};