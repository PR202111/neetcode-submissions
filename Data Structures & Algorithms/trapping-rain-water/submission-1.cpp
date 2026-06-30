class Solution {
public:
    vector<int> pgt(vector<int>& heights){
        vector<int> ans(heights.size(),-1);
        stack<int> st;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && st.top() <= heights[i]){
                st.pop();
            }

            if(!st.empty()){
                ans[i] = st.top();
            }

            if(st.empty() || (!st.empty() && st.top() < heights[i])){
            st.push(heights[i]);
            }
        }

        return ans;
    }
    vector<int> ngt(vector<int>& heights){
        vector<int> ans(heights.size(),-1);
        stack<int> st;
        for(int i=heights.size()-1;i>=0;i--){
            while(!st.empty() && st.top() <= heights[i]){
                st.pop();
            }

            if(!st.empty()){
                ans[i] = st.top();
            }

            if(st.empty() || (!st.empty() && st.top() < heights[i])){
            st.push(heights[i]);
            }
        }

        return ans;
    }
    int trap(vector<int>& heights) {
        vector<int> next_greater = ngt(heights);
        vector<int> prev_greater = pgt(heights);
        int ans = 0;
        for(int i=0;i<heights.size();i++){
            if(next_greater[i] != -1 && prev_greater[i] != -1){
                ans += (min(next_greater[i],prev_greater[i])-heights[i]);
            }
        }

        return ans;
    }
};
