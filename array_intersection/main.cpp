/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 1, 2015, 4:33 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <map>
#include <bitset>

using namespace std;

/*Function which uses hashing to determine intersection of two vectors.
 * Also, can use the function to determine the union of two vectors since 
 * the hashing of both vectors into a single map yields the union.
 * NOT as efficient as simply iterating through two sorted vectors. However,
 * this works for unsorted arrays!
 * Printing Union: enter '1' to print unions, enter any other int to not print union.
 */
struct inter{
    int a;
    int b;
};

void print(const vector<int> & a){
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}

void printunion(map<int, inter>  amap){
    map<int, inter>::iterator itr;
    cout << "\nThe Union: ";
    for(itr = amap.begin(); itr != amap.end(); itr++)
        cout << itr->first << " ";
    cout << endl;
}

vector<int> intersection(const vector<int> & a, const vector<int> & b, int c){
    map<int, inter> amap;
    for(int i = 0; i < a.size(); i++){
        amap[a[i]].a++;
    }
    for(int i = 0; i < b.size(); i++){
        amap[b[i]].b++;
    }
    
    map<int, inter>::iterator itr;
    vector<int> answer;
    for(itr = amap.begin(); itr != amap.end(); itr++)
        if(itr->second.a == true && itr->second.b == true)
            answer.push_back(itr->first);
    if(c == 1)
        printunion(amap);
    return answer;
    
//    for(itr = amap.begin(); itr != amap.end(); itr++)
//        cout << itr->first << " " << itr->second.a << " " << itr->second.b << endl;
}


//this function is linear time O(nm) where n and m are the sizes of the passed
//vectors. They MUST be sorted else this function does not work. 
vector<int> sorted_intersection(vector<int>  a, vector<int> b){
    vector<int> answer;
    vector<int>::iterator itra = a.begin(), itrb = b.begin();
//    vector<int>::iterator itrb = b.begin();
    while(itra != a.end() && itrb != b.end()){
        if(*itra < *itrb)
            itra++;
        if(*itrb < *itra)
            itrb++;
        if(*itra == *itrb){
            answer.push_back(*itra);
            itra++; 
            itrb++;
        }
    }
    return answer;  
}

int main(int argc, char** argv) {
    
    srand(time(NULL));
    vector<int> a, b;
    int r1 = rand() % 10 + 5;
    int r2 = rand() % 30 + 5;
    for(int i = 0; i < r1; i++){
        a.push_back(rand() % 20 + 1);
    }
    for(int i = 0; i < r2; i++){
        b.push_back(rand() % 20 + 1);
    }
    
    cout << "Vector A: ";
    print(a);
    cout << "Vector B: ";
    print(b);
    vector<int> answer = intersection(a, b, 1);
    cout << "\nThe Intersection: ";
    print(answer);
    
    
    //this tests the sorted vectors function O(nm)
    
    vector<int> alpha, bravo, charlie;
    for(int i = 0; i < 20; i++){
        alpha.push_back(i);
        bravo.push_back(i+ 15); //only going to intersect at 5 numbers (15-19)
    }
    charlie = sorted_intersection(alpha, bravo);
    cout << "\nTesting the sorted_intersection function(on different data): ";
    print(charlie);
    
    

    
    return 0;
}

