class Solution {
public:
    bool isValid(string s) {
        stack<char> para;
        int i = 0;
        while (i < s.size()) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                para.push(s[i]);
                i++;
            } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (para.empty())
                    return false;
                char top = para.top();
                if ((s[i] == ')' && top=='(') || (s[i] == '}' && top=='{') || (s[i] == ']' && top=='[')) {
                    para.pop();
                    i++;
                } else
                    return false;
            }
        }
        if (para.empty())
            return true;
        return false;
    }
};