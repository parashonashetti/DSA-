class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector <int>maps(255, -1);
        vector<int>mapt(255, -1);

        for(int i = 0; i < s.size(); i++){
            char a = s[i];
            char b = t[i];
            if(maps[a] != -1 && maps[a]!= b){
                return false;
            }
            if (mapt[b] != -1 && mapt[b] != a) {
                return false;
            }

            maps[a] = b;
            mapt[b] = a;

        }
        return true;

        
    }
};