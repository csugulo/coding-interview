//
// Created by xieyang on 19-1-21.
//

#ifndef CODING_INTERVIEW_LIST_H
#define CODING_INTERVIEW_LIST_H

#include <iostream>

template <typename T>
struct ListNode{
    T val_;
    ListNode<T> * pNext_ = nullptr;
};

template <typename T>
inline std::ostream & operator<<(std::ostream & os, const ListNode<T> & node){
    os << node.val_;
    return os;
}

template <typename T>
ListNode<T> * CreateListNode(T val){
    ListNode<T> * pNode = new ListNode<T>();
    pNode->val_ = val;
    pNode->pNext_ = nullptr;
    return pNode;
}

template <typename T>
void ConnectListNodes(ListNode<T> * pCurrent, ListNode<T> * pNext){
    pCurrent->pNext_ = pNext;
}

template <typename T>
void PrintList(ListNode<T> * pHead){
    ListNode<T> * pNode = pHead;
    std::cout << '[';
    while(pNode != nullptr){
        std::cout << pNode->val_;
        if(pNode->pNext_ != nullptr) std::cout << ',';
        pNode = pNode->pNext_;
    }
    std::cout << ']';
}

template <typename T>
void DestroyList(ListNode<T> * pHead){
    ListNode<T> * pNode = pHead;
    while(pNode != nullptr){
        pHead = pHead->pNext_;
        delete pNode;
        pNode = pHead;
    }
}


#endif //CODING_INTERVIEW_LIST_H
