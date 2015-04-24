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
    
    while (choice != 0) {
        if (choice == 'a'){ // Adding a number
            addNumber(container, number);
        }
        
        else if (choice == 'r'){ // Removing a number
            removeNumber(container, number);
        }
        
        cout << "your numbers: "; // Printing numbers
        for (size_t i = 0; i < container.size(); ++i) {
            cout << container[i] << " ";
        }
        cout << endl;
        
        cout << "enter operation [a/r/q] and number:"; // Getting next input
        cin >> choice >> number;
    }
    
}


