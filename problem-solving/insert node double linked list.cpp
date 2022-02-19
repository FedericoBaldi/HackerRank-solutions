# https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode *head = llist;
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data);
    if (head->data > data) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else {
        DoublyLinkedListNode *previousNode;
        while (llist != NULL && llist->data < data){
            previousNode = llist;
            llist = llist->next;
        }
        if (llist == NULL) {
            newNode->prev = previousNode;
            previousNode->next = newNode;
        }
        else {
            newNode->next = llist;
            newNode->prev = llist->prev;
            if (llist->prev != NULL) {
                llist->prev->next = newNode;
            }
            llist->prev = newNode;
        }
    }
    return head;
}