/**
* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if((list1==NULL && list2==NULL) || (list1!=NULL && list2==NULL)){
        return list1;
    }
    if (list1==NULL && list2!=NULL){
        return list2;
    }

    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp=result;
    if((list1->val)<(list2->val)){
        result=list1;
        list1=list1->next;
        temp=result;

    }
    else{
        result=list2;
        list2=list2->next;
        temp=result;
    }

    while(list1!=NULL && list2!=NULL){
        if((list1->val)<(list2->val)){
            temp->next=list1;
            temp=temp->next;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            temp=temp->next;
            list2=list2->next;
        }
    }
    if (list1!=NULL){
        temp->next=list1;
    }
    if(list2!=NULL){
        temp->next=list2;
    }
    return result;

}