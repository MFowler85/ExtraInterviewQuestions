/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 22, 2015, 11:24 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/* fact is a function to calculate the factorial of a value.
 * currently only performs positive integers including 0.
 * recursive implementation.
 * O(log N) performance
 */
double fact(int value){
    if(value == 0)
        return 1;
    else if(value == 1)
        return value;
    else
        return value * fact(value - 1);
}

/*fact2 is another factorial function
 *does not use recursion
 */
double fact2(int value){
    
    int answer = value;
    
    if(value == 0)
        return 1;
    else if (value == 1)
        return value;
    while(value > 1){
        value--;
        answer *= value;
    }
    return answer;
    

}

int main(int argc, char** argv) {
    

    double answer = fact(5);
    cout << answer << "\n";
    
    double solution = fact2(5);
    cout << solution << "\n";
    
    return 0;
}

