/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 22, 2015, 11:13 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


/*Euclid's Algorithm
 *finds the greatest common divisor of two integers
 * O(log N) performance
 * NOTE: returns 1 if there is no GCD greater than 1...implying inputs are relatively prime
 */
int gcd(int m, int n){
    while(n != 0){
        int rem = m % n;
        m = n;
        n = rem;
    }
    return m;
}

int main(int argc, char** argv) {
  
    int m = 50;
    int n = 15;
    int answer = gcd(m, n);
    cout << answer;
    return 0;
}

