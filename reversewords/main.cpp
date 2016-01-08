/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 24, 2015, 1:11 PM
 */

#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*this function takes in a string with multiple words separated by a white space and
 *returns the reverse of all the words. example: "be the ball" would return "ball the be"
 */
string ReverseWords(string & s){
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.size();){
        int count = i;
        while(isalnum(s[count]))
            ++count;
        count -= 1;
        for(int m = count; i < m; i++, m--){
            char temp = s[i];
            s[i] = s[m];
            s[m] = temp;
        }
        i = count + 2;
    }   
    return s;
}

int main(int argc, char** argv) {
    
    string b = "Be the ball";
    string c = "An American is definitely an American";
    b = ReverseWords(b);
    cout << b;
    
    c = ReverseWords(c);
    cout << endl << c;
    
    
//    string a = "hello world";
//    reverse(a.begin(), a.end());
//    cout << a << "\n";
//    
//    int count = 0;
//    while(isalnum(a[count]))
//        ++count;
//    cout << count;
//    
//    
//    for(int i = 0, j = count - 1; i < j; i++, j--){
//        char temp = a[i];
//        a[i] = a[j];
//        a[j] = temp;
//    }
//    
//    cout << "\n" << a;
//    
//    for(int i = 0; i < a.size(); i++){
//        int count = i;
//        while(isalnum(a[count]))
//            ++count;
//        
//    }
    

    return 0;
}

