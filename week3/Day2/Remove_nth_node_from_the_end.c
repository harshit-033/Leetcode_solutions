/**
* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    int size=0;
    struct ListNode* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        size++;
    }

    if(size==0){
        struct ListNode* temp2=NULL;
        return temp2;
    }


    n=size-n;
    if(n==-1){
        head=head->next;
        return head;
    }

    struct ListNode* head1=head;


    while(n!=0){
        head1=head1->next;
        n--;
    }
    struct ListNode* temp3=head1->next;
    head1->next=temp3->next;
    temp3->next=NULL;
    return head;
}