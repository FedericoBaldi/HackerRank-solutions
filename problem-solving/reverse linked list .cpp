# https://www.hackerrank.com/challenges/reverse-a-linked-list
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode * headReverse = NULL;
    while (llist != NULL) {
        SinglyLinkedListNode * currentHead = headReverse;
        headReverse = new SinglyLinkedListNode(llist->data);
        headReverse->next = currentHead;
        llist = llist->next;
    }
    return headReverse;
}