//
// Created by Day on 2017/4/19.
//

#ifndef LEARNCPP_QUEUE_H
#define LEARNCPP_QUEUE_H

class SelfC {
private:
    char *name;
public:
    SelfC() {name = "";};
    void setFrontName(char *);
    char *getFrontName() const;
};

class Customer {
private:
    long arrive;
    int processtime;
public:
    Customer() {arrive = processtime = 0;}
    void set(long when);
    long when() const {return arrive;}
    int ptime() const {return processtime;}
};

typedef SelfC Item;

class Queue {
private:
    struct Node {Item item;struct Node *next;};
    enum {QSIZE = 10};
    //
    Node *front;
    Node *rear;
    int items;
    const int qSize;
    //
    Queue(const Queue &q):qSize(0) {}
    Queue &operator=(const Queue &q) {return *this;}

public:
    Queue(int qs = QSIZE);
    ~Queue();
    bool isEmpty() const;   // 此函数不能修改任何值
    bool isFull() const;
    int queueCount() const;
    bool enQueue(const Item &item); //引用的item不能被修改
    bool deQueue(Item &item);
    Item *getFront() const;


};

#endif //LEARNCPP_QUEUE_H
