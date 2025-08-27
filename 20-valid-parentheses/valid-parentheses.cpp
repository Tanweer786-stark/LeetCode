class Solution {
public:
    bool isValid(string s) {
        stack<char> r;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];  // get character from string

            // if opening bracket → push to stack
            if (ch == '(' || ch == '{' || ch == '[') {
                r.push(ch);
            } 
            else {
                // if stack empty → invalid
                if (r.empty()) return false;

                char top = r.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    r.pop();
                } else {
                    return false;
                }
            }
        }

        // valid if stack is empty at the end
        return r.empty();
    }
};
