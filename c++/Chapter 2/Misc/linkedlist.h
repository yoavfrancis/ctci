#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include <cstddef>



template<class T>
class Node {
public:
    Node(const T& value);
    void appendToTail(const T& value);
    T getValue() const;
    Node<T>* getNext();
    void printList();
    
private:
    T m_data;
    Node<T>* m_next;
    template<class T> friend class LinkedList;
};

template<class T>
class LinkedList {
public:
    LinkedList();
    
    /// Deletes a node that has a given value;
    void deleteNode(const T& value);
    void appendToTail(const T& value);
    void printList();
private:
    Node<T>* m_head;
};

#include "LinkedList.inl"

#endif //__LINKED_LIST_H__