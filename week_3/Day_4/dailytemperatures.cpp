class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st; // stores indices
        for(int i = n - 1; i >= 0; i--) {
            while(st.size() > 0 &&
                  temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }
            if(st.size() > 0) {
                ans[i] = st.top() - i;
            }
            st.push(i);
        }
        return ans;
    }
};
