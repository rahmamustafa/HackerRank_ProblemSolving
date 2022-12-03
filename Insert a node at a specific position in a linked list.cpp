SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *temp = llist;
    int count=0;
    if(position==0){
        node->next = llist;
        llist = node;
        return llist;
    }
    while(temp->next&&position>count+1){
        temp = temp->next;
        count++;
    }
    if(temp->next){
            node->next = temp->next;
            temp->next = node;
    }
    return llist;
    }
