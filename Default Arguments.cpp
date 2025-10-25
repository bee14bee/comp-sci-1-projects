/* 
1.) Write a function int multiply(int a, int b = 10) that returns a × b.
2.) Write void printRepeat(string text, int times = 3) that prints the text multiple times.
*/

#include <iostream>
using namespace std;

// 1.) 
int multiply (int a, int b=10)
{
	int result = a * b;
	return result;
}

// 2.)
void printRepeat(string text, int times = 3) {
    for (int i = 0; i < times; i++) {
        cout << text << endl;
    }
}

int main(){

	// 1.) 

	int a;

	cout<<"Enter number: ";
	cin>>a;
	
	cout<<"Product is: "<<multiply(a)<<endl;

	// 2.) 
	string word;
    int repeat;

    cout << "Enter text: ";
    cin >> word;

    cout << "Enter number of times to repeat (or 0 to use default): ";
    cin >> repeat;

    if (repeat == 0)
        printRepeat(word);        // uses default 3 times
    else
        printRepeat(word, repeat); // uses user input

	




	return 0;
}
