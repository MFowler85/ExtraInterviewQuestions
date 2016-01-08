/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 28, 2015, 2:53 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
//#include <time>

using namespace std;

/*
 * 
 */
template<typename t>
void bubblesort(vector<t> & a){
    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < a.size(); j++)
            if(a[j] > a[j + 1]){
                t temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
}
int main(int argc, char** argv) {
    
    
    
    srand(time(NULL));
    vector<int> a;
    for(int i = 0; i < 1000; i++)
        a.push_back(rand() % 100 + 1);
    
    vector<int>::iterator itr = a.begin();
    while(itr != a.end())
        cout << *itr++ << " ";
    
    clock_t t;
    t = clock(); //time stamp
    
    bubblesort(a);
    
    clock_t t1;
    t = clock() - t; //time stamp at the end
    cout << "\n\nNow we will bubble sort the data:\n";
    
    itr = a.begin();
    while(itr != a.end())
        cout << *itr++ << " ";

    
    cout << "\n\nTime consumed for this sort was: " << t;
    return 0;
}

