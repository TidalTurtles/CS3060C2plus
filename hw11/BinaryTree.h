//
// Created by noah holt on 4/22/23.
//

#ifndef HW11_BINARYTREE_H
#define HW11_BINARYTREE_H

template <class T>
class BinaryTree {

private:

    // leaf struct
    struct Leaf
    {
        T value;
        Leaf *left;
        Leaf *right;
    };

    //hold onto the root
    Leaf *root;

    //private classes
    void insert(Leaf *&, Leaf *&);
    void deleteLeaf(T, Leaf *&);
    void disappear(Leaf *&);

public:

    //constructor
    BinaryTree()
    { root = nullptr; }

    //simple operations
    void insertLeaf(T);
    bool searchTree(T);
    void removeLeaf(T);

};


#endif //HW11_BINARYTREE_H
