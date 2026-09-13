class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char, int> v;
        for(int i =0; i<s.size(); i++){
            v[s[i]]++;
            v[t[i]]--;
        }
        for(auto x :v){
            if(x.second!=0){
                return false;
            }
        }
        return true;
    }
};