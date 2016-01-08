/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 5, 2015, 1:08 PM
 */

#include <cstdlib>
#include <set>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    set<int> s;
    
    for(int i = 10; i > 0; i--)
        s.insert(i);
    set<int>::iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << " ";
    
    return 0;
}

