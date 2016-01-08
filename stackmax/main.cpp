/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 25, 2015, 3:21 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

/*
 * 
 */
int M = 0; //global variable for max
void Push(vector<int> & a, int val){
    a.push_back(val);
    if(val > M)
        M = val;
}

int Pop(vector<int> & a){
    int back = a.back();
    a.pop_back();
    return back;
}


int main(int argc, char** argv) {
    
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> a;
    for(int i = 0; i < 10; i++){
        a.push_back(array[i]);
        if (array[i] > M)
            M = array[i];
    }
    
    Push(a, 99);
    int answer = Pop(a);
    cout << answer;
    cout << "\n" << M;

    return 0;
}

