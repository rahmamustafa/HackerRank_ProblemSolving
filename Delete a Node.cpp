SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode *prev= llist;
    SinglyLinkedListNode *temp = prev->next;


    int count=0;
    if(position==0){
        llist = llist->next;
        return llist;
    }
    while(count<position-1){
            prev = prev->next;
            count++;

        
    }
            temp = prev->next;
            prev->next = temp->next;
            
    return llist;
}