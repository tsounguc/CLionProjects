//
// Created by Christian Tsoungui on 9/22/2018.
//
#include <iostream>
#include "MyStack.h"
using namespace std;


//push an item in the stack
void MyStack_vector:: push(const int & x){
    elements.push_back(x);
}

//pop an item from the stack
void MyStack_vector:: pop(){
    if(elements.empty()){
        cout<<"The Stack is now empty! No item is popped!"<<endl;
    }else {
        elements.pop_back();
    }
}

//return the item on the top of the stack, no actual pop() happens
int MyStack_vector::top() const {
    return elements.back();
}

bool MyStack_vector::empty() const {
    return elements.empty();
}
int MyStack_vector::GetSize() const {
    return elements.size();
}

void MyStack_list::push(const int & x) {
    elements.push_front(x);
}
void MyStack_list::pop(){
    if(elements.empty()){
        cout<<"The Stack is now empty! No item is popped!"<<endl;
    }else {
        elements.pop_front();
    }
}

int MyStack_list::top() const {
    return elements.front();
}

bool MyStack_list::empty() const {
    return elements.empty();
}
int MyStack_list::GetSize() const {
    return elements.size();
}