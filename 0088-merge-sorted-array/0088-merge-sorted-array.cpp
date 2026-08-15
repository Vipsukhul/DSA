class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;//we are using three pointers here
        while(i>=0 && j>=0){
            if(nums1[i]<=nums2[j]){
                nums1[k--]=nums2[j--];
            }else{
                nums1[k--]=nums1[i--];
            }
        }
        //if i ended up first then loop but if j ended up first then i are already arranged there
        while(j>=0){
                nums1[k--]=nums2[j--];
            }


    }
};