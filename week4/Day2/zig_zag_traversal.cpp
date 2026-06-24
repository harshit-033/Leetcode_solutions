class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        deque<TreeNode*> dq;
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        dq.push_front(root);
        int count=1;
        while(!dq.empty()){
            vector<int> t;
            int size=dq.size();
            if(count%2!=0){
                for(int i=0;i<size;i++){
                    TreeNode* node=dq.front();
                    dq.pop_front();
                    t.push_back(node->val);
                    if(node->left!=NULL){
                        dq.push_back(node->left);
                    }
                    if(node->right!=NULL){
                        dq.push_back(node->right);
                    }
                }
                count++;
            }
            else{
                for(int i=0;i<size;i++){
                    TreeNode* node=dq.back();
                    dq.pop_back();
                    t.push_back(node->val);
                    if(node->right!=NULL){
                        dq.push_front(node->right);
                    }
                    if(node->left!=NULL){
                        dq.push_front(node->left);
                    }

                }
                count++;

            }
            ans.push_back(t);

        }
        return ans;

    }
};