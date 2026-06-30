class Solution {
public:
    bool isPossible(unordered_map<char,int>& map1,unordered_map<char,int> map2){

        for(auto &p : map1){
            if(map2[p.first] < p.second)
                return false;
        }
        return true;
        
      
    }
    string minWindow(string s, string t) {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        for(char c:t){
            map1[c]++;
        }
        int l=0;
        int ll = -1;
        int rr = -1;
        int len = INT_MAX;
        for(int i=0;i<s.length();i++){
            map2[s[i]]++;
            while(l<=i && isPossible(map1,map2)){
                map2[s[l]]--;
                if(map2[s[l]]==0) map2.erase(s[l]);
                if(len > i-l+1){
                    len = i-l+1;
                    ll = l;
                    rr = i;
                }
                l++;
            }
        }
        if(ll == -1) return "";

        string ans = s.substr(ll,rr-ll+1);

        return ans;
        
    }
};
