/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 24, 2015, 3:47 PM
 */

#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

/*Function to take in a reverse polish notation string and calculate the return value.
 * Note: use char - '0' to calculate decimal equivalent.
 * Note: does not check if the input is valid reverse polish notation.
 */
int reversepolish(const string & p){
    vector<int> v;
    for(int i = 0; i < p.size(); i++){
        if(p[i] == ',')
        {} //do nothing
        else if(p[i] == '+' || p[i] == '-' || p[i] == '*' || p[i] == '/'){
            int x = v.back();
            v.pop_back();
            int y = v.back();
            v.pop_back();
            switch(p[i]){
                case '+':
                    v.push_back(x + y);
                    break;
                case '-':
                    v.push_back(x - y);
                    break;
                case '*':
                    v.push_back(x * y);
                    break;
                case '/':
                    v.push_back(x / y);
                    break;  
            }   
        }
        else
            v.push_back(p[i] - '0');
    }
    return v.back();
}

int main(int argc, char** argv) {

    string p = "3,4,+,2,*,1,+";           //15
    string example = "9,9,*,1,+,1,+,1,+";   //84
    int answer = reversepolish(p);
    cout << answer;
    answer = reversepolish(example);
    cout << "\n" << answer;
    
    


//    cout << p[0];
//    vector<int> v;
//    int temp = p[0] - '0';
//    cout << "\n" << temp;
//    v.push_back(temp);
//    cout << temp;
    
    
    return 0;
}

