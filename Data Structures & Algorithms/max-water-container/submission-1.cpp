class Solution {
public:
    int maxArea(vector<int>& heights) {
        int cap = 0;
        int l = 0;
        int r = heights.size()-1;
        while(r>l){
            cap = max(cap,(r-l)*min(heights[l],heights[r]));
            if(heights[r] > heights[l]){
                l++;
            }
            else r--;
        }

        return cap;
    }
};
