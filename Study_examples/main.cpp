/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on June 12, 2015, 8:21 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include "IntCell.h"
#include <time.h>
#include <stdlib.h>
#include <list>
#include <utility>
#include <queue>
#include <map>

using namespace std;

/*
 * 
 */
//struct node{
//    int data;
//    int * next;
//};
//
//int change(int &d){
//    d = d + 1;
//    return d;
//}

struct comparator{
    bool operator() ( int i, int j){
        return i > j;
    }
};




int main(int argc, char** argv)
{
    
    
    map<char, int> a;
    string s = "hippopotamous";
    for(int i = 0; i < s.size(); i++)
        a[s[i]]++;
    map<char, int>::iterator itr;
    for(itr = a.begin(); itr != a.end(); itr++)
        cout << itr->first << " " << itr->second << endl;
    
    
    
//    priority_queue<int, vector<int>, comparator> a;  //using comparator above allows for minheap, maxheap is default without this.
//    for(int i = 0; i < 10; i++){
//        a.push(rand() %100 + 1);
//    }
//    while(!a.empty()){
//        cout << a.top() << " ";
//        a.pop();
//    }
    
    
//    priority_queue<int, vector<int>, comparator> minHeap;
// 
//    minHeap.push(10);
//    minHeap.push(5);
//    minHeap.push(12);
//    minHeap.push(3);
//    minHeap.push(3);
//    minHeap.push(4);
// 
//    while ( !minHeap.empty()){
//        cout << minHeap.top() << " ";
//        minHeap.pop();
//    }
//    
    
//    enum Color { RED, GREEN, BLUE };
//    Color r = GREEN;
//    switch(r) {
//         case RED   : std::cout << "red"   "\n"; break;
//         case GREEN : std::cout << "green" "\n"; break;
//         case BLUE  : std::cout << "blue"  "\n"; break;
//    }
//    
//    Color car = RED;
//    if(car == RED)
//        cout << "It is Red!";
//    else
//        cout << "something else!";
    
    
//    int val = 25;
//    cout << val << " " << & val;
//    
//    int * other = &val;
//    int deref = * other;
//    cout << endl << deref;
    
//    int * array = new int [10];
//    for(int i = 0; i < 10; i++)
//        array[i] = i;
//    cout << array[5];
//    delete [] array;

//    int * pointer;
//    pointer = 5;
//    cout << pointer;
    
    
//    pair<int,int> b (5,5);
//    cout << b.first << " " << b.second;
    
//    vector<pair<int, int> > a;
        
//    for(int i = 0; i < 10; i++)
//        a.push_back(make_pair(i, i+ 1));
//    for(int i = 0; i < 10; i++)
//        cout << a[i].first << " " << a[i].second << endl;

//    list<int> lst;
//    for(int i = 0; i < 10; i++)
//        lst.push_back(i);
//    list<int>::iterator itr;
//    for(itr = lst.begin(); itr != lst.end(); itr++)
//        cout << *itr << endl;
    
 
//     string s = "berry";   
//    cout << s.size() << "\n";
////    cout << *s;
//    cout << &s;
    
    
    
    
//    node * t = new node;
//    t->data = 5;
//    cout << t->data;
//    delete t;
    
//    int x = 1;
//    int y = 2;
//    
//    int z = change(x);
//    cout << x << " " << y << " " << z << "\n";
        
    
//    string array[5] = {"apple", "berry", "grape", "pineapple", "watermelon"};
//    
//    list<string> lst;
//    for(int i = 0; i < 5; i++){
//        lst.push_back(array[i]);
//    }
//    
//    for(list<string>::iterator itr = lst.begin(); itr != lst.end(); itr++)
//        cout << *itr << "\n";
    //or
//    list<string>::iterator itr = lst.begin();
//    while(itr != lst.end())
//        cout << *itr++ << "\n";

   
    
   
    
    
//    IntCell apple;
//    cout << apple.read();
//    apple.write(5);
//    cout << "\n" << apple.read();
    
//    vector<IntCell> cells(10);
//    for(int i = 0; i < 10; i++){
//        cells[i].write(i);
//    }
//    for(int i = 0; i < cells.size(); i++){
//        cout << "\n" << cells[i].read();
//    }
//    
//    cells.resize(100);
//    cout << "\n" << cells.size();
//    for(int i = 0; i < cells.size(); i++){
//        cout << "\n" << cells[i].read();
//    }
//    
//    apple.write(10);
//    cout << "\n" << apple.read();   
    
//    vector<int> squares(100);
//    for(int i = 0; i < squares.size(); i++)
//    {
//        squares[i] = i * i;
//    }
//    
//    for(int i = 0; i < squares.size(); i++)
//    {
//        cout << "Square " << i << " has area  equal to " << squares[i] << "\n"; 
//    }
//    
//    cout << squares.size();
//    
//    vector<int> storage(25);
//    
//    cout << "\n" << storage.size();  
//    IntCell * m;
//    m = new IntCell(5);
//    cout << m->read();
//    m->write(10);
//    cout << "\nNow we change this object's value to: " << m->read();
//    delete m; //ALWAYS DELETE YOUR OBJECTS WHEN FINISHED!
    
//    string array[7] = {"cat", "dog", "squirrel", "lizard", "bird"};
//    char array2[5] = {'1', '1', '1', '1', '1'};
//    vector<string> animal(array, array + 5);
//    animal.push_back("dolphin");
//    //{"dolphin", "gator", "zebra"};
//    for(int i = 0; i < animal.size(); i++)
//    {
//        cout << animal[i] << "\n";
//    }

//    int y = sizeof('b');
//    cout << y;
//    
//    char x[256];
//    printf("enter a sentence: ");
//    gets(x);
//    int y = strlen(x);
//    printf("You entered a sentence that is %u characters long.\n", strlen(x));
    
// 
//    char mystr[100] = "test";
//    cout << strlen(mystr);
//    printf("\nthis string has %d characters.", strlen(mystr)); //c style 
    
//    srand(time(NULL)); //random seed initialization
//    int x = time(NULL); //displays time in seconds
//    int time = (x / (3600 * 24 * 365)); //converts the seconds to years (since Jan 1, 1970);
//    cout << "\n" << time;
    
    
//    vector<int> store(25);
//    for(int i = 0; i < store.size(); i++)
//    {
//        //store[i] = rand() % 100 + 1; //each index initialized to a random number b/t 1-100
//        cout << "enter values: ";
//        cin >> store[i];
//        
//    }
//    
//    cout << store.size();
//    for(int i = 0; i < store.size(); i++)
//    {
//        cout <<  "Index " << i << " = " << store[i] << "\n";
//
//    }
    
///* clock example: frequency of primes */
//#include <stdio.h>      /* printf */
//#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
//#include <math.h>       /* sqrt */
//
//int frequency_of_primes (int n) {
//  int i,j;
//  int freq=n-1;
//  for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
//  return freq;
//}
//
//int main ()
//{
//  clock_t t;
//  int f;
//  t = clock();
//  printf ("Calculating...\n");
//  f = frequency_of_primes (99999);
//  printf ("The number of primes lower than 100,000 is: %d\n",f);
//  t = clock() - t;
//  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
//  return 0;
//}

//    int *p = new int;
//    p = (int *)5;
//    
//    cout << p;
    
    
//    string s = "be the ball";
//    reverse(s.begin(), s.end());
//    cout << s;
    
//    for(int i = 0; i < 100; i++){
//            cout << i << "\n";
//            i = i + 10;
//    }
//    

    return 0;
}

