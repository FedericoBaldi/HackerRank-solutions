# https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode *previousNode = llist;
    if (position == 0) {
        llist = llist->next;
        delete previousNode;
    }
    else{
        for (int index = 0; index < position-1; index++) {
            previousNode = previousNode->next;
        }
        SinglyLinkedListNode *nextNode = previousNode->next;
        previousNode->next = nextNode->next;
        delete nextNode;
    }
    return  llist;
}