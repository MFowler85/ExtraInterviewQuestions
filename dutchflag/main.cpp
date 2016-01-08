/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 25, 2015, 11:49 AM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

/*function to sort an array about the pivot. Only sorts by less than or greater than, 
 * so outcome is not fully sorted, only relatively sorted to the pivot. 
 * 
 */
void dutchflag(vector<int> & b, int piv){
    int pivot = b[piv];
    int equal = 0, lower = 0, upper = b.size() - 1;
    while(equal <= upper){
        if(b[equal] < pivot)
            swap(b[lower++], b[equal++]);
        else if(b[equal] == pivot)
            ++equal;
        else
            swap(b[equal], b[upper--]);          
        }
    }



int main(int argc, char** argv) {

    
    srand(time(NULL));
    vector<int> a;
    for(int i = 0; i < 10; i++){
        a.push_back(rand() % 5 + 1);
    }
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    int piv_val = a[4];
    cout << "\nNow we apply the dutchflag algorithm: \n";
    dutchflag(a, 4);
    for(int i = 0; i < a.size(); i++){
        if(a[i] == piv_val){
            cout << "(" << a[i] << ") "; //pivot element is in parenthesis, will also enclose duplicates.
            continue;
        }
        
        cout << a[i] << " ";
    }
    cout << "\n";
    
    return 0;
}

