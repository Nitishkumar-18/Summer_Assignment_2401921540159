class Solution {
public:
    void printlevel(TreeNode* root,int curr,int level,vector<int>&v){
    if(root==NULL) return;
    if(curr==level){
        v.push_back(root->val);
        return;
    }
    printlevel(root->left,curr+1,level,v);
    printlevel(root->right,curr+1,level,v);//isko upar krne pr reverse order m print hoga ...
   }
    void printlevelroot(TreeNode* root,int curr,int level,vector<int>&v){
    if(root==NULL) return;
    if(curr==level){
        v.push_back(root->val);
        return;
    }
    printlevelroot(root->right,curr+1,level,v);//isko upar krne pr reverse order m print hoga ...
    printlevelroot(root->left,curr+1,level,v);
   }
    int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
  }
   void lorder(TreeNode* root, vector<vector<int>>&ans){
    int n=levels(root);
      for(int i=1;i<=n;i++){
           vector<int>v;
           if(i%2!=0){
            printlevel(root,1,i,v);
           }
           else{
             printlevelroot(root,1,i,v);
           }
            ans.push_back(v);
            cout<<endl;

        }
   }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
         lorder(root,ans);
         return ans;
    }
};
