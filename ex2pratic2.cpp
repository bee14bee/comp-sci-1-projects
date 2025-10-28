/* 
Practice 2: Max and Min in an Array (Passing Arrays to Functions)
Write a program that:
Fills a 10-element integer array with random numbers between 10 and 100.
Uses a function int findMax(const int arr[], int size) to return the maximum value.
Uses another function int findMin(const int arr[], int size) to return the minimum value.
In main(), print all array values, then display the max and min.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int findMax(const int arr[], int size)
{
  max=arr[0];
  for(int i =1; i<size;i++)
  {
      if(arr[i]> max)
  {
    max = arr[i];
  }
  return max;
}

int findMin(const int arr[],int size)
{
  min=arr[0];
  for(int i =1; i<size;i++)
  {
      if(arr[i]< min)
  {
    min = arr[i];
  }
  return min;
}


int main()
{

  //random genorator
  srand(time(0));
  

  //input array
  int const SIZE=10
  int arr[SIZE];

  for(int i =0; i<SIZE;i++)
  {
    arr[i]= rand%91+10;
  }

  //displays array 
  for(int i =0; i<SIZE;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  minVal=findMin(arr,size);
  maxVal=findMax(arr,size);

  cout<<"The max value is: "<<maxVal<<endl;
  cout<<"The Min value is: "<<minVal<<endl;


  return 0;
}
