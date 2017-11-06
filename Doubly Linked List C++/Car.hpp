//
//  Car.hpp
//  DoublyLinkedListC++1
//
//  Created by Steven Payne on 11/1/17.
//  Copyright © 2017 Steven Payne. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp
#include <string>
#include <stdio.h>

using namespace std;

class Car {
public:
    //Default constructor
    Car();
    
    //overload constructors
    Car(string, int);
   
    //Destructor
    ~Car();
    
    //Assessor Functions
    string getName() const;
        //getName
        //@return string - name of car
    int getDoors() const;
        //getDoors
        //@return int - # of doors
    
    //default mutator functions
    void setName(string);
        //setName
        //@params string - name of car
    void setDoors(int);
        //setDoors
        //@param int - number of doors
    
    
private:
    //Member variables
    string newName;
    int newDoors;
};

#endif /* Car_hpp */
