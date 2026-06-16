/**
* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        unordered_map<int,int> mp;

        struct ListNode* slow=head;
        struct ListNode* fast=head;
        int count=0;
        int len=0;

        while(fast!=NULL && fast->next!=NULL){
            mp[count]=slow->val;
            count++;
            len+=2;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==NULL)
        {len--;}
        else{
            slow=slow->next;
            count++;
        }

        if(len==0) return true;

        while(slow!=NULL){
            if(mp[len-count]!=slow->val) return false;
            count++;
            slow=slow->next;
        }


        return true;
    }
};