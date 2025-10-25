/*
1. Write a function int square(int x) that returns the square of a number.
2. Write a function int sumThree(int a, int b, int c) that adds three numbers.
3. Call both functions in main() and print their results.
*/ 

#include <iostream>
using namespace std;
// 1.) 1. Write a function int square(int x) that returns the square of a number.
int square(int x,int b)
{
    cout<<"enter vaule for x "; 
    cin>>x;
    cout<<"enter value for b ";
    cin>> b;
    b = x; //makes b equal to a cause to find square of number its number times itself 
    return x * b;
}

// 2.) Write a function int sumThree(int a, int b, int c) that adds three numbers.
int sumThree(int a, int b, int c)
{
    cout<<"Enter number for a: ";
    cin>>a;
    cout<<"Enter number for b: ";
    cin>>b;
    cout<<"Enter number for c: ";
    cin>>c;
    return a+b+c;  
}


int main(){
	// 1.) 
	int x,b;
    int result = square(x,b); //sends the result back to where the function was called 
    cout<<result; //displays 

	//2.)
	int a,b,c;
    int sum = sumThree(a,b,c);
    cout<<"The sum for the numbers is: "<<sum<<endl;



	return 0;
}
