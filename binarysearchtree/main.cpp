/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 29, 2015, 1:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <BST>
using namespace std;

/*
 * 
 */
vector<int> BSTInSortedOrder(const unique_ptr<BSTNode<int> > & tree){
    stack<const BSTNode<int>*> s;
    const auto* curr = tree.get();
    vector<int> result;
    
    while(!s.empty() || curr){
        if(curr){
            s.push(curr); 
            //going left
            curr = curr->left.get();
        }
        else
        {
            //going up
            curr = s.top();
            s.pop();
            result.emplace_back(curr->data);
            //going right
            curr = curr->right.get();
        }
    }
    return result;
}

int main(int argc, char** argv) {
    
    

    return 0;
}

