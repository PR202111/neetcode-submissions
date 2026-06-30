class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ngt(temperatures.size(),-1);
        vector<int> ans(temperatures.size(),0);
        stack<int> st;
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
                ngt[i] = st.top();
                ans[i] = ngt[i]-i;
            }

            st.push(i);
        }

        return ans;
    }
};
