class Solution {
public:
    bool compare(vector<int>& hash1,vector<int>& hash2){
        for(int i=0;i<26;i++){
            if(hash1[i]!= hash2[i]) return 0;
        }

        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int> hash_s1(26,0);
        vector<int> hash_s2(26,0);
        for(char c:s1){
            hash_s1[c-'a']++;
        }
        int l = 0;
        for(int i=0;i<s2.length();i++){
            hash_s2[s2[i]-'a']++;
            if(i-l+1 == s1.size()){
                if(compare(hash_s1,hash_s2)) return true;
                hash_s2[s2[l]-'a']--;
                l++;
            }

        }

        return false;
    }
};
