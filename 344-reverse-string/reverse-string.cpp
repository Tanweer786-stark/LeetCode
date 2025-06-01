class Solution {
public:
    void reverseString(vector<char>& s) {
        int r = 0;
        int e = s.size() - 1;

        while(r<e){
            swap(s[r++], s[e--]);
        }
    }
};