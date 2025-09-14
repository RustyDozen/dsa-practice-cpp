class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        int l = 0;
        int r = std::to_string(x).size() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};