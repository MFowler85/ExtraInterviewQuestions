/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 24, 2015, 5:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <bitset>

using namespace std;

/*
 * 
 */
short parity(unsigned long x){
    short result = 0;
    while(x){
        result ^= (x & 1);
        x >>= 1;
    }
    return result;
}

int main(int argc, char** argv) {

    unsigned long value = 14; //14 = binary 1110;
    short answer = parity(value);
    cout << answer;
    
    
    unsigned short short1 = 4;
    bitset<16> bitset1(short1);
    cout << "\n" << bitset1 << endl;
    
    unsigned short short2 = short1 << 13; //shifted over 13 units
    bitset<16> bitset2(short2);
    cout << "\n" << bitset2 << endl;
    
    //cout << "\n" << sizeof(int);
    
    return 0;
}

