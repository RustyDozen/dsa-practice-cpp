class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                stack.push(')');
            } else if (s[i] == '{') {
                stack.push('}');
            } else if (s[i] == '[') {
                stack.push(']');
            } else {
                if (stack.empty() || stack.top() != s[i]) {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};