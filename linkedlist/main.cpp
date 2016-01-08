/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 24, 2015, 2:38 PM
 */

#include <cstdlib>
#include <list>
#include <iostream>


using namespace std;

/*
 * 
 */

int max() const{
    
    
    
}

int main(int argc, char** argv) {

    list<int> L1;
    L1.push_back(5);
    L1.push_back(9);
    
    list<int> L2;
    L2.push_back(4);
    L2.push_back(5);
    L2.push_back(6);
    L2.push_back(9);
    
    int len1 = L1.size();
    cout << "L1 has length " <<  len1;
    
    int len2 = L2.size();
    cout << "\nL2 has length " << len2;
    
//    int diff = max(len2, len1) - min(len2, len1);
//    cout << "\n" << diff;
    
    int betterdiff = abs(len1 - len2);
    cout << "\n" << betterdiff;
    
    if(len1 > len2)
        if (L1.)
           
    
    
    
//    list<int>::iterator i;
//    for(i = L.begin(); i != L.end(); i++)
//        cout << *i << " ";
//    cout << endl;
    
    
    
    return 0;
}

