class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=nums.size()-1;
       int l=n;
       for(int i=n-1;i>=0;i--){
           if(i+nums[i]>=l){
               l=i;
           }
       }
       return l==0?true:false;
    }
};
