class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for(char &c : s) {
            if(c == '(' || c == '[' || c == '{') {
                a.push(c);
            } else {
                if (a.empty()) return false;
                if(a.top() == '(' && c == ')') a.pop();
                else if (a.top() == '[' && c == ']') a.pop();
                else if(a.top() == '{' && c == '}') a.pop();
                else return false;
            }
        }
        return a.empty();
    }
};