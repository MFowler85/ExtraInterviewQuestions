/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 28, 2015, 2:17 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
//#include <time>


using namespace std;

/*a mergesort routine from the cmps 261 book
 * recursively divided up the vector and then merges the pieces back together in sorted order
 * O(nlogn)
 */

template<typename Comparable>
void merge(vector<Comparable> & a, vector<Comparable> & tmpArray, int leftPos, int rightPos, int rightEnd){
    int leftEnd = rightPos - 1;
    int tmpPos = leftPos;
    int numElements = rightEnd - leftPos + 1;
    
    while(leftPos <= leftEnd && rightPos <= rightEnd)
        if(a[leftPos] <= a[rightPos])
            tmpArray[tmpPos++] = a[leftPos++];
        else
            tmpArray[tmpPos++] = a[rightPos++];
    while(leftPos <= leftEnd)
        tmpArray[tmpPos++] = a[leftPos++];
    while(rightPos <= rightEnd)
        tmpArray[tmpPos++] = a[rightPos++];
    
    for(int i = 0; i < numElements; i++, rightEnd--)
        a[rightEnd] = tmpArray[rightEnd];
}

template<typename Comparable>
void mergeSort(vector<Comparable> & a, vector<Comparable> & tmpArray, int left, int right){
    if(left < right){
        int center = (left + right) / 2;
        mergeSort(a, tmpArray, left, center);
        mergeSort(a, tmpArray, center + 1, right);
        merge(a, tmpArray, left, center + 1, right);
    }
}


template<typename Comparable>
void mergeSort(vector<Comparable> & a){
    vector<Comparable> tmpArray(a.size());
    mergeSort(a, tmpArray, 0, a.size() - 1);
}



int main(int argc, char** argv) {
    
    srand(time(NULL));
    
    vector<int> v;
    for(int i = 0; i < 1000; i++)
        v.push_back(rand() % 255 + 1);
    mergeSort(v); //sorts the random values 
    
//    time_t t;
//    time(&t);
    //t = clock(); //time stamp

//    t = clock() - t;
//    int time = t;
//    time = (time / 86400) / 365;
//    cout << "The elapsed time for this mergesort was: " << time << "\n";

//    vector<int>::iterator itr = v.begin();
//    while(itr != v.end())
//        cout << *itr++ << " ";

    return 0;
}

