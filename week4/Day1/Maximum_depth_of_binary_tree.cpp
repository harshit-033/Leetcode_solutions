
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int ans=0;

        if(root==NULL){
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);



        while(!q.empty()){

            int size=q.size();

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();

                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            }
            ans++;
        }

        return ans;

    }
};