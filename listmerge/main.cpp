/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 25, 2015, 2:19 PM
 */

#include <cstdlib>
#include <list>
#include <iostream>
using namespace std;

/*
 * 
 */



int main(int argc, char** argv) {
    
    int arrayL[] = {2,5,7};
    int arrayF[] = {3,11};
    
    list<int> L(arrayL, arrayL + sizeof(arrayL) / sizeof(int));
    list<int> F(arrayF, arrayF + sizeof(arrayF) / sizeof(int));
    
    list<int>::iterator itr;
    for(itr = L.begin(); itr != L.end(); itr++)
        cout << *itr << " ";
    
//    list<int> first;
//    list<int> second(4,100); //4 ints with value = 100
//    list<int> third(second.begin(), second.end()); //iterates through second
//    list<int> fourth(third); //copy of third
    
    
    return 0;
}

