// https://www.hackerrank.com/challenges/30-linked-list
Node* insert(Node *head,int data){
  if (head == NULL) {
	head = new Node(data);
  }
  else {
	Node *list = head;
	while (list->next != NULL) {
		list = list->next;
	}
	list->next = new Node(data);
  }
  return head;
}