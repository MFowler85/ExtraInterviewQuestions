/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 29, 2015, 3:40 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*Function to make a vector into a min heap. 
 * Must overload the < operator unless you are using primitives like int.
 */
template<typename t>
vector<t> minheap(const vector<t> & a){
    vector<t> temp;
    temp.push_back(-1); //allows us to skip the first element for easier index computation
    for(int i = 0; i < a.size(); i++){
        temp.push_back(a[i]);
        int j = i;
        while(true){
            if(temp[j] < temp[j/2]){
                swap(temp[j], temp[j/2]);
                j /= 2;
                continue;
            }
            break;
        }
    }
    return temp;
} 

/*deletes the min from the heap and returns it, keeping the heap order
 */
//template<typename t>
//t deletemin(vector<t> & a){
//    t answer = a[1];
//    a[1] = a.back();
//    a.pop_back();
//    int j = 1;
//    int size = a.size() - 1;
//    while(true){
//        if(2j <= size && 2j + 1 <= size){
//            if(a[2j] < a[2j + 1] && a[j] > a[2j]){
//                swap(a[j], a[2j]);
//                j = 2j;
//            }
//            else if(a[2j] > a[2j + 1] && a[j] > a[2j]){
//                swap(a[j], a[2j + 1]);
//                j = 2j + 1;
//            }
//            continue;
//        }
//        if(2j <= size && 2j + 1 > size)
//            if(a[2j] < a[j])
//
//    }
//    
//}

int main(int argc, char** argv) {
    
    srand(time(NULL));
    vector<int> a;
    for(int i = 0; i < 30; i++)
        a.push_back(rand() % 100 + 1);
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    
    
    vector<int> b;
    b = minheap(a);
    
    cout << endl << endl << endl;
    for(int i = 1; i < b.size(); i++)
        cout << b[i] << " ";

    return 0;
}

