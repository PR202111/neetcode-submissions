class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int l = i+1;
            int r = nums.size()-1;
            while(r>l){
                if(nums[i]+nums[l]+nums[r] == 0){
                    ans.insert({nums[i],nums[l],nums[r]});
                    r--;
                    l++;
                }
                else if(nums[i]+nums[l]+nums[r] > 0){
                    r--;
                }
                else l++;
            }
            
        }
        vector<vector<int>> ans2;
        for(auto it:ans){
            ans2.push_back(it);
        }
        return ans2;
        
    }
};
