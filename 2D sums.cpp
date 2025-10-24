/*
Compute the sum of each row and column in a 2D array
*/

#include <iostream>
using namespace std;

int main()
{
	//Variables for arrays
	const int ROWS= 2, COLS=3;
	int arr[2][3];

	//input for 2D array
	for(int r = 0; r <ROWS; r++)
	{
		for(int c = 0; c < COLS;c++)
		{
			cout<<"Enter a number for rows "<<r<< " Enter number for Cols "<<c<<endl;
			cin>>arr[r][c];
		}
	}
	
	cout<<endl;

	//Display 2D array
		for(int r = 0; r <ROWS; r++)
	{
		for(int c = 0; c < COLS;c++)
		{
			
			cout<<arr[r][c]<<" ";
		}
		cout<<endl;
	}
	


    int Sum = 0;
	//computing sum of rows 
		for(int r = 0; r <ROWS; r++)
		{
			for(int c = 0; c < COLS;c++)
			{
				Sum += arr[r][c];
			}
		}
		cout<<"Sum of Rows = "<<Sum<<endl;

	
		//computing sum of cols
		for(int c = 0; c <COLS; c++)
		{
			for(int r = 0; r < ROWS;r++)
			{
				Sum += arr[r][c];
			}
		}
		cout<<"Sum of Cols = "<<Sum<<endl;

	return 0;
}
