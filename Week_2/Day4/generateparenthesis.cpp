class Solution {
public:
   void gp( vector<string>& ans,string s,int n,int cob,int ccb){
    if(ccb==n){
        ans.push_back(s);
        return;
    }
    if(cob<n){
        gp(ans,s+'(',n,cob+1,ccb);
    }
    if(ccb<cob){
        gp(ans,s+')',n,cob,ccb+1);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        gp(ans,"",n,0,0);
        return ans;
    }
};
