//
// Created by Day on 2017/4/19.
//
#include <cstdlib>
#include "Queue.h"

Queue::Queue(int qs):qSize(qs) {
    front = rear = NULL;
    items = 0;
}

Queue::~Queue() {
    Node *temp;
    while (front != NULL) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isEmpty() const {
    return items == 0;
}

bool Queue::isFull() const {
    return items == qSize;
}

int Queue::queueCount() const {
    return items;
}

Item *Queue::getFront() const {
    if (front == NULL) {
        return NULL;
    }
    return &(front->item);
}

void Item::setFrontName(char *newName) {
    name = newName;
}

char *Item::getFrontName() const {
    if(this == NULL) {
        return "no";
    }
    return name;
}

bool Queue::enQueue(const Item &item) {
    if(isFull()) {
        return false;
    }
    Node *add = new Node;
    add->item = item;
    add->next = NULL;
    if(front == NULL) {
        front = add;
    } else {
        rear->next = add;
    }
    rear = add;
    items ++;
    //delete add;
    return true;
}

bool Queue::deQueue(Item &item) {
    if(isEmpty()) {
        return false;
    }

    item = front->item;
    Node *temp = front;
    front = front->next;
    delete temp;
    items --;
    if(items == 0) {
        rear = NULL;
    }
    return true;
}

void Customer::set(long when) {
    processtime = std::rand()%3 + 1;
    arrive = when;
}
