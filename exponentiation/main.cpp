/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 28, 2015, 4:24 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
long expon(long val, int exp){
    long answer = 1;
    while(exp > 0){
        answer = answer * val;
        --exp;
    }
    return answer;
        
}

long expon_recurs(long val, int exp){ //recursive form of doing this O(logn)
    if(exp == 0)
        return 1;
    if(exp == 1)
        return val;
    if(exp % 2 == 0)
        return expon_recurs(val * val, exp / 2);
    else
        return expon_recurs(val * val, exp / 2) * val;
}


int main(int argc, char** argv) {
    
    long a = expon(2, 6);
    cout << a;
    
    long b = expon_recurs(2, 3);
    cout << "\n" << b;
    
    return 0;
}

