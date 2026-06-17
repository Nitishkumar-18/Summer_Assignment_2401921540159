class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        stack<int>st;
       vector<int>nge(m);
           nge[m-1]=-1;
           st.push(nums2[m-1]);
        for(int i=m-2;i>=0;i--){
            while(st.size()>0 && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.size()==0) nge[i]=-1;
            else nge[i]=st.top();
            st.push(nums2[i]);
        }
         unordered_map<int, int> mp;
        for (int i = 0; i<m; i++) {
            mp[nums2[i]] = nge[i];
        }
        vector<int> ans;
        for (int x : nums1) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};
