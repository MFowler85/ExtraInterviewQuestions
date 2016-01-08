/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 5, 2015, 1:15 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>


using namespace std;

/*This function recursively solves the Tower of Hanoi. (found online)
 * 
 */
const int kNumPegs = 3;
void hanoi(int diskSize, int source, int dest, int spare){
    if(diskSize == 0)
        cout << "Move disk " << diskSize << " from peg " << source 
                << " to peg " << dest << endl;
    else{
        hanoi(diskSize - 1, source, spare, dest);
        cout << "Move disk " << diskSize << " from peg " << source 
                << " to peg " << dest << endl;
        hanoi(diskSize - 1, spare, dest, source);
    }
}

int main(int argc, char** argv) {
    
    hanoi(20,0,1,2); //note that diskSize is 0 inclusive

    return 0;
}

