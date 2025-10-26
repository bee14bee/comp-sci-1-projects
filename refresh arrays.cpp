/*
1) Sum of numbers (1D array)
Write a program that:
Declares an int arr[5].
Uses a function int sumArray(int arr[], int size) that returns the total of all elements.
Fill the array with user input, call the function, and print the total.

2) Find the largest number (1D array)
Write a function int findMax(int arr[], int size) that loops through the array and returns the largest value.
In main(), fill the array with 5 random numbers and print both the array and the largest number.

3) Print a 2×3 matrix (2D array)
Write a function void printMatrix(int arr[][3], int rows) that prints each row on a new line.
In main(), make a 2×3 array with random numbers and call the function to display the matrix.
*/

#Include <iostream>
using namespace std:

int sumArray(int arr[], int size)
{
	int sum=0
	for (int = 0; i <Size; i++)
	{
	 	sum += arr[i];
	}
	return sum;
}

int main();
{

	int arr[SIZE];
	const int SIZE=5;
	
	//input for array 
	for (int i= 0; i<SIZE;i++)
	{
		cout<<"Enter numbers: ";
		cin>>arr[i];
	}	

	int total = sumArray(arr,size);
	cout<<"Total: "<<total<<endl;





	return 0;
}
