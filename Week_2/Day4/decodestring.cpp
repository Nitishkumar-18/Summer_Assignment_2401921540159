class Solution {
public:
    string decodeString(string s) {
        stack<int> cs;
        stack<string> ss;
        string curr = "";
        int num = 0;
        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                cs.push(num);
                ss.push(curr);
                num = 0;
                curr = "";
            }
            else if (ch == ']') {
                int repeat = cs.top();
                cs.pop();
                string prev = ss.top();
                ss.pop();
                string temp = "";
                for (int i = 0; i < repeat; i++) {
                    temp += curr;
                }
                curr = prev + temp;
            }
            else {
                curr += ch;
            }
        }
        return curr;
    }
};
