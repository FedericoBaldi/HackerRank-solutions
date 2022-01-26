// https://www.hackerrank.com/challenges/30-queues-stacks
class Node{
    public:
     char c;
     Node *pointer;
     Node(char character) {
        c = character;
        pointer = NULL;
     }
};

class Solution {
    private:
    Node *stack = NULL; //pointer = before;
    Node *queue = NULL; //pointer = next;
    
    public:
    void pushCharacter(char character) {
        Node *newNode = new Node(character);
        if (stack == NULL) {
            stack = newNode;
        }
        else {
            newNode->pointer = stack;
            stack = newNode;
        }
    }
    void enqueueCharacter(char character) {
        Node *newNode = new Node(character);
        if (queue == NULL) {
            queue = newNode;
        }
        else {
            Node *head = queue;
            while (head->pointer != NULL) {
                head = head->pointer;
            }
            head->pointer = newNode;
        }
    }
    
    char popCharacter() {
        char c = stack->c;
        stack = stack->pointer;
        return c;
    }
    
    char dequeueCharacter() {
        char c = queue->c;
        queue = queue->pointer;
        return c;
    }
};