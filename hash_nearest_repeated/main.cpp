/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 1, 2015, 1:43 PM
 */

#include <cstdlib>
#include <map>
#include <vector>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

/*Function to determine nearest distance between two equal strings. 
 * takes in a vector<string> filled with strings as input
 * returns the shortest distance between two identical strings 
 */
struct freq{
    int min;
    int count;
    vector<int> prox;  //vector to store the indices of each occurrence, can improve this by just considering previous and current!
};

void print(map<string, freq> a){
    map<string, freq>::iterator itr;
    cout << setiosflags(ios::left) << setw(12) << "Word Used" << setw(9) << "Frequency" << "  " << "Minimum Distance" << endl;
    cout << "---------------------------------------" << endl;
    for(itr = a.begin(); itr != a.end(); itr++){
        cout << setiosflags(ios::left) << setw(12) << itr->first << setw(9) << itr->second.count << "  " << itr->second.min << endl;
    }
}

pair<string, int> closest(const vector<string> & a){
    map<string, freq> m;
    for(int i = 0; i < a.size(); i++){
        m[a[i]].count++;
        
        m[a[i]].prox.push_back(i);
        if(m[a[i]].count > 1){
            int min = m[a[i]].prox.back() - m[a[i]].prox[m[a[i]].prox.size() - 2];
            min -= 1;//makes min only equal to values between the indices.
            if(min < m[a[i]].min || m[a[i]].min == 0) //pretend we can't have a distance of 0
                m[a[i]].min = min;
        }
    }
    map<string, freq>::iterator itr;
    pair<string, int> answer("", 1000);
    for(itr = m.begin(); itr != m.end(); itr++){
        if(itr->second.count > 1)
            if(itr->second.min < answer.second){
                answer.second = itr->second.min;
                answer.first = itr->first;
            }
    }
    print(m);
    return answer;
}

int main(int argc, char** argv) {
   
    string example = "Peter Piper picked a peck of pickled pepper peck of pickled peppers Peter Piper picked If Peter Piper picked a peck of pickled peppers Where's the peck of pickled peppers Peter Piper picked";
   
    istringstream iss(example);
    vector<string> tokens; //vector to store the strings from example.
    copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(tokens));
    //the above uses fancy STL to get tokens out of the string example.

    
    pair<string, int> answer = closest(tokens);
    cout << endl << "The word and distance answer is: " << endl;
    cout << setw(10) << "Word: " << answer.first << endl << setw(10) <<"Distance: " << answer.second << endl;
    
    return 0;
}





//    book.push_back("All");
//    book.push_back("work");
//    book.push_back("and");
//    book.push_back("no");
//    book.push_back("play");
//    book.push_back("makes");
//    book.push_back("for");
//    book.push_back("no");
//    book.push_back("work");
//    book.push_back("no");
//    book.push_back("fun");
//    book.push_back("and");
//    book.push_back("no");
//    book.push_back("results");