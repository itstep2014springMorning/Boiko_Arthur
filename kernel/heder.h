#ifndef HEDER_H_INCLUDED
#define HEDER_H_INCLUDED
#include <windows.h>
#include <string>
#include <iostream>
#include <cstdio>
using namespace std;


class List {
    struct Item {
        string value;
        Item* next;
        Item* prev;

    };

public:
    Item* begin;
    class iterator {
    public:
        iterator():current(NULL) {};
        iterator& operator++();
        bool operator!=(const iterator& b) const;
        string& operator*();
    private:
        Item* current;
    };
public:
    Item* b;
    Item* e;

    iterator begin() {
        iterator zzz;
        zzz.current;

        return zzz;
    }

    List() : b(NULL),e(NULL) {}
    void push_front(const string &x) { // Insert to the bning of the list
        if (b == NULL) {
            b = new Item;
            e = b;
            b->prev = NULL;
            b->next = NULL;
            b->value = x;
        } else {
            b->prev = new Item; //1
            b->prev->next = b; // 2
            b = b->prev; //3
            b->value = x; //4
            b->prev = NULL; //5
        }
    }
    void push_back(const string &x) { // Insert to the end of the list
        if (e == NULL) {
            e = new Item;
            b = e;
            e->next = NULL;
            e->prev = NULL;
            e->value = x;
        } else {
            e->next = new Item; //1
            e->next->prev = e; // 2
            e = e->next; //3
            e->value = x; //4
            e->next = NULL; //5
        }
    }
    string pop_front() {
        if (b == NULL) {
            cerr << "ERROR: list is empty\n";
            return "ERROR";
        }
        if (b == e) {
            string temp = b->value;
            delete b;
            b = NULL;
            e = NULL;
            return temp;
        }
        string temp = b->value;
        Item* second = b->next;
        delete b;
        b = second;
        return temp;
    }
    bool is_empty() {
        return b == NULL;
    }
    string& operator[](size_t index) {
        Item* iterator=b;
        /** TODO (Администратор#1#12/09/14): Непонятка */
        for(size_t i=0; i<(index-1); i++) {
            iterator=iterator->next;
        }
        return iterator->value;
    }

///here is integration with trolololo-lo


    ~List() {
        while (!is_empty()) {
            pop_front();
        }
    }
};


#endif // HEDER_H_INCLUDED
