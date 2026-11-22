class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        for(int x: nums){
            if(m.find(x)!=m.end()){
                return true;
                break;
            }
            m.insert(x);
        }
        return false;
        
    }
};