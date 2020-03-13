/*************************************************************************
 *
 * Homework: Grand Tour
 *
 * File Name:   Node.cpp
 * Username:  	reklre
 * Course:      CPTR 142
 * Date:        3/9/2020
 *
 */

#include <algorithm> // for find()
#include <iostream>  // for cin and cout
using namespace std;
#include "Node.h"

// static variable to hold the next label
char Node::nextLabel = 'A';

// add a link to a node
void Node::addLinkTo(Node *node, int cost) {
  // check to see if the link already exists
  for (int i = 0; i < linkAndCostPairs.size(); ++i) {
    if (linkAndCostPairs.count(node) == 1) {
      return;
    }
  }
  // add the link to this node
  linkAndCostPairs.emplace(node, cost);
  // and add a mirror link to here from there
  node->addLinkTo(this, cost);
}

// print a node with its links
void Node::print() {
  cout << "node " << (char)this->getLabel() << " has links to" << endl;
  for (auto linkAndCostPair : linkAndCostPairs) {
    cout << "  " << (char)(linkAndCostPair.first)->getLabel()
         << " with cost of " << linkAndCostPair.second << endl;
  }
}

int Node::costOfPath(deque<Node *> path) {
  Node *Nptr;
  // remove the current node from the front of the path
  path.pop_front();
  // if nothing more, then return cost of zero
  if (path.size() == 1) {
    return 0;
  }
  // return cost to next node plus cost from there to end
  Nptr = path.front();
  return this->linkAndCostPairs.at(Nptr) + costOfPath(path);
}

void Node::printPath(deque<Node *> path) {
  // print the current label
  cout << path.front()->getLabel();
  // remove the current node from the front of the path
  path.pop_front();
  // if something more, then print it (recursion)
  if (path.size() != 0) {
    printPath(path);
  } else {
    return;
  }
  // print a dash, then recurse to print remaining path
  cout << "-";
}

// add to a vector of paths leading back home
void Node::findPaths(deque<Node *> currentPath, vector<deque<Node *>> &allPaths,
                     string indent) {
  // cout << indent << "findPaths() - starting at " << label << endl;

  // BASE CASE 1: if `this` is not home but part of the current path, do nothing
  bool home = false;
  for (auto each : currentPath) {
    if (this == each) {
      home = true;
    }
    if (this != currentPath.front() && home) {
      return;
    }
  }
  // we are visiting a new node, so add `this` to end of the current path
  currentPath.push_back(this);
  // BASE CASE 2: if we left home and got back, add currentPath to allPaths
  if (currentPath.front()->getLabel() == this->getLabel()) {
    allPaths.push_back(currentPath);
  }
  // RECURSION: visit each child (link) and add any discovered paths
  for (auto each : linkAndCostPairs) {
    each.first->findPaths(currentPath, allPaths, indent + " ");
  }
}
