/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 25, 2015, 12:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*An algorithm which buys and then sells later for the best profit.
 * Brute Force method with O(n^2) runtime
 */
int buysell(const vector<int> & a){
    int profit = 0;
    for(int i = 0; i < a.size(); i++){
        for(int j = i + 1; j < a.size(); j++){
            int diff = a[j] - a[i];
            if(diff > profit)
                profit = diff;
        }
    }
    return profit;
}

int main(int argc, char** argv) {
    
    int prices[10] = {310, 315, 275, 295, 260, 270, 290, 230, 255, 250};
    vector<int> stock;
    for(int i = 0; i < 10; i++)
        stock.push_back(prices[i]);
    for(int i = 0; i < stock.size(); i++)
        cout << stock[i] << " ";
   
    cout << "\nThe maximum profit for a buy and then sell on this day is: ";
    int profit = buysell(stock);
    cout << profit;
    cout << "\n";
    
    return 0;
}

