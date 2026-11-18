class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>mpp;
        for(int n:nums){
            if(mpp.count(n)){
                return true;

            }
            mpp.insert(n);
        }
        return false;


        
    }
};