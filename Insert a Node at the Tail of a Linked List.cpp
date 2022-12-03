SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *temp = head;
    if(!head){
        head = node;
        return head;
     }
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = node;
    
    return head;
}
