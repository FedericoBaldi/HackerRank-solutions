# https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *headNew = NULL;
    SinglyLinkedListNode *current;
    while (head1 != NULL || head2 != NULL) {
        int data;
        if (head1 == NULL) {
            data = head2->data;
            head2 = head2->next;
        }
        else if (head2 == NULL) {
            data = head1->data;
            head1 = head1->next;
        }
        else if (head1->data >= head2->data) {
            data = head2->data;
            head2 = head2->next;
        }
        else {
            data = head1->data;
            head1 = head1->next;
        }
        
        if (headNew == NULL){
            headNew = new SinglyLinkedListNode(data);
            current = headNew;
        }
        else {
            SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
            current->next = newNode;
            current = newNode;
        }
    }
    return headNew;
}
