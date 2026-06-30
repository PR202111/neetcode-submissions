class Solution {
public:
    bool isOperator(string s){
        if(s == "+" || s=="-" || s=="*" || s=="/") return true;
        else return false;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if(isOperator(tokens[i])){
                int arg2 = st.top();
                st.pop();
                int arg1 = st.top();
                st.pop();
                int result;
                if(tokens[i] == "+") result = arg1+arg2;
                if(tokens[i] == "-") result = arg1-arg2;
                if(tokens[i] == "*") result = arg1*arg2;
                if(tokens[i] == "/") result = arg1/arg2;
                st.push(result);
            }
            else st.push(stoi(tokens[i]));
        }

        return st.top();
    }
};
