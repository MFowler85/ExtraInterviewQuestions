/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 30, 2015, 3:27 PM
 */

#include <cstdlib>
#include <map>
#include <string>
#include <iostream>

using namespace std;

/*Function that uses the map class (hash table) to determine if any
 * of the permutations of a string can be a palindrome.
 */

bool hash_palindrome(const string & s){
    map<char, int> char_frequencies;
    for(int i = 0; i < s.size(); i++){
        ++char_frequencies[s[i]];
    }
    int odd_freq = 0;
    map<char, int>::iterator itr; 
    for(itr = char_frequencies.begin(); itr != char_frequencies.end(); itr++){
        if((itr->second % 2) && ++odd_freq > 1){
            return false;
        }
    }
    return true;
}

int main(int argc, char** argv) {
    
    string a = "yyyyx";
    bool answer = hash_palindrome(a);
    cout << answer;
    

    return 0;
}

