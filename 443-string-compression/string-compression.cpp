class Solution {
public:
    int compress(vector<char>& c) {
        int n = c.size();
        int idx = 0;

        for(int i = 0; i < n; i++) {
            char ch = c[i];
            int count = 0;

            while(i < n && ch == c[i]) {
                count++;
                i++;
            }

            if(count == 1) {
                c[idx++] = ch;
            }
            else {
                c[idx++] = ch;

                string str = to_string(count);

                for(char dig : str) {
                    c[idx++] = dig;
                }
            }

            i--;
        }

        c.resize(idx);
        return idx;
    }
};