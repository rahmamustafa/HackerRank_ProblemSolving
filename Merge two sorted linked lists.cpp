SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
        SinglyLinkedListNode * temp = new SinglyLinkedListNode(0);    
        SinglyLinkedListNode * sorted = temp;
        SinglyLinkedListNode * temp2 = sorted;    

        int count =0;
        while (head1 && head2) {
            if(head1->data < head2->data){
                sorted = head1;
                cout<<sorted->data<<endl;
                head1 = head1->next;
            }
            else{
                sorted= head2;
                cout<<sorted->data<<endl;
                head2 = head2->next;
            }
            if(count==0){
                temp = sorted;
                count++;

            }
            temp2 = sorted;
            sorted = sorted ->next;
            temp2->next = sorted;
        }
        temp2 = sorted;
        sorted = sorted ->next;
        temp2->next = sorted;
        while(head1){
            sorted= head1;
            cout<<sorted->data<<endl;
            head1 = head1->next;
            temp2 = sorted;
            sorted = sorted ->next;
            temp2->next = sorted;
            }
        while(head2){
            sorted= head2;
            cout<<sorted->data<<endl;
            head2 = head2->next;
            temp2 = sorted;
            sorted = sorted ->next;
            temp2->next = sorted;
            }
    return temp;

}