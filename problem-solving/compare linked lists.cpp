# https://www.hackerrank.com/challenges/compare-two-linked-lists
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    bool result = true;
    while (result == true && head1 != NULL && head2 != NULL) {
        if ((head1->next != NULL && head2->next == NULL) || 
            (head1->next == NULL && head2->next != NULL) || 
            	head1->data != head2->data) {
            result = false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return result;
}