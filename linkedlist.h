#ifndef LINKED_LIST
#define LINKED_LIST

#include <iostream>

template <class T>
class ListNode
{
    template <class U> friend class LinkedList;

    public:
        ListNode(): next(nullptr), prev(nullptr) {}
        ListNode(T val): next(nullptr), prev(nullptr), data(val) {}
        ListNode(const ListNode<T>& rhs): next(nullptr), prev(nullptr), data(rhs.data) {}

    private:
        ListNode<T>* next;
        ListNode<T>* prev;
        T data;
};

template<class T>
class LinkedList
{
    public:
        LinkedList();
        LinkedList(T);
        LinkedList(const LinkedList<T>&);

        void add(T);
        void addToFront(T);
        T get(int);
        int size();
        T remove(int);

        ~LinkedList();

        T& operator[](int);
        LinkedList<T>& operator=(LinkedList<T>&);

    private:
        ListNode<T>* head;
        int numElements;
};

#endif
