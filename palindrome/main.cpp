/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 24, 2015, 2:16 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
bool palindrome(const string & s){
    int j = s.size()-1;
    int i = 0;
    while(i < j){
        while(!isalnum(s[i]) && i < j)
            ++i;
        while(!isalnum(s[j]) && i < j)
            --j;
        if(tolower(s[i]) != tolower(s[j]))
            return false;
        i++;
        j--;
    }
    return true;
}

int main(int argc, char** argv) {

    string pal = "a man, a plan, a canal, panama"; //this is actually a palindrome...people are smart!
    bool answer = palindrome(pal);  
    if(answer == true)
        cout << pal << "  -------Is a palindrome!\n";
    else
        cout << pal << "  -------Not a palindrome!\n";
    
    
//    bool test = true;
//    const string s = "Hh";
//    if(tolower(s[0]) != tolower(s[1]))
//         test = false;
//    cout << test;
//    cout << "\n" << s;

    
    
    
    
    
    return 0;
}

