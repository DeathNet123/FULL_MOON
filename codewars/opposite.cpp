//Programmer: Unknown..
//Data: 10/29/2020.
//This Program takes a line and then reverse each word in the string..
#include<iostream>
#include<string>
#include<vector>

using namespace std; //I know it's not a good practice but hey we are not doing something important here. We are just playing here..

//Functiosn Proto-types..

string reverse_words(string str);

int main(void)
{
    string str;
    getline(cin, str);
    cout<<reverse_words(str);
    return 0;
}

string reverse_words(string str)
{
   std::string out;
  std::string cword;
  for (char c : str) {
    if (c == ' ') {
      out += cword;
      out += c;
      cword = "";
      continue;
    }
    cword = c + cword;
  }
  out += cword;
  return out;
}