class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        std::sort(strs.begin(), strs.end());
        std::string first = strs[0];
        std::string last = strs[strs.size() - 1];
        int prefLen = 0;
        for(int i = 0; i < first.size() && i < last.size(); i++) {
            if (first[i] == last[i]) {
                prefLen++;
            } else {
                break;
            }
        }
        return first.substr(0, prefLen);
    }
};