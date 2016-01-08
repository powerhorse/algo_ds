# Swap adjacent in linked list.

struct ListNode {

};
struct ListNode* swapPairs(struct ListNode* head) {

    struct ListNode* first,*scnd,*iter = head, *prev=head;

    if(!head){

        return NULL;

    }

    while(iter && iter->next){

        first = iter;

        scnd = iter->next;

        first->next = scnd->next;

        if(prev == head){

            head = scnd;

        }

        else{

            prev->next = scnd;

        }
        scnd->next = first;
        prev = first;
        iter = first->next;
    }
    return head;

}
