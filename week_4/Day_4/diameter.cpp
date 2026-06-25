
class Solution {
public:
int ans=0;
int height(TreeNode* root){
    if(root==NULL) return 0;
    int leftHT=height(root->left);
    int rightHT=height(root->right);

    ans=max(leftHT+rightHT,ans);
    return max(leftHT,rightHT)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};
