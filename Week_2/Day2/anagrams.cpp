class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> a;
        int n = s.size();
        int m = p.size();
        if(m > n) return a;
        sort(p.begin(), p.end());
        for(int i = 0; i <= n - m; i++) {
            string t = s.substr(i, m);
            sort(t.begin(), t.end());
            if(t == p)
                a.push_back(i);
        }
        return a;
    }
};
