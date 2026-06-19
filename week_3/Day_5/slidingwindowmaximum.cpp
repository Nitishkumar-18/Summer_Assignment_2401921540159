class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        if(k==1) return arr;
      int n=arr.size();
      deque<int>dq;
      vector<int>ans;
      for(int i=0;i<n;i++){
        while(dq.size()>0 && arr[i]>arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        int j=i-k+1;
        while(j>dq.front()) dq.pop_front();
        if(i>=k-1) ans.push_back(arr[dq.front()]);
      }
      return ans;
    }
};
