/*
2) C-String practice
Write a program that:
Declares char str1[40] = "Exam day! ";
Asks the user to enter a motivational word into char str2[20].
Concatenates them with strcat() and prints the full message.
Then print the length with strlen().
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){

  //declares and assigns variables 
  char str1[40]="Exam day!";
  char str2[20];

  //ask user to enter input and stores it as str 2
  cout<<"Enter motivation words: ";
  cin.getline(str2,20);

  //compines both sentances with strcat 
  strcat(str1," , ");
  strcat(str1,str2);

  //displays full message
  cout<<"Full message: "<<str1<<endl;

  //print out the lenght of the message
  cout<<"There are "<<strlen(str1)<<" characters in first sentence"<<endl;


  return 0;
}
