/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 6, 2015, 11:27 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*
 * 
 */
vector<int> fibonacci(int n){
    vector<int> a;
    if(n == 0){
        a.push_back(0);
        return a;
    }
    if(n == 1){
        a.push_back(0);
        a.push_back(1);
        return a;
    }
    else{
        a.push_back(0);
        a.push_back(1);
        for(int i = 2; i <= n; i++){
            int value = a[i-1]+a[i-2];
            a.push_back(value);
        }
    }
    return a;
}
int main(int argc, char** argv) {
    
    vector<int> a = fibonacci(10);
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    return 0;
}

