class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int longest=0;
        for(int n:st){
            if(st.find(n-1)==st.end()){
                int cnt=1;
                int x=n;
                while(st.find(x+1)!=st.end()){
                    x++;
                    cnt++;
                }
                longest=max(longest, cnt);
            }
        }
        return longest;
        
    }
};
