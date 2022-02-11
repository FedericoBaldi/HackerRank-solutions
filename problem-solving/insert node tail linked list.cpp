# https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if (head != NULL){
        if (head->next == NULL){
            SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
            head->next = newNode;
        }
        else {
            insertNodeAtTail(head->next, data);
        }
    }
    else {
        head = new SinglyLinkedListNode(data);
    }
    return head;
}