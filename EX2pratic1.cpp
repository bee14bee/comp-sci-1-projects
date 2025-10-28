/*
Practice 1: Random Guess Game (Functions Calling Functions)
Write a program that:
Has a function int getRandom() that returns a random number between 1 and 50.
Has a void compare(int guess) function that:
Calls getRandom() to get a secret number.
Prints whether the user’s guess was too high, too low, or correct.
In main(), ask the user for their guess and call compare(guess).

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRandom()
{
  srand(time(0));
  int ran = rand()%50+1;
  return ran;
}

void compare(int guess)
{
  int num=getRandom();
  if(guess<num)
  {
    cout<<"Too low"<<endl;
  }
  else if(guess>num)
  {
    cout<<"Too high"<<endl;
  }
  else
  {
    cout<<"correct"<<endl;
  }
}


int main()
{

  int guess;
  cout<<"Enter guess between 1-50: ";
  cin>>guess;

  compare(guess);






  return 0;
}
