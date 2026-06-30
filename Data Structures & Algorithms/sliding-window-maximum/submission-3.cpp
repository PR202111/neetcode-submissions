class Solution {
public:

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        int l = 0;
        vector<int> ans;
        priority_queue<pair<int,int>> heap;
        for(int i=0;i<nums.size();i++){
            heap.push({nums[i],i});
            if(i-l+1 == k){
                while(heap.top().second < l){
                    heap.pop();
                }

                ans.push_back(heap.top().first);
                l++;
            }
        }

        return ans;
        
    }
};
