class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ngt(temperatures.size(),-1);
        stack<int> st;
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
                ngt[i] = st.top();
            }

            st.push(i);
        }

        vector<int> ans(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            if(ngt[i] != -1){
                ans[i] = ngt[i]-i;
            }
        }

        return ans;
    }
};
