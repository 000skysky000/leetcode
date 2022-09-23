//
// Created by ASUS on 2022/9/23.
//

#include "2_707shejilianbiao.h"
// 结构体构造函数，可在源文件中定义，也可在头文件中定义。
//MyLinkedList::LinkNode::LinkNode (int val): val(val), next(nullptr){}

MyLinkedList::MyLinkedList() {//类构造函数用于初始化类的变量

    _dummyHead = new LinkNode(0);
    _size = 0;

}

// 返回下标为index的链表,第一个节点从0开始
int MyLinkedList::get(int index) {
    if(index > (_size-1) || index < 0) { //为什么不是index > (_size)？？？
        return -1;                       // 下标从0开始，第size为空
    }
    LinkNode *cur = _dummyHead;// -> next;  //为什么是_dummyHead->next 而不是 _dummyHead
        while (index --) {                // 下标从0开始,直接return cur->val 而不是return cur->next->val

            cur = cur->next;
        }
        return cur-> next-> val;

}

//
void MyLinkedList::addAtHead(int val) {
    LinkNode *NewHead = new LinkNode(val);
    NewHead -> next = _dummyHead -> next; //1、先保存下个链接
    _dummyHead->next = NewHead;          //2、再改变上个链接，省掉使用tmp来保存node的步骤
    _size ++ ;
}

void MyLinkedList::addAtTail(int val) {
    LinkNode *NewNode = new LinkNode(val);
    NewNode -> next = nullptr;    // 本步骤没必要，在结构体的构造函数中定义了next=null ptr
    LinkNode *cur = _dummyHead;   // 1、 为什么不是_dummyhead -> next
    int i = _size;                // 2、 可以 但是要把握i的循环次数

    while (i--){                   // 1.使用while(cur.next != nullptr)
        cur = cur -> next;        // 2.可以省掉变量i,代码少两行，控制条件还不容易出错。
    }
    cur-> next = NewNode;
    _size++;
}

//第i个元素前插入 val,下标从0开始
// i=size 最后一个插入
// i=0 第一个插入
void MyLinkedList::addAtIndex(int index, int val) {
    //处理边界
    if(index > ( _size )){     //边界判断：index=size？ 就是在size+1前加入va；L
        return;                 //  就是在末尾加入val,所以index可取=size；
    }
    else if (index < 0 ){      // 同理index可以=0
        addAtHead(val);
    }

    //正式插入
    LinkNode *NewNode = new LinkNode(val);
    LinkNode *cur = _dummyHead; //  不能写*cur = _dummyHead; 因为cur是为了复制dummyhead的指针，而不是为了指向dummyhead，不然循环的次数是（index+1）-- 而不是index--，反而容易出错。
    while (index --){
        cur = cur -> next;
    }
    //先链接下个节点，再处理上面个节点，可以最小代码量和保证不错
    NewNode -> next = cur -> next;
    cur -> next  = NewNode;
    _size ++; //容易忘掉！！！
}

//删除元素，元素是0-size-1
//边界 index 可=0  index不可>=size 不可<0
void MyLinkedList::deleteAtIndex(int index) {
    if (index >= _size || index < 0){
        return;
    }
    LinkNode *cur = _dummyHead ;//-> next;
    while ( index --){
        cur = cur->next;
    }
    LinkNode *tmp = cur -> next;
    cur -> next = cur -> next ->next;
    delete tmp;
    _size--;

}

void MyLinkedList::printLinklist(){
    LinkNode* cur = _dummyHead;
    while (cur->next != nullptr) {
        cout << cur->next->val << " ";
        cur = cur->next;
    }
    cout << endl;
}

//这不是类函数，是自定义函数
void test707(){
    MyLinkedList *linkedList = new MyLinkedList();
    linkedList->printLinklist();
    linkedList->addAtHead(7);
    linkedList->addAtHead(2);
    linkedList->addAtHead(1);
    linkedList->printLinklist();

    linkedList->printLinklist();
    cout << " add 3 0" << endl;
    linkedList->addAtIndex(3,0);
    linkedList->printLinklist();
    cout << "delete 2" << endl;
    linkedList -> deleteAtIndex(2);
    linkedList->printLinklist();
    cout << "addhead 6" << endl;
    linkedList->addAtHead(6);
    linkedList->printLinklist();
    cout << "addtail 4" << endl;
    linkedList->addAtTail(4);
    linkedList->printLinklist();
    cout << "get 4 " << linkedList -> get(4) << endl;
    linkedList->printLinklist();
    cout << "addhead 4" << endl;
    linkedList->addAtHead(4);
    linkedList->printLinklist();
    cout << "add 5 0 " << endl;
    linkedList->addAtIndex(5,0);
    linkedList->printLinklist();
    cout << "addhead 6" << endl;
    linkedList->addAtHead(6);
    linkedList->printLinklist();


    return ;
}


