/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 25, 2015, 1:38 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*function to convert a string to an integer, does not use stoi() function.
 * 
 */
int str_conv(const string & s){
    int value = 0;
    bool flag = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '-'){
            flag = true;
            continue;
        }
        else{
            int temp = s[i] - '0';
            value = value * 10 + temp;
        }
    }
    return flag ? -value : value;
}

/*function to take an integer and turn it into a string
 *
 */
string int_conv(const int & s){
    int v = s;
    bool flag = false;
    if(s < 0)
        flag = true;
    v = abs(v); //must take abs(v) so that we can loop from first integer value
    string word = "";
    while(v){
        char c = v % 10 + '0';
        word = word + c;
        v /= 10;
    }
    reverse(word.begin(), word.end());
    return flag ? '-' + word : word;
}

int main(int argc, char** argv) {

    string value = "-50";
    cout << "The string is: " << value << "\n";
    cout << "The integer equivalent is: ";
    int answer = str_conv(value);
    cout << answer;
    cout << "\nAs proof that this is an integer, we will double the value of it: ";
    answer *= 2;
    cout << answer << "\n";
    
    int e = -123;
    cout << "\nNow we will turn the integer " << e << " into a string.\n";
    string s = int_conv(e);
    cout << "The string result is: " <<  s;

    return 0;
}

