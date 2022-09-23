//
// Created by ASUS on 2022/9/23.
//

#ifndef LEETCODE__707SHEJILIANBIAO_H
#define LEETCODE__707SHEJILIANBIAO_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

class MyLinkedList {

public:

    struct LinkNode{

        int val;
        LinkNode *next;
        //LinkNode (int val);  // 构造函数，初始化变量
        LinkNode (int val): val(val), next(nullptr){}

    };

    MyLinkedList();
    int get(int index);
    void addAtHead(int val);
    void addAtTail(int val);
    void addAtIndex(int index, int val);
    void deleteAtIndex(int index);
    void printLinklist();

private :
    int _size;
    LinkNode *_dummyHead;
};

void test707();//测试707构造链表

#endif //LEETCODE__707SHEJILIANBIAO_H
