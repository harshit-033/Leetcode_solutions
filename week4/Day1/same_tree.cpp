class Solution {
public:


    int checkdepth(struct TreeNode* p, struct TreeNode* q){
        if(p==NULL && q!=NULL){
            return -1;
        }
        if(q==NULL && p!=NULL){
            return -1;
        }
        if(p==NULL && q==NULL){
            return 0;
        }
        int left=checkdepth(p->left,q->left);
        if(left==-1) return -1;
        int right=checkdepth(p->right,q->right);
        if(right==-1) return -1;
        return 1;

    }

    bool check(struct TreeNode* p, struct TreeNode* q){

        if(p==NULL && q!=NULL){
            return false;
        }
        if(q==NULL && p!=NULL){
            return false;
        }
        if(p==NULL && q==NULL){
            return true;
        }
        if(p->val!=q->val){
            return false;
        }
        int left=check(p->left,q->left);
        if(!left) return false;
        int right=check(p->right,q->right);
        if(!right) return false;
        return true;

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int x=checkdepth(p,q);
        bool y=check(p,q);
        if(x==-1 || y==false){
            return false;
        }
        return true;

    }
};
