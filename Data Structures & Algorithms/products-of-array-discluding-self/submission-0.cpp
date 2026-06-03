class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero_count = 0;
        for(int num:nums){
            if(num != 0){
                product *= num;
            }
            else zero_count++;
        }
        if(zero_count>1){
            vector<int> ans(nums.size(),0);
            return ans;
        }
        vector<int> ans;
        for(int num:nums){
            if(num == 0 && zero_count == 1){
                ans.push_back(product);
            }
            else if(num != 0 && zero_count == 1){
                ans.push_back(0);
            }
            else{
                ans.push_back(product/num);
            }
        }

        return ans;
    }
};
