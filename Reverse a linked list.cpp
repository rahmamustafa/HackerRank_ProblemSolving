SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *curr = llist;
    SinglyLinkedListNode * prev = NULL;
    SinglyLinkedListNode *temp = curr;
    while(curr){
        temp = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = temp;
    }
    return prev;
}