// https://www.hackerrank.com/challenges/30-binary-trees
void levelOrder(Node * root){
      //Write your code here
      if (root != NULL){
        queue<Node *> qNodes;
        qNodes.push(root);
        
        while (!qNodes.empty()){
            Node * currentNode = qNodes.front();
            qNodes.pop();
            
            cout << currentNode->data << " ";
            if (currentNode->left != NULL) {
                qNodes.push(currentNode->left);
            }
            if (currentNode->right != NULL) {
                qNodes.push(currentNode->right);
            }
        }
      }
    }
