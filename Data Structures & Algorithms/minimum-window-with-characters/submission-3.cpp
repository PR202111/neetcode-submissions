class Solution {
public:
    
    string minWindow(string s, string t) {
        unordered_map<char,int> need;
        unordered_map<char,int> window;
        for(char c:t){
            need[c]++;
        }
        int l=0;
        int ll = -1;
        int rr = -1;
        int len = INT_MAX;
        int formed = 0;
        int required = need.size();

        for(int i=0;i<s.length();i++){
            window[s[i]]++;
            if(window[s[i]]==need[s[i]]) formed++;

            while(formed == required){
                if(len > i-l+1){
                    len = i-l+1;
                    ll = l;
                    rr = i;
                }
                window[s[l]]--;
                if(window[s[l]] < need[s[l]]) formed--;
                l++;
            }
        }
        if(ll == -1) return "";

        string ans = s.substr(ll,rr-ll+1);

        return ans;
        
    }
};
