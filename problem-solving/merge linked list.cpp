# https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    int nodeData;
    while (head1 != NULL) {
        SinglyLinkedListNode * tmp = head1->next;
        head1->next = NULL;
        head1 = tmp;
    }
    while (head2->next != NULL) {
        head2 = head2->next;
    }
    return head2->data;
}