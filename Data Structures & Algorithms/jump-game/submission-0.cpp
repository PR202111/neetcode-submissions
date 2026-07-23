class Solution {
public:
    bool solve(int idx,vector<int>& nums){
        if(idx >= nums.size()-1) return true;
        bool ans = false;
        for(int i=idx+1;i<=idx+nums[idx];i++){
            ans = ans || solve(i,nums);
        }

        return ans;
        
    }
    bool canJump(vector<int>& nums) {
        return solve(0,nums);
    }
};
