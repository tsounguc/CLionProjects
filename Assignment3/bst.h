#ifndef HW3_BST_H
#define HW3_BST_H

class BinarySearchTree {
private:
    struct BinaryNode {
        int data;
        BinaryNode *left;
        BinaryNode *right;
    };
    BinaryNode *root;
    void insert(const int &, BinaryNode *&); //insert an element into BST
    void levelorder(BinaryNode *);
    void makeEmpty(BinaryNode *&);  //delete the entire BST

public:
    BinarySearchTree();

    void insert(const int &key)   //insert an element into BST
    {
        insert(key, root);
    }

    void levelorder ()
    {
        levelorder(root);
    }

    void makeEmpty()   //delete the entire BST
    {
        makeEmpty(root);
    }
};

#endif //HW3_BST_H
