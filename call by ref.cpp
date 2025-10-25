/*
1.) Write a function void triple(int &num) that multiplies its input by 3.
2.) Write a function void swapNums(int &a, int &b) that swaps two numbers 
using a temporary variable.
*/
#include <iostream>
using namespace std;

// 1.) 
void triple(int &num)
{
	num= num*3;
}

// 2.) 
void swapNums(int &a, int &b)
{
	//dont need strcpy thats only for character just manually swap 
    int temp = a;
    a =b;
    b= temp;
}
int main(){
	//1.) 
	int num;
	cout<<"Enter number: ";
	cin>> num;

	triple(num); //calling void function
	cout<<num<<endl;
	
	//2.)
	int num1;
	int num2;
	
	cout<<"Enter number 1:";
	cin>>num1;
	cout<<"Enter number 2; ";
	cin>>num2;
	
	cout<<"before swap: "<<num1<< " and "<<num2<<endl;
	
	swapNums(num1,num2); //swapping them 
	
	cout<<"after swap: "<<num1<< " and "<<num2<<endl;
	
	

	return 0;
}
