class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       set<char> map;
       int ans = 0;
       int l = 0;
       for(int i=0;i<s.length();i++){
            if(map.find(s[i]) != map.end()){
                while(l<i && s[l] != s[i]){
                    map.erase(s[l]);
                    l++;
                }
                l++;
            }
            else map.insert(s[i]);
            

            ans = max(ans,i-l+1);

        } 

        return ans;
    }
};
