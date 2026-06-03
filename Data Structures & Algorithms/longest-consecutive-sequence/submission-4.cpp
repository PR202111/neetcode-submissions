class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> map;
        
        for(int i=0;i<nums.size();i++){
            map[nums[i]] = 1;
        }
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int count = 1;
            if(map.find(nums[i]-1) == map.end()){
                int num = nums[i]+1;
                while(map.find(num) != map.end()){
                    num++;
                    count++;
                }

                ans = max(ans,count);
            }
        }

        return ans;
    }
};
