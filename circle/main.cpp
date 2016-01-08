/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 22, 2015, 9:46 AM
 */


#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;


/*Determines if value is within the vector by performing a binary search
 *Vector must be sorted 
 *returns true if item is found, false otherwise
 */
bool binarysearch(const vector<int> & v, const int & value){
    int left = 1;
    int right = v.size() - 1;
    int index;
    while(left <= right){
        index = (right + left) / 2;
        if(v[index] < value)
            left = index + 1;
        else if(v[index] > value)
            right = index - 1;
        else 
            return true;
    }
    return false;
}

int main(int argc, char** argv) {
    

    vector<int> storage(100); //sorted vector
    for(int i = 0; i <= storage.size(); i++)
        storage[i] = i;
    

    bool answer = binarysearch(storage, 50); //call to function
    string s;
    answer == 1 ? s = "Item found!" : s = "Not found!";
    cout << s;

    return 0;
}

