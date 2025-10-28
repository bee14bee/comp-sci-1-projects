 /*
Practice 3: C-String Comparison and Combination
Write a program that:
Declares two C-strings (char str1[50], char str2[50]).
Copies "Welcome to UNT!" into str1 using strcpy().
Asks the user to enter another short sentence into str2 (use cin.getline).
Prints the lengths of both strings using strlen().
If they are equal in length, compare them with strcmp().
Finally, concatenate them with strcat() and display the combined message.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){

  //decalring variables 
  char str1[50];
  char str2[50];

  //copies meesages unto str1 from message
  strcpy(str1,"Welcome to UNT!");
  cout<<endl; 

  //ask user to enter new message and uses getline as cin
  cout<<"Enter short message: ";
  cin.getline(str2,50);

  //gets the length for each sentance
  cout<<"Their are "<<strlen(str1)<<" numbers in that sentence."<<endl;
  cout<<"Their are "<<strlen(str2)<<" numbers in that sentence."<<endl;

  //compares them 
  if(strcmp(str1,str2)==0)
  {
    cout<<"Match";
  }
  else if(strcmp(str1,str2) < 0)
  {
    cout<<"Word one is bigger";
  }
  else
  {
    cout<<"Word two is bigger";
  }
  
  cout<<endl;
  
  //conjugates them strcat
  strcat(str1, " , ");
  strcat(str1,str2);

  cout<<str1<<endl;

  
  



  return 0;
}
