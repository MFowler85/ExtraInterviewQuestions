/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 28, 2015, 5:16 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

/*print is a function which uses legal but bad recursion. 
 * Will overflow the stack and slow the system down!
 * many, many activation records. One for each print!
 */
template<typename Iterator>
void print(Iterator start, Iterator end, ostream & out = cout){
    if(start == end)
        return;
    out << *start++ << endl;
    print(start, end, out);
}
int main(int argc, char** argv) {

    vector<int> hello;
    for(int i = 0; i < 20000000; i++) //increase value to cause stack overflow due to "legal" but bad recursion
        hello.push_back(i);
    
    vector<int>::iterator itr = hello.begin();
    print(itr, hello.end(), cout);
    return 0;
}

