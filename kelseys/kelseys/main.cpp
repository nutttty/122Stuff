//
//  main.cpp
//  kelseys
//
//  Created by Kelsey on 11/10/15.
//  Copyright © 2015 Kelsey. All rights reserved.
//

#include <iostream>
#include "List.h"

int main(int argc, const char * argv[]) {

    
    List myList;
    myList.isEmpty();
    myList.insertAtFront(3);
    myList.insertAtFront(4);
    myList.printList();
    cout << myList.deleteAtFront() << endl;
    
    myList.printList();
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
