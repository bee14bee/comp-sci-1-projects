/*
All things c-string
*/

#include <iostream>
#include <cstring> //need this in header for c-string

int main(){

	/*
	Declaring c-string, and assigning it
	*/
	char name[40]="Britnie"; //declaring c string array and assinging it
	cout<<"My name is "<<name<<endl; //displays array
	
	char city[30]; //if not assigning array still need it bin 
	cout<<"Enter a city: ";
	cin.getline(city,30); //use getline cause c-str will stop reading after space
	cout<<"City is: "<<city<<endl;


 	/*
    1.)Using strcpy
    - 	write a program that asks for your first and last name separately, copies one into another variable,
		and prints both before and after copying so you can see how strcpy changes the destination.
    */
    
    char first[30]; //variable for first name
    char last[30]; //variable for last name 
    char temp[30]; //buffers so things dont get over written

    cout << "What is your first name: ";
    cin >> first;
    cout << "What is your last name: ";
    cin >> last;

    strcpy(temp, first); //temp becomes first name
    strcpy(first, last); //first name become last name
    strcpy(last, temp); //last name becomes first name

    cout << "After swapping: "<<endl;
    cout << "First name: " << first << endl;
    cout << "Last name: " << last << endl; 
	
    /* 
	2.) Using strcmp
    - write a program that reads two color names from the user 
   	  and tells whether they’re the same, or which one comes 
      first alphabetically.
    */
    
    char one[30];
    char two[30];
    
    cout<<"Color one: ";
    cin>>one;
    cout<<"Color two: ";
    cin>>two;
    
    if(strcmp(one,two) == 0) //colors match
    {
        cout<<"Colors match"<<endl;
    }
    else if(strcmp(one,two) < 0) //color one comes first
    {
        cout<<"Color one comes first"<<endl;
    }
    else 	//color two comes first
    {
        cout<<"Color two comes first"<<endl;
    }

	/*  
    3.) Using strlen
    - write a program that takes a sentence from the user,
      counts how many characters it has with strlen, and prints that number.

    */
    
    char sentence[50]; //variable name 
    cout<<"Enter a sentence: "; //ask user for input
    cin.getline(sentence,50); //stores input with getline cause of spaces
    
    cout<<"Their are: "<< strlen(sentence)<<" numbers in that sentance."<<endl; //strlen will always go in the cout statment to display it


	/*
    4) Using strcat (works just like strcpy)
        - write a program that asks for your city and your state, 
        concatenates them into one combined string like “Austin, Texas” 
        and displays it
    */
    
    char city[30];
    char state[30];
    
    cout<<"What city: ";
    cin>>city;
    cout<<"What state: ";
    cin>>state;
    
    strcat(city, ", ");   // add comma and space
    strcat(city, state);  // then add the state
    
    cout<<city<<endl;

	/* 
    5) Using atoi and atof
        - write a program that reads two numbers as 
        C-strings (one integer, one decimal), converts them with atoi and atof, 
        adds them together, and prints both the original strings 
        and the numeric result.  
    */
    
    char num1[30];
    char num2[30];
    
    cout<<"Enter whole number: ";
    cin>>num1;
    cout<<"Enter decimal number: ";
    cin>>num2;
    
    int whole = atoi(num1);
    double decimal= atof(num2);
    double sum = whole + decimal;
    
    cout<<"Whole number is: "<<whole<<endl;
    cout<<"Decimal number is: "<<decimal<<endl;
    cout<<"Sum is: "<<sum<<endl;


	return 0;
}
