#include "no.h"
#include <iostream> // Para nullptr

Node::Node() : data(0), next(nullptr) {}

Node::Node(int val) : data(val), next(nullptr) {}

Node::Node(int val, Node* nextNode) : data(val), next(nextNode) {}