class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int> map;
       int ans = 0;
       int l = 0;
       for(int i=0;i<s.length();i++){
            map[s[i]]++;
            while(l<i && map[s[i]] > 1){
                map[s[l]]--;
                l++;
            }

            ans = max(ans,i-l+1);

        } 

        return ans;
    }
};
