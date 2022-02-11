# https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list
void printLinkedList(SinglyLinkedListNode* head) {
    if (head != NULL) {
        cout << head->data << endl;
        printLinkedList(head->next);
    }
}