# https://www.hackerrank.com/challenges/tree-postorder-traversal
void postOrder(Node *root) {
	if (root != NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << " ";
	}
}