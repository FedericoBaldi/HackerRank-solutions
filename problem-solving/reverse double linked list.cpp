# https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list
DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode *headReverse = NULL;
    while (llist != NULL) {
        DoublyLinkedListNode *current = headReverse;
        headReverse = new DoublyLinkedListNode(llist->data);
        headReverse->next = current;
        if (current != NULL) {
            current->prev = headReverse;
        }
        llist = llist->next;
    }
    return headReverse;
}