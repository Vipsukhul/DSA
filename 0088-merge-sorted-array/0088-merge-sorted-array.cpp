class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
    int i = 0, j = 0;
    vector<int>res;
    while(i<m && j<n){
        if(num1[i]<=num2[j]){
            res.push_back(num1[i]);
            i++;
        }else
            {
            res.push_back(num2[j]);
            j++;
        }
        
    }
    while(i<m){
        res.push_back(num1[i]);
            i++;
    }
    while(j<n){
        res.push_back(num2[j]);
            j++;
    }
    num1=res;
    }       
};