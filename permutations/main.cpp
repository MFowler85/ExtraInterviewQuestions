/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 5, 2015, 5:03 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*Function to find all the permutations of an array. Code from the interview book. 
 * 
 */
void DirectedPermutations(int i, vector<int> *A, vector<vector<int> > *result){
    if(i == A->size() - 1){
        result->push_back(*A);
        return;
    }
    for(int j = i; j < A->size(); ++j){
        swap((*A)[i], (*A)[j]);
        DirectedPermutations(i + 1, A, result);
        swap((*A)[i], (*A)[j]);
    }
}

vector<vector<int> > Permutations(vector<int> A){
    vector<vector<int> > result;
    DirectedPermutations(0, &A, & result);
    return result;
}
int main(int argc, char** argv) {
    
    srand(time(NULL));
    vector<int> A;
    for(int i = 0; i < 3; i++)
        A.push_back(rand() % 10 + 1);
    vector<vector<int> > B = Permutations(A);
    
    vector<int>::iterator col;
    vector<vector<int> >::iterator row;
    for(row = B.begin(); row != B.end(); row++){
        for(col = row->begin(); col != row->end(); col++){
            cout << *col << " ";   
        }
        cout << endl;
    }

    return 0;
}

