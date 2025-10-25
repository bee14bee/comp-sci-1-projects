#include <iostream>
#include <cmath> // for abs()
using namespace std;

// 1.) Absolute difference
int difference(int a, int b) 
{
    int diff = a - b;
    return abs(diff);
}

// 2.) Smallest of three
int smallestOfThree(int a, int b, int c) 
{
    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    return smallest;
}

// 3.) Even or odd
bool isEven(int x) 
{
    return x % 2 == 0;
}

int main() {
	
	//1.) 
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Absolute difference (num1, num2): " << difference(num1, num2) << endl;

	// 2.)
    cout << "Smallest of the three: " << smallestOfThree(num1, num2, num3) << endl;

	// 3.)
    if (isEven(num1))
        cout << num1 << " is even" << endl;
    else
        cout << num1 << " is odd" << endl;

    return 0;
}
