// https://www.hackerrank.com/challenges/tree-level-order-traversal
void levelOrder(Node * root) {
	if(root != NULL){
		queue<Node *> nodeQueue;
		nodeQueue.push(root);
		while(nodeQueue.empty() != true){
			Node * frontNode = nodeQueue.front();
			nodeQueue.pop();
			cout << frontNode->data << " ";
			if(frontNode->left != NULL){
				nodeQueue.push(frontNode->left);
			}
			if(frontNode->right != NULL){
				nodeQueue.push(frontNode->right);
			}
		}
	}
}