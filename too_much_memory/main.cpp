/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 16, 2015, 10:56 AM
 */

#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    

    int i,n; 
    int * p;
    cout << "How many numbers would you like to type? ";
    cin >> i;
    p = new (nothrow) int[i];
    if (p == 0){
        cout << "Error: memory could not be allocated";
        return 0;
    }
    else
    {
        for (n=0; n<i; n++)
        {
            cout << "Enter number: ";
            cin >> p[n];
        }
        cout << "You have entered: ";
        for (n=0; n<i; n++)
            cout << p[n] << ", ";
        delete[] p;


    }
    
    return 0;
}