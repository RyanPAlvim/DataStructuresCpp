#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data;
    Node* next;

    Node();
    Node(int val);
    Node(int val, Node* nextNode);
};

#endif // NODE_H