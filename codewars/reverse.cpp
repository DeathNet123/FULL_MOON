//Programmer: Arslan Iftikhar
//This program returns the reverse words in the string..
#include<iostream>
#include<string>

using namespace std;

string reverse_words(string str);

int main(void)
{
    cout<<reverse_words("This is the test.");
    return 0;
}

string reverse_words(string str)
{
  string cword, out;
  for (char c : str) 
  {
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
