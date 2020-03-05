/*************************************************************************
 *
 * Exercise: Tree Structure
 *
 * File Name:   tree.cpp
 * Username:  	?
 * Username:  	?
 * Course:      CPTR 142
 *
 */

#include <iostream>     // for cin and cout
#include <vector>
using namespace std;

class Node {
    public:
        Node() { this->value = rand() % 100; }
        int getValue() { return value; }
        void addLevels(int levels);
        void print(string indent);
    private:
        int value;
        vector<Node *> children;
};

void Node::addLevels(int levels) {
    if (levels == 0) {
        return;
    }
    int childrenCount = rand() % 4; // allow zero to three children
    for (int i = 0; i <= childrenCount; ++i) {
        Node* child = new Node;
        child->addLevels(rand() % levels);   //
        children.push_back(child);
    }
}

void Node::print(string indent) {
}

int main() {
    srand(0);
    Node* root = new Node;
    root->addLevels(4);
    return 0;
}
