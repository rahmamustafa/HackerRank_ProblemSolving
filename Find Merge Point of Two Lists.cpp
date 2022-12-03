int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp = head1;
    while(head2){
        temp =head1;
        while (temp) {
            if(temp==head2)
                return temp->data;
            temp = temp->next;
        }
         head2 = head2->next;
        
    }
    
    return -1;
}