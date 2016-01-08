/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 14, 2015, 11:57 AM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

/*Function used to take in an unsorted vector, along with a value k which
 * represents a difference value, and then determine how many pairs of values
 * in the vector there are given the difference.
 * ex.{1,7,5,8,2,12,3} has 8 pairs with a difference of k = 2.
 * This function returns all pairs, meaning (1,3) and (3,1) will be returned.
 * **If you want to remove duplicate pairs, simply divide the final answer by 2**
 */
int distinctK(const vector<int> & a, const int & k){
    map<int, int> b;
    for(int i = 0; i < a.size(); i++)
        b[a[i]]++;
    map<int, int>::iterator itr;
    int count = 0;
    for(itr = b.begin(); itr != b.end(); itr++){
        int v1 = itr->first + k;
        int v2 = itr->first - k;
        map<int, int>::iterator itr2;
        itr2 = b.find(v1);
        if(itr2 != b.end())
                count++;
        itr2 = b.find(v2);
        if(itr2 != b.end())
                count++;
    }
    return count;
}


//map<int,int> create_map() //this is just some sample code I wanted to check out
//{
//  map<int,int> m;
//  m[1] = 2;
//  m[3] = 4;
//  m[5] = 6;
//  return m;
//}

int main(int argc, char** argv) {
    
    int array[7] = {1,7,5,9,2,12,3};
    vector<int> a;
    for(int i = 0; i < 7; i++)
        a.push_back(array[i]);
    
    int answer = distinctK(a, 2);
    
    cout << answer;
    
    
//    map<int,int> m = create_map();
//    map<int, int>::iterator itr;
//    for(itr = m.begin(); itr != m.end(); itr++)
//        cout << itr->first << " " << itr->second << endl;
    
    return 0;
}

