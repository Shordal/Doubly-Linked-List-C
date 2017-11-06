//
//  Car.cpp
//  DoublyLinkedListC++1
//
//  Created by Steven Payne on 11/1/17.
//  Copyright © 2017 Steven Payne. All rights reserved.
//

#include "Car.hpp"

//Car::Car(){
  //  newDoors = 0;
//}
Car::Car(string name, int doors){
    
    newName = name;
    newDoors = doors;
    
}
Car::~Car(){
    
}

string Car::getName() const {
    return newName;
}

int Car::getDoors() const{
    return newDoors;
}

void Car::setName(string name){
    newName = name;
}

void Car::setDoors(int Doors){
    newDoors = Doors;
}
