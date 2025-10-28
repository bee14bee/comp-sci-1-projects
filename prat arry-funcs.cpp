/* 
Function + Array
Write a program that:
Fills a 1D array of 6 integers with random numbers from 1–20.
Uses a function int total(int arr[], int size) to return the sum.
In main(), print all numbers and their total.
*/

/* 
Function + Array
Write a program that:
Fills a 1D array of 6 integers with random numbers from 1–20.
Uses a function int total(int arr[], int size) to return the sum.
In main(), print all numbers and their total.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int total(int arr[],int size)
{
  int sum = 0;
  for(int i=0; i<size;i++)
  {
    sum+=arr[i];
  }
  return sum;
}


int main()
{

  //seeding rand numbs 
  srand(time(0));
  
  int const SIZE = 6;
  int arr[SIZE];
  
  //input for array 
  cout<<"Numbers in the array: ";
  for(int i =0; i<SIZE;i++)
  {
    arr[i]=rand()%20+1;
  }

  for(int i =0; i<SIZE;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
    int nums = total(arr,SIZE);
    cout<<"The sum of the numbers in the array is: "<<nums<<endl;
  


  return 0;
}
