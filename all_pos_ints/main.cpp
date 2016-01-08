/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 14, 2015, 1:17 PM
 */

#include <cstdlib>
#include <algorithm>
#include <math.h>
#include <iostream>
#include <map>
#include <list>

using namespace std;

/*This code shows how to remove unnecessary work. 
 * Originally this code had 4 loops resulting in O(n^4)
 * However, by calculating the value of the last loop using simple algebra and
 * checking if this works in the if statement, we can remove the unnecessary work.
 * **Note: have to use pow() in the <math.h> file to determine exponents**
 * 
 * I also do the "Duplicated work" from the book answer here, this code uses
 * a map to has the results of a^3 + b^3 into the map. Then we can simply 
 * print out he list of pairs that were used to make that result. Double looping the
 * list pairs results in the final answer. 
 * ***makes the runtime only O(n^2)***
 * 
 * **both answers are from book, not my code **
 */
int main(int argc, char** argv) {
    
//    int n = 100;
//    int count = 0;
//    for(int i = 1; i < n; i++)
//        for(int j = 1; j < n; j++)
//            for(int k = 1; k < n; k++){
//                int d = pow((pow(i,3) + pow(j, 3) + pow(k, 3)), 1/3);
//                if(pow(i,3) + pow(j, 3) == pow(k, 3) + pow(d, 3)){
//                    cout << i << j << k << d << endl;
//                    count++;
//                }
//            }
//    cout << endl << endl << "Total: " << count << endl;
                
    
    map<int, list<pair<int,int> > > m;
    int n = 1000;
    for(int i = 1; i < n; i++)
        for(int j = 1; j < n; j++){
            int result = pow(i, 3) + pow(j, 3);
            m[result].push_back(make_pair(i, j));
        }
    
    map<int, list<pair<int,int> > >::iterator itr;
    list<pair<int,int> >::iterator itr2;
    list<pair<int,int> >::iterator itr3;
    cout << m.size() << endl << endl;
    for(itr = m.begin(); itr != m.end(); itr++){
        cout << itr->first << ": ";
        list<pair<int, int> > lst = itr->second;   
        for(itr2 = itr->second.begin(); itr2 != itr->second.end(); itr2++){
            for(itr3 = itr->second.begin(); itr3 != itr->second.end(); itr3++)
                cout << "(" << itr2->first << ", " << itr2->second << ", " << itr3->first << ", " << itr3->second << ") ";
        }
        cout << endl;
    }
    
    return 0;
}

