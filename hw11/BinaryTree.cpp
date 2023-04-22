//
// Tree People Everywhere
//

#include <iostream>
#include "BinaryTree.h"

using namespace std;

template <class T>
void BinaryTree<T>::insertLeaf(T val)
{

    Leaf *newLeaf = nullptr;

    //create
    newLeaf = new Leaf;
    newLeaf->value = val;
    newLeaf->left = newLeaf->right = nullptr;

    //call real insert func
    insert(root, newLeaf);

}

template <class T>
void BinaryTree<T>::insert(BinaryTree::Leaf *&leafPtr, BinaryTree::Leaf *&newLeaf)
{

    if(leafPtr == nullptr)
        leafPtr = newLeaf;
    else if(newLeaf->value < leafPtr->value)
        insert(leafPtr->left, newLeaf);
    else
        insert(leafPtr->right, newLeaf);

}

template <class T>
bool BinaryTree<T>::searchTree(T val)
{

    Leaf *leafPtr = root;

    //search
    while (leafPtr)
    {

        if (leafPtr->value == val)
            return true;
        else if (val < leafPtr->value)
            leafPtr = leafPtr->left;
        else
            leafPtr = leafPtr->right;

    }

    return false;

}

template <class T>
void BinaryTree<T>::removeLeaf(T val)
{
    deleteLeaf(val, root);
}

template <class T>
void BinaryTree<T>::deleteLeaf(T val, BinaryTree::Leaf *&leafPtr)
{

    if (val < leafPtr->value)
        deleteLeaf(val, leafPtr->left);
    else if (val > leafPtr->value)
        deleteLeaf(val, leafPtr->right);
    else
        disappear(leafPtr);

}

template <class T>
void BinaryTree<T>::disappear(BinaryTree::Leaf *&leafPtr)
{

    Leaf *tempLeaf = nullptr;

    if (leafPtr == nullptr)
        cout << "Leaf to remove was not found!";
    else if (leafPtr->right == nullptr)
    {
        tempLeaf = leafPtr;
        leafPtr = leafPtr->left;
        delete tempLeaf;
    }
    else if (leafPtr->left == nullptr)
    {
        tempLeaf = leafPtr;
        leafPtr = leafPtr->right;
        delete tempLeaf;
    }
    else
    {
        tempLeaf = leafPtr->right;
        while (tempLeaf->left)
            tempLeaf = tempLeaf->left;
        tempLeaf->left = leafPtr->left;
        tempLeaf = leafPtr;

        leafPtr = leafPtr->right;
        delete tempLeaf;
    }

}

