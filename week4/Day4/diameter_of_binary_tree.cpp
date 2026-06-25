class Solution {
public:
    int dia=0;
    int diam(TreeNode* root){
        if(root==NULL) return 0;

        int left=1+diam(root->left);
        int right=1+diam(root->right);
        int current=(left+right-1);
        dia=(current>dia)?current-1:dia;
        return max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        diam(root);
        return dia;

    }
};