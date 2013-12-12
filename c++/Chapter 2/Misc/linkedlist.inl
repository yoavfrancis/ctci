#ifndef __LINKED_LIST_INL__
#define __LINKED_LIST_INL__

#include <iostream>
#include "LinkedList.h"

using namespace std;

template<class T>
Node<T>::Node(const T& value): m_data(value), m_next(NULL)
{ }

template<class T>
void Node<T>::appendToTail(const T& value) {
    Node<T>* newNode = new Node<T>(value);
    Node<T>* cur = this;
    while(cur->m_next != NULL) {
        cur = cur->m_next;
    }
    cur->m_next= newNode;
}

template<class T>
T Node<T>::getValue() const {
    return m_data;
}


template<class T>
Node<T>* Node<T>::getNext() {
    return m_next;
}


template<class T>
void Node<T>::printList() {
    Node<T>* cur = this;
    while(cur) {
        cout << cur->m_data << " ";
        cur = cur->m_next;
    }
    cout << endl;
}

/**
 * Linked List implementation
 */


template<class T>
LinkedList<T>::LinkedList() : m_head(NULL)
{ }


template<class T>
void LinkedList<T>::deleteNode(const T& value) {
    Node<T>* runner = m_head;

    if(runner == NULL) {
        return;
    }

    if(runner->m_data== value) {
        m_head = m_head->getNext();
        free(runner);
        return;
    }

    while(runner->m_next != NULL) {
        if(runner->m_next->m_data = value) {
            Node<T>* tmp = runner->m_next;
            runner->m_next = runner->m_next->m_next;
            free(tmp);
        }
        runner = runner->m_next;
        return;
    }
}

template<class T>
void LinkedList<T>::appendToTail(const T& value) {
    if(m_head == NULL) {
        m_head = new Node<T>(value);
    } else {
        m_head->appendToTail(value);
    }
}


template<class T>
void LinkedList<T>::printList() {
    m_head->printList();
}





#endif //__LINKED_LIST_INL__