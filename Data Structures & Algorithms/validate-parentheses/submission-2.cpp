class Solution {
public:
    char counter(char c){
        if(c==')') return '(';
        else if(c=='}') return '{';
        return '[';
    }
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c =='(' || c == '{' || c== '['){
                st.push(c);
            }
            else{
                if(st.empty() || st.top() != counter(c)) return false;
                st.pop();
            }

        }
        if(!st.empty()) return false;
        return true;
    }
};
