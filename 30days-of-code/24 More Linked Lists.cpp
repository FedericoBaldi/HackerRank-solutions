// https://www.hackerrank.com/challenges/30-linked-list-deletion
Node* removeDuplicates(Node *head){
	vector<int> values;
	Node *returnHead = head;
	Node *previousNode = head;
	while (head != NULL) {
		bool isDuplicate = false;
		int index = 0;
		while(!isDuplicate && index < values.size()) {
			if (head->data == values[index])
				isDuplicate = true;
			index++;
		}
		if (isDuplicate){
			previousNode->next = head->next;
			delete head;
			head = previousNode->next;
		}
		else {
			values.push_back(head->data);
			previousNode = head;
			head = head->next;
		}
	}
	return returnHead;
}