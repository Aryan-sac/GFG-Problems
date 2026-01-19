/*
struct Node {
    int data;
    struct Node* next;
};
*/
struct Node* sortedMerge(struct Node* head1, struct Node* head2) {
    // Code here
    struct Node* head=NULL, *tail=NULL;
    
    while(head1!=NULL && head2!=NULL){
        if(head == NULL){
            if(head1->data <= head2->data)
            {
                head = head1;
                tail = head;
                head1 = head1->next;
            }
            else if(head2->data < head1->data)
            {
                head = head2;
                tail = head;
                head2 = head2->next;
            }
        }
        else{
            if(head1->data <= head2->data)
            {
                tail->next = head1;
                head1 = head1->next;
            }
            else if(head2->data < head1->data)
            {
                tail->next = head2;
                head2 = head2->next;
            }
                
            tail = tail->next;
        }
    }
    if(head1!= NULL)
        tail->next = head1;
        
    else if(head2!=NULL)
        tail->next = head2;
    
    return head;
}




