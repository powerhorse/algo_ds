#include <stdio.h>

# Fill in code here.
struct ListNode* reverseList(struct ListNode* head) {

    //return reverseRecur(head, NULL);

    struct ListNode* temp=head,*prev=NULL;

    while(head){

        temp = head->next;

        head->next = prev;

        prev = head;

        head = temp;

    }

    return prev;

}
