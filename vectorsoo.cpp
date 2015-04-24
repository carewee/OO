//
//  vectorsoo.cpp
//  Lab12_VectorsOO
//
//  Created by Carrie Hadley on 4/23/15.
//  Copyright (c) 2015 Carrie Hadley. All rights reserved.
//

#include <iostream>
#include <vector>
#include "vectorsoo.h"

using std::cout;

vectorsoo::vectorsoo(){
    //initialization
}

int vectorsoo::check(int number) const {
    // returns the index of the element
    // that corresponds to the element holding "number"
    // if number is not in the array, returns -1
    
    for (size_t i = 0; i < container.size(); ++i) {
        if (container[i] == number)
            return i;
    }
    return -1;
}

void vectorsoo::addNumber(int number) {
    // Adds the user's inputted number to the end of the vector
    if (check(number) == -1)
        container.push_back(number);
}

void vectorsoo::removeNumber(int number){
    // Removes the user's inputted number from the vector
    vector<int>::iterator toRemove=container.begin();
    
    if (check(number) != -1) {
        for(vector<int>::iterator ip=toRemove + 1; ip != container.end(); ++ip)
            if(number == *ip){
                toRemove=ip;
                break;
            }
    }
    else
        return;
    container.erase(toRemove);
}

void vectorsoo::output() {
    cout << "your numbers: "; // Printing numbers
    for (size_t i = 0; i < container.size(); ++i)
        cout << container[i] << " ";
}