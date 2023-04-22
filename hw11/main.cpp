/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 24 april 23
 *
 * 21.1: Binary Tree Template
 *
 *      make tree for any data type
 *
 *      show working with main
 *
 */

#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {

    BinaryTree<int> intTree;
    BinaryTree<double> doubleTree;

    intTree.insertLeaf(3);
    intTree.insertLeaf(5);
    intTree.insertLeaf(-2);
    intTree.insertLeaf(42);
    intTree.insertLeaf(10);

    doubleTree.insertLeaf(11.11);
    doubleTree.insertLeaf(-0.567);
    doubleTree.insertLeaf(34.09);
    doubleTree.insertLeaf(2.2);
    doubleTree.insertLeaf(-10.5);

    intTree.removeLeaf(7);
    intTree.removeLeaf(5);

    doubleTree.searchTree(2.4);
    doubleTree.searchTree(2.2);

}
