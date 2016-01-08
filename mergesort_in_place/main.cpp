/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 2, 2015, 11:14 AM
 */

#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

/*Function which merges two sorted arrays in place. The array "a" is assumed to be
 * large enough to take in the size of array b. 
 * O(m + n)
 */
void mergeInPlace(vector<int> & a, const vector<int> b, int aback, int bback){
    int back = aback + bback - 1;
//    cout << back;
    int enda = aback - 1, endb = bback - 1;
    while(enda > -1 && endb > -1)
        a[back--] = a[enda] > b[endb] ? a[enda--] : b[endb--];
    while(endb > -1)
        a[back--] = b[endb--];   
}


int main(int argc, char** argv) {
       
    int array[7] = {5,13,17};
    int array2[4] = {3,7,11,19};
    int aback = 3, bback = 4;
    vector<int> a, b;
    for(int i = 0; i < 7; i++)
        a.push_back(array[i]);
    for(int i = 0; i < 4; i++)
        b.push_back(array2[i]);
    
    mergeInPlace(a, b, aback, bback);
    
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    
    return 0;
}

