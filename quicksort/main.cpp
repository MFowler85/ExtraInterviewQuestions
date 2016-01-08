/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 30, 2015, 10:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*a simple quicksort algorithm, selects first element as pivot each time.
 * 
 */

int partition(vector<int>& A, int p,int q)
{
    int x= A[p];
    int i=p;
    int j;

    for(j=p+1; j<q; j++)
    {
        if(A[j]<=x)
        {
            i=i+1;
            swap(A[i],A[j]);
        }

    }

    swap(A[i],A[p]);
    return i;
}

void quickSort(vector<int>& A, int p,int q)
{
    int r;
    if(p<q)
    {
        r = partition(A, p,q);
        quickSort(A,p,r);  
        quickSort(A,r+1,q);
    }
}

//template<typename t>
//int pivot(vector<t> & a, int left, int right){
//    int p = left;
//    int pivotElement = a[left];
//    for(int i = p + 1; i <= right; i++){
//        if(a[i] <= pivotElement){
//            p = p + 1;
//            swap(a[i], a[p]);
//        }
//    }
//    swap(a[p], a[left]);
//    return p;    
//}
//
//
//template<typename t>
//void quicksort(vector<t> & a, int left, int right){
//    int piv;
//    if(left < right){
//        piv = pivot(a, left, right);
//        quicksort(a, left, piv);
//        quicksort(a, piv + 1, right);
//    }
//}

int main(int argc, char** argv) {

    srand(time(NULL));
    vector<int> a;
    for(int i = 0; i < 10; i++)
        a.push_back(rand() % 10 + 1);
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    
    cout << endl;
    quickSort(a, 0, a.size());  //problem when doing a.size() -1...excludes last index at times)
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    
    

    return 0;
}

