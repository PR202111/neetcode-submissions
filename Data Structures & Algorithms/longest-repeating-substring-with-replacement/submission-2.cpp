class Solution {
public:
    int single_char_replacement(string s, int k,char c){
        int l = 0;
        int ans = 0;
        int cnt = 0;

        for (int r = 0; r < s.size(); r++) {
            if (s[r] != c)
                cnt++;

            while (cnt > k) {
                if (s[l] != c)
                    cnt--;
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
    int characterReplacement(string s, int k){
        int ans = 0;
        int l = 0;
        vector<int> hash(26);
        for(int i=0;i<s.length();i++){
            hash[s[i]-'A'] = 1;
        }
        for(int i=0;i<26;i++){
            if(hash[i])
                ans = max(ans,single_char_replacement(s,k,i+'A'));
        }
        
        return ans;
    }
};
