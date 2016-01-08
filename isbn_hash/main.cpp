/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 1, 2015, 12:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <map>

using namespace std;

/*This code was used to simulate using a map to enter ISBN book numbers
 * into a hash table. The question asked to use an LRU strategy for caching
 * to insert and delete entries from the map. I used a global variable count to
 * determine which value should be removed. A superior method is to use a linked
 * list structure to represent a queue and delete from that. 
 */
int count; //global value for count

struct book{
    double price;
    int time;
};

void print(map<int, book> & a){
    map<int, book>::iterator itr;
    for(itr = a.begin(); itr != a.end(); itr++){
        cout << "ISBN: " << itr->first << endl;
        cout << "Price: " << itr->second.price << endl;
        cout << "LRU value: " << itr->second.time << endl;
        cout << endl;
    }
}

int main(int argc, char** argv) {
    
    map<int, book> a;
    a[1234567].price = 32.24;
    a[1234567].time = count++;
    
    a[9876543].price = 29.99;
    a[9876543].time = count++;
    
    map<int, book>::iterator itr;
    print(a);
    
    a.erase(1234567);
    cout << endl << "Modified map is now: " << endl;
    a[1234567].price = 32.24;
    a[1234567].time = count++;
    print(a);
    
    itr = a.begin();
    for(;itr != a.end(); itr++)
        if(itr->second.time > 1)
            a.erase(itr->first);
    
    cout << endl;
    print(a);

    
    
    
//    book b;
//    b.time = count++;
//    
//    cout << b.time;
//    cout << count;
    

    return 0;
}

