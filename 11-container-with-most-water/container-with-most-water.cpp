class Solution {
public:
    int maxArea(vector<int>& height) {
        int curr_water = 0;
        int n = height.size();
        int m_water = 0;
        int lp =0;
        int rp = n-1;
        while(lp < rp){
            int w = rp- lp;
            int ht = min(height[lp], height[rp]);
            int water = w*ht;
            m_water = max(m_water, water);
            height[lp] < height[rp] ? lp++:rp--;

        }
        return m_water;
    }
};