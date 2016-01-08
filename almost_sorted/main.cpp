/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 30, 2015, 1:33 PM
 */

#include <cstdlib>
#include <vector>
#include <queue>
#include <iostream>





using namespace std;

/*
 * 
 */
struct comparator{
    bool operator() ( int i, int j){
        return i > j;
    }
};

/*Algorithm to sort an almost sorted list with values being no more than k 
 * distance away from their sorted positions
 */
void almostSorted(vector<int> & a, const int & k){
    priority_queue<int, vector<int>, comparator> minheap;
    for(int i = 0; i < k + 1; i++){
        minheap.push(a[i]);
    }
    int curr = 0;
    for(int i = k + 1; i < a.size(); i++){
        a[curr++] = minheap.top();
        minheap.pop();        
        minheap.push(a[i]);
    }  
    while(!minheap.empty()){
        a[curr++] = minheap.top();
        minheap.pop();
    }
    
}

int main(int argc, char** argv) {
    
    int array[7]= {3, -1, 2, 6, 4, 5, 8};
    vector<int> a;
    for(int i = 0; i < 7; i++)
        a.push_back(array[i]);
    
    almostSorted(a, 2);
    
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    return 0;
}

