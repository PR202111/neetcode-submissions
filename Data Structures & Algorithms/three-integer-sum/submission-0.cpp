class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int l = j+1;
                int r = nums.size()-1;
                while(r>=l){
                    int mid = l+(r-l)/2;
                    if(nums[i]+nums[j]+nums[mid] == 0){
                        ans.insert({nums[i],nums[j],nums[mid]});
                        break;
                    }
                    else if(nums[i]+nums[j]+nums[mid] > 0){
                        r--;
                    }
                    else l++;
                }
            }
        }
        vector<vector<int>> ans2;
        for(auto it:ans){
            ans2.push_back(it);
        }
        return ans2;
        
    }
};
