/* 
 * File:   main.cpp
 * Author: mcf8379
 *
 * Created on July 5, 2015, 2:26 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*N-Queens algorithm from wikipedia. Uses backtracking.
 * 
 */
const int N = 4;  //size of the number of queens
int position[N];  //array used to store solution(s)

// Check if a position is safe
bool isSafe(int queen_number, int row_position)
{
	// Check each queen before this one
	for (int i = 0; i < queen_number; i++)
	{
		// Get another queen's row_position
		int other_row_pos = position[i];

		// Now check if they're in the same row or diagonals
		if (other_row_pos == row_position || // Same row
			other_row_pos == row_position - (queen_number - i) || // Same diagonal
			other_row_pos == row_position + (queen_number - i))   // Same diagonal
			return false;
	}
	return true;
}


// Recursively generate a tuple like [0 0 0 0], then [0 0 0 1] then etc...
void solve(int k)
{
	if (k == N) // We placed N-1 queens (0 included), problem solved!
	{
		// Solution found!
		cout << "Solution: ";
		for (int i = 0; i < N; i++)
			cout << position[i] << " ";
		cout << endl;
	}
	else
	{
		for (int i = 0; i < N; i++) // Generate ALL combinations
		{
			// Before putting a queen (the k-th queen) into a row, test it for safeness
			if (isSafe(k, i))
			{
				position[k] = i;
				// Place another queen
				solve(k + 1);
			}
		}
	}
}


int main(int argc, char** argv) {
    
    solve(0); //0 is just used to start the counting, until k == N and therefore solved...
    
    return 0;
}

