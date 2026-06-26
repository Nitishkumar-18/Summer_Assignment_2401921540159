class Codec {
public:
    void preorder(TreeNode* root, string &s) {
        if (root == NULL) {
            s += "#,";
            return;
        }
        s += to_string(root->val) + ",";
        preorder(root->left, s);
        preorder(root->right, s);
    }
    string serialize(TreeNode* root) {
        string s = "";
        preorder(root, s);
        return s;
    }
    // Deserialize
    TreeNode* build(string &data, int &i) {
        if (data[i] == '#') {
            i += 2;        // Skip "#,"
            return NULL;
        }
        string num = "";
       while (i < data.size() && data[i] != ',') {
            num += data[i];
            i++;
        }
        i++;   // Skip comma
        TreeNode* root = new TreeNode(stoi(num));
        root->left = build(data, i);
        root->right = build(data, i);
        return root;
    }
    TreeNode* deserialize(string data) {
        int i = 0;
        return build(data, i);
    }
};
