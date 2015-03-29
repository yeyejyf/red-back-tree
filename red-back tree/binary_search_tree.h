//
//  binary_search_tree.h
//  red-back tree
//
//  Created by Yunfan Jin on 3/29/15.
//  Copyright (c) 2015 yunfan.jin. All rights reserved.
//

#ifndef __red_back_tree__binary_search_tree__
#define __red_back_tree__binary_search_tree__

#include <stdio.h>

template <class T>
struct Node{
    Node *parent, *left, *right;
    T value;
    Node(){}
    Node(Node<T> *parent, const T &value):parent(parent), value(value){}
};

#endif /* defined(__red_back_tree__binary_search_tree__) */
