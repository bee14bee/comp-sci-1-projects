/* 
Fill a 2×3 array with random numbers 1–50 and find the total of each column.
Modify your program to find the average of all numbers in a 2D array.
*/

#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std; 

int main()
{
	//variables
	srand(time(0));
	const int ROWS=2, COLS=3;
	int arr[ROWS][COLS]; 

	//input for array using random numbers
	for(int r =0; r <ROWS; r++)
	{
		for(int c = 0; c < COLS; c++)
		{
			arr[r][c]= rand()%100;
		}
	}

	//display output
	for(int r =0; r <ROWS; r++)
	{
		for(int c = 0; c < COLS; c++)
		{
			cout<<arr[r][c]<<" ";
		}
		cout<<endl;
	}

	//find avg for all elements (find the sum then make variable to find averages)
	int total_sum = 0;
	for (int r = 0; r < ROWS; r++) 
	{
        for (int c = 0; c < COLS; c++) 
		{
            total_sum += arr[r][c]; 
        }
    }
	
    int avg_all = total_sum / (ROWS * COLS);   // integer average
    cout << "Average of all elements: " << avg_all << endl;
		

	return 0;
}
