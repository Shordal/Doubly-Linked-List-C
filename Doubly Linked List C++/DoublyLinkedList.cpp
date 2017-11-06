//
//  DoublyLinkedList.cpp
//  DoublyLinkedListC++1
//
//  Created by Steven Payne on 10/31/17.
//  Copyright © 2017 Steven Payne. All rights reserved.
//

/*      ___________      ___________      ___________
   --->|   |   |  -|--> |   |   |  -|--> |   |   |  -|---->
    <--|-__|___|___|<---|-__|___|___|<---|-__|___|___|<---
 
                        Doubly Linked
                            List
                       Fun W/ Pointers!
 */

#include <cstdlib>
#include <iostream>
#include "DoublyLinked.h"
#include "Car.hpp"


using namespace std;

DoublyLinked::DoublyLinked(){ //constructor
    head = NULL; //private pointer
    curr = NULL;
    //temp = NULL;
    //temp2 = NULL;
    prev = NULL;
    tail = NULL;
    
}
void DoublyLinked::AddNodeBack(int addData){//adds Node to the end of the list
    nodePtr n = new node; //creates node pointer, n, creating new node, and n is pointing to new node.
    n->next = NULL;
    n->prev = NULL;
    n->data = addData;
    if(head != NULL){ //if not blank
        curr = head; //make current point to head pointer
        while(curr->next != NULL){ //go down list
            curr = curr->next; //current pointer points to the next node in the list
        }
        n->prev = tail; //set new node to tail
        tail = n; //sets tail pointer to new node
        curr->next = n; //current next set to new node
    }
    else {
        tail = n; //sets tail node, genral blank list
        head = n; //sets head node, general blank list
    }
}

void DoublyLinked::AddNode(int addData){ //adds node to the front of the list
    nodePtr n = new node; //creates node pointer, n, creating new node, and n is pointing to new node.
    n->next = NULL; //find the node n is pointing to, make it's next element point to nothing.
    n->prev = NULL;
    n->data = addData; //what is passed is stored into the node
    if(head == NULL){
        head = n; //no list, just make head node
        tail = n; //no list, seting tail
    }
    else{
        head->prev = n;
        
        n->prev = head->next;
        n->next = head; //sets new node's next to head
        //n->prev = NULL; //redun
        
        
        head = n; //set head to new node
        n->prev = NULL;
        //n->prev = head;
    }
}

void DoublyLinked::DeleteNode(int delData){
    nodePtr delPtr = NULL; //node pointer to null
    //temp = head;
    //temp2 = head;
    curr = head;
    //check if current node is the one we want to delete
    //advance if not
    //patch if found
    while(curr != NULL && curr->data != delData){
        //temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        cout << "Item " << delData << " is not in the List " << endl;
        //cout << delData << " Item is not in the List" << endl;
        delete delPtr; //garbage collection
    }
    else{
        delPtr = curr; //holds hold for deleting
        
        if(curr == head){
            
            curr = head->next;
            head = curr;
            curr->prev = NULL;
            
            cout << " CURR == HEAD" << endl;
        }
        if(curr == tail){
            
            curr = tail->prev;
            tail = curr;
            curr->next = NULL;
            
            cout << " CURR == tail" << endl;
            
        }
        if(curr != head && curr != tail){ cout << "PASSED INTO THE LAND OF SHADOW" << endl;
            
        //temp = curr; //temp is not current
        curr = delPtr->prev; //temp is pointing to the prevouis node of the delete node
        curr->next = delPtr->next; //patch left to right of delete node
        //curr = curr; //snap back, mostly not needed
        curr = delPtr->next; //temp pointing to right of delete
        curr->prev = delPtr->prev;  //patching right node to left node, past delete node

            }
        }
        delete delPtr; //garbage collection
        cout << "Item: " << delData << " was removed\n" << endl;
    }


void DoublyLinked::PrintList(){ //print from front to end of list
    curr = head;
    while(curr != NULL)
    {
        cout << curr->data << endl;
        
        curr = curr->next;
    }
    cout << " " << endl;
}

void DoublyLinked::PrintListBackwards(){  //dont use this yet, it'll blow up //wont blow up, prints back to front
    curr = tail;
    while(curr != NULL){
        cout << curr->data << endl;
                curr = curr->prev;
    }
    cout << " " << endl;

}
