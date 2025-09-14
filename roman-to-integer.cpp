class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> myMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int len = s.size() - 1;
        int total = 0;
        int prev_val = 0;
        for (int i = len; i >= 0; i--) {
            int cur_val = myMap[s[i]];
            if (prev_val > cur_val) {
                total -= cur_val;
            } else {
                total += cur_val;
            }
            prev_val = cur_val;
        }
        return total;
    }
};