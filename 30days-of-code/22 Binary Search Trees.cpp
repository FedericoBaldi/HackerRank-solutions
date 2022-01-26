// https://www.hackerrank.com/challenges/30-binary-search-trees
int getHeight(Node* root){
  int height = -1;
  if(root != NULL){
		height = 1 + max(getHeight(root->left), getHeight(root->right));
  }
  return height;
}
