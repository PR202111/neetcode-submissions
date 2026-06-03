class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> map;
        
        for(string s:strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            map[temp].push_back(s);
        }
        for(auto it:map){
            ans.push_back(it.second);
        }

        return ans;

    }
};
