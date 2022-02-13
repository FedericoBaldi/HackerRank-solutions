# https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    if (llist != NULL) {
        SinglyLinkedListNode *currentHead = llist;
        llist = new SinglyLinkedListNode(data);
        llist->next = currentHead;
    }
    else {
        llist = new SinglyLinkedListNode(data);
    }
    return llist;
}