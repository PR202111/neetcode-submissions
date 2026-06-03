class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int num:nums){
            map[num]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it:map){
            pq.push({it.second,it.first});
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            auto it = pq.top();
            pq.pop();
            ans.push_back(it.second);
        }

        return ans;
    }
};
