/*
It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. 
You're given one parameter, the original string. You don't have to worry with strings with less than two characters.
*/

#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<cstdlib>

using namespace std;

//Function Prototypes
string sliceString (string str );

//Drivers Code.
int main(void)
{
    cout<<sliceString("tuna")<<'\n';
    return 0;
}

//Function declarations
string sliceString (string str )
{
  // your code is here ... Hope You Enjoy !!
  int size = str.length(), idx;
  string temp_string;
  for(idx = 1; idx < size-1; idx++)
  {
      temp_string = temp_string + str[idx];
  }
  return temp_string ; 
}