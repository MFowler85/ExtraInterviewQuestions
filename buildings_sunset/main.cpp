/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 29, 2015, 2:48 PM
 */

#include <cstdlib>
#include <stack>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*Function to determine if a vector of pairs denoting building names and heights will be able to
 * see the sunset. The buildings are scanned from east to west. The output is a vector containing
 * any buildings which will be able to see the sunset.
 */
vector<pair<string, int> > sunset(const vector<pair<string, int> > & a){
    stack<pair<string, int> > st;
    for(int i = 0; i < a.size(); i++){
        pair<string, int> curr = a[i];
        while(!st.empty()){
            if(curr.second >= st.top().second){
                st.pop();
                continue;
            }
            break;
        }
        st.push(curr);
    }
    
    vector<pair<string, int> > answer;
    while(!st.empty()){
        answer.push_back(st.top());
        st.pop();
    }
    return answer;
} 

int main(int argc, char** argv) {
    //85, 40, 100, 20, 150, 100, 50, 80
    
    vector<pair<string, int> > a;
    a.push_back(make_pair("darkness", 85));
    a.push_back(make_pair("no sun", 40));
    a.push_back(make_pair("blocked out", 100));
    a.push_back(make_pair("what is a sunset", 20));
    a.push_back(make_pair("sunset for days", 150));
    a.push_back(make_pair("sunset this", 100));
    a.push_back(make_pair("sunset denied", 50));
    a.push_back(make_pair("beachfront", 80));
    
    for(int i = 0; i < a.size(); i++){
        cout << a[i].first << " " <<  a[i].second << endl;
    }
        
    vector<pair<string, int> > b;
    b = sunset(a);
    reverse(b.begin(), b.end()); //reverses vector b, which yields the east to west result.
      
    cout << endl << "Here are the buildings that will get to see the sunset(East to West)!" << endl << endl;
    vector<pair<string, int> >::iterator itr;
    for(int i = 0; i < b.size(); i++){
        cout << "Building Name: " << b[i].first << "    Height " << b[i].second << endl;
    }

    return 0;
}

