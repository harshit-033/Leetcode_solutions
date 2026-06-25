class Solution {
public:
    int dia=INT_MIN;
    int diam(TreeNode* root){
        if(root==NULL) return 0;

        int left=max(0,diam(root->left));
        int right=max(0,diam(root->right));
        int current=(left+right+root->val);
        dia=(current>dia)?current:dia;
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        diam(root);
        return dia;

    }
};