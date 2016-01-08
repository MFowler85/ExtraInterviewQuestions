/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 1, 2015, 3:49 PM
 */

#include <cstdlib>
#include <map>
#include <vector>
#include <time.h>
#include <iostream>
using namespace std;

/*Sorting method that use a hash table
 * only good for keys which are relatively small e.g. 0-255
 * O(n)
 */
void countingSort(vector<int> & a){
    map<int, int> m;
    for(int i = 0; i < a.size(); i++)
        ++m[a[i]];
    map<int, int>::iterator itr;
    int j = 0;
    for(itr = m.begin(); itr != m.end(); itr++) //fills up vector a with duplicates in order
        for(int i = 0; i < itr->second; i++)
            a[j++] = itr->first; 
//    cout << m.size() << endl;
    
    for(itr = m.begin(); itr != m.end(); itr++)
        cout << itr->first << " " <<itr->second << endl; 
    
            
    
}

int main(int argc, char** argv) {
    srand(time(NULL));
    vector<int> a;
    for(int i = 0; i < 10; i++)
        a.push_back(rand() % 10 + 1);

    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl << endl;
    countingSort(a);
    cout << endl;
//    cout << a.size() << endl;
//    cout << a.capacity();
    
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    
    

    return 0;
}

