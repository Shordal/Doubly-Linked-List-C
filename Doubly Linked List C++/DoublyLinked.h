//
//  DoublyLinked.h
//  DoublyLinkedListC++1
//
//  Created by Steven Payne on 10/31/17.
//  Copyright © 2017 Steven Payne. All rights reserved.
//

#ifndef DoublyLinked_h
#define DoublyLinked_h
#include "Car.hpp"
#include <stdio.h>

class DoublyLinked{
private:
    
    struct Car{ //work in progress
        string name;
        int door;
    };
    
    struct Plane{ //work in progress
        string name;
        int door;
        int engine;
    };
    
    typedef struct node{
        int data; //creates setion to hold int data
        node* next; //points to next node in list
        node* prev; //points to prevoius node in list
        }* nodePtr;//define node struct pointer
    
    nodePtr head;
    nodePtr curr;
    //nodePtr temp;
    //nodePtr temp2;
    nodePtr prev;
    nodePtr tail;
    
public:   //functions go here, to manipulate private data
    DoublyLinked();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();
    void PrintListBackwards();
    void AddNodeBack(int addData);
    
};


#endif /* DoublyLinked_h */



/*
 //
 //  DoublyLinked.h
 //  DoublyLinkedListC++1
 //
 //  Created by Steven Payne on 10/31/17.
 //  Copyright © 2017 Steven Payne. All rights reserved.
 //
 
 #ifndef DoublyLinked_h
 #define DoublyLinked_h
 #include <stdio.h>
 
 class DoublyLinked{
 private:
 
 typedef struct node{
 int data; //creates setion to hold int data
 node* next; //points to next node in list
 node* prev; //points to prevoius node in list
 }* nodePtr;//define node struct pointer
 
 nodePtr head;
 nodePtr curr;
 nodePtr temp;
 //nodePtr temp2;
 nodePtr prev;
 nodePtr tail;
 
 public:   //functions go here, to manipulate private data
 DoublyLinked();
 void AddNode(int addData);
 void DeleteNode(int delData);
 void PrintList();
 void PrintListBackwards();
 void AddNodeBack(int addData);
 
 };
 
*/
