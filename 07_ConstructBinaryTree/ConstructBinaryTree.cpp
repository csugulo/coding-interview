//
// Created by xieyang on 19-1-21.
//

#include "coding_interview.h"
#include "utils/list.h"

template <typename T>
void PrintListReversingly(ListNode<T> * pHead){
    stack<ListNode<T> *> pNodeStack;
    ListNode<T> *pNode = pHead;
    while(pNode != nullptr){
        pNodeStack.push(pNode);
        pNode = pNode->pNext_;
    }
    while(pNodeStack.size() > 0){
        ListNode<T> * pNode = pNodeStack.top();
        cout << *pNode;
        pNodeStack.pop();
    }
}

int main(){
    ListNode<int> *pNode1, *pNode2, *pNode3;
    pNode1 = CreateListNode(1);
    pNode2 = CreateListNode(2);
    pNode3 = CreateListNode(3);
    ConnectListNodes(pNode1,pNode2);
    ConnectListNodes(pNode2,pNode3);
    PrintList(pNode1);
    PrintListReversingly(pNode1);
}