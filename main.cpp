// Carrie Hadley
// April 20, 2015

#include <iostream>
#include <vector>
#include "vectorsoo.h"

using std::cout; using std::cin; using std::endl; using std::vector;

int check(vector<int> container, int number);
void addNumber(vector<int> &container, int number);
void removeNumber(vector<int> &container, int number);

int main() {
    vector<int> container;
    char choice;
    int number;
    cout << "enter operation [a/r/q] and number:";
    cin >> choice >> number;
    
    vectorsoo myVectorC;
    
    while (choice != 0) {
        if (choice == 'a'){ // Adding a number
            myVectorC.addNumber(number);
        }
        
        else if (choice == 'r'){ // Removing a number
            myVectorC.removeNumber(number);
        }
        
        myVectorC.output();
        cout << endl;
        
        cout << "enter operation [a/r/q] and number:"; // Getting next input
        cin >> choice >> number;
    }
    
}


