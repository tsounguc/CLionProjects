//
// Created by Christian Tsoungui on 9/28/2018.
//
#include <iostream>
#include <queue>
#include "bst.h"
using namespace std;

BinarySearchTree::BinarySearchTree() {
    root = NULL;
}

void BinarySearchTree::insert(const int & x, BinaryNode * & r) {

    if(r == NULL){
        r = new BinaryNode();
        r->data = x;
        r->left = NULL;
        r->right = NULL;
    }else if(x < r->data)
    {
        insert(x, r->left);
    }else if(x > r->data)
    {
        insert(x, r->right);
    }else{
        ;
    }
}


void BinarySearchTree::levelorder(BinarySearchTree::BinaryNode * n) {
    queue<BinaryNode *> q;
    BinaryNode *curr;

    if(n == NULL){
        cout<< "The tree is empty!" << endl;
    }

    q.push(n);
    q.push(NULL);
    while (q.size() > 1){
        curr = q.front();
        q.pop();

        if(curr == NULL)
        {
            q.push(NULL);
        }else{
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }

            cout<< curr->data<< " ";
        }

    }
    cout << "" << endl;

}

void BinarySearchTree::makeEmpty(BinarySearchTree::BinaryNode *&t) {
    if(t!= NULL){
        makeEmpty(t->left);
        makeEmpty(t->right);
        delete t;
    }
    t = NULL;
}