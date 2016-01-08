#Reverse a linked list recursively.

struct ListNode* reverseRecur(struct ListNode *in,struct ListNode* rev){

    struct ListNode* temp;

    if(!in){

        return rev;

    }

    temp = in;

    in = in->next;

    temp->next = rev;

    return reverseRecur(in,temp);

}
