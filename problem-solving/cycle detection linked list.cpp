# https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle
bool has_cycle(SinglyLinkedListNode* head) {
    bool hasCycle = false;
    vector<SinglyLinkedListNode *> nodes;
    
    while (head != NULL && hasCycle == false) {
        if (find(nodes.begin(),nodes.end(),head) != nodes.end()) {
            hasCycle = true;
        }
        else {
            nodes.push_back(head);
        }
        head = head->next;
    }
    return hasCycle;
}