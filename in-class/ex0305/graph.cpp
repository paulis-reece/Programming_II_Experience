/*************************************************************************
 *
 * Exercise: Graph Structure
 *
 * File Name:   graph.cpp
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
        void addLinkTo(Node* node);
        void print();
    private:
        int value;
        vector<Node*> links;
};

void Node::addLinkTo(Node* node) {
    for (int i = 0; i < links.size(); ++i) {
        if (links.at(i) == node) {
            return;
        }
        links.push_back(node);
        node->addLinkTo(this);
    }
}

void Node::print() {
}

int main() {
    srand(0);
    vector<Node*> nodes;
    for (int i = 0; i < 4; ++i) {
        nodes.push_back(new Node);
    }
    for (int i = 0; i < nodes.size(); ++i) {
        for (int j = i + 1; j < nodes.size(); ++j) {
            cout << i << " " << j << " " << nodes.size() << endl;
            nodes.at(i)->addLinkTo(nodes.at(j));
        }
    }
    for (int i = 0; i < nodes.size(); ++i) {
        nodes.at(i)->print();
    }
    return 0;
}
