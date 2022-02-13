# https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode * previousNode = llist;
    for (int index = 0; index < position-1; index++) {
        previousNode = previousNode->next;
    }
    SinglyLinkedListNode *nextNode = previousNode->next;
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);
    previousNode->next = node;
    node->next = nextNode;
    return llist;
}