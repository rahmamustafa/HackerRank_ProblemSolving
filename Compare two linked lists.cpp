bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    bool flag=1;
while(head2||head1){
    if(head2&&head1){
        if(head1->data == head2->data){
        head1 = head1->next;
        head2 = head2->next;
        }
        else
            return 0;
    }
    else 
        return 0;
}
return 1;
}