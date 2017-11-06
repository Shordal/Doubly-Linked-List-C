//
//  main.cpp
//  DoublyLinkedListC++1
//
//  Created by Steven Payne on 10/31/17.
//  Copyright © 2017 Steven Payne. All rights reserved.
//
#include <iostream> //remove after testing
#include <cstdlib>
#include "DoublyLinked.h"
#include "Car.hpp"
#include "Plane.hpp"

using namespace std;

int main(int argc, char** argv){
    
    DoublyLinked DLL;
    
    
    
    
    
    /*
     
    -----------TEST AREA--------------------------
    DLL.AddNodeBack(3);
    DLL.AddNodeBack(4);
    DLL.AddNodeBack(10);
    DLL.AddNodeBack(11);
    DLL.AddNodeBack(87);
    DLL.AddNodeBack(34);
    DLL.PrintList();
    cout << "First print\n" << endl;
    ///cout << " " << endl;
    
    DLL.DeleteNode(4);
    DLL.DeleteNode(11);
    DLL.PrintList();
    cout << "DELETED 4 & 11 second print\n" << endl;
    
    DLL.AddNodeBack(133);
    DLL.AddNode(7777);
    DLL.PrintList();
    cout << "third print\n" << endl;
    
    DLL.AddNodeBack(99);
    DLL.AddNodeBack(679);
    DLL.AddNode(1337);
    DLL.AddNode(1338);
    DLL.AddNode(1339);
    DLL.AddNodeBack(7331);
    DLL.PrintList();
    cout << "fourth print\n" << endl;
    
    cout << "printing backwards ----------" << endl;
    DLL.PrintListBackwards();
    cout << "ABOVE IS PRINTED BACK WARDS ---" << endl;
    ------------TEST AREA-----------------------------
    */
    
    
    int select = 0; //selector
    int hold = 0; //number to hold for input
    while(select != 6){
        cout << "1. Add at the beginning" << endl;
        cout << "2. Add at the end" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Display front to back" << endl;
        cout << "5. Display back to front" << endl;
        cout << "6. Exit" << endl;
        cout << "Choose Operation:" << endl;
        cin >> select;        switch(select) {
            case 1:
                cout <<"\nPlease type number to add to front of list: " << endl;
                cin >> hold;
                DLL.AddNode(hold);
                break;
            case 2:
                cout <<"\nPlease type number to add to end of list: " << endl;
                cin >> hold;
                DLL.AddNodeBack(hold);
                break;
            case 3:
                cout <<"\nPlease type number to delete from list: " << endl;
                cin >> hold;
                DLL.DeleteNode(hold);
                break;
            case 4:
                cout <<"\nLiest given from Front to Back" << endl;
                DLL.PrintList();
                break;
            case 5:
                cout <<"\nList given from Back to Front" << endl;
                DLL.PrintListBackwards();
                break;
            case 6:
                cout << "Program Ending" << endl;
                return 0;
                break;
            default:
                cout << "Please stop picking invalid options." << endl;
                cout << " "<< endl;
    }
}
    
    return 0;
}
