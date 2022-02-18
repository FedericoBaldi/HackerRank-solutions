# https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int nodeValue;
    int nNodes = 0;
    SinglyLinkedListNode *head = llist;
    while (llist != NULL) {
        nNodes++;
        llist = llist->next;
    }
    
    while (head != NULL && nNodes - positionFromTail != 1) {
        nNodes--;
        head = head->next;
    }
    nodeValue = head->data;
    return nodeValue;
}