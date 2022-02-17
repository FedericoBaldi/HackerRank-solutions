# https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    vector<int> values;
    SinglyLinkedListNode *head = llist;
    SinglyLinkedListNode *previousNode = llist;
    while (llist != NULL) {
        if (find(values.begin(), values.end(), llist->data) == values.end()) {
            values.push_back(llist->data);
            previousNode = llist;
            llist = llist->next;
        }
        else {
            previousNode->next = llist->next;
            delete llist;
            llist = previousNode->next;
        }
    }
    return head;
}