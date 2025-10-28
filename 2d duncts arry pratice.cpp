/*
3) Random 2D Array
Write a program that:
Creates a 2×3 integer array with random numbers 10–99.
Uses printMatrix(int arr[][3], int rows) to print it neatly.
Uses findMax(int arr[][3], int rows) to return the largest number.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


//using void because want to print something 
void printMatrix(int arr[][3], int rows)
{
    cout<<"Array is: "<<endl;
  for(int r=0; r < rows;r++)
  {
    for(int c=0; c < 3 ;c++)
      {
        cout<< arr[r][c]<<" ";
      }
      cout<<endl;
  }
}

//using in to find something
int findMax(int arr[][3], int rows)
{
    int max = arr[0][0];
  for(int r=0; r < rows;r++)
  {
    for(int c=0; c < 3;c++)
      {
        if(arr[r][c]> max)
        {
          max=arr[r][c];
        }
      }
  }
  return max;
}

int main(){

//seeding rand 
  srand(time(0));

  int const ROWS = 2;
  int const COLS = 3;
  int arr[ROWS][COLS];
//input for array 
  for(int r=0; r < ROWS;r++)
  {
    for(int c=0; c < COLS;c++)
      {
        arr[r][c] = rand()%90+10;
      }
  }
//display array 
 printMatrix(arr,ROWS); //need paramemters even for void
int large = findMax(arr,ROWS);

  cout<<"The largest number in the array is: "<<large<<endl;


  return 0;
}
