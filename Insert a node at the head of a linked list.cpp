SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode * node = new SinglyLinkedListNode(data);
    //SinglyLinkedListNode * temp = llist; 
    if(llist==NULL){
        llist = node;
        return llist;}
    else{
        
       node->next = llist;
       llist = node; 
    }
    return llist;
    
}
