/**
* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode* result=head->next;
    struct ListNode* tail=result->next;
    head->next=NULL;
    while(result!=NULL){
        if(result->next==NULL){
            result->next=head;
            break;
        }
        result->next=head;
        head=result;
        result=tail;
        if(tail->next!=NULL){
            tail=tail->next;
        }


    }


    return result;



}