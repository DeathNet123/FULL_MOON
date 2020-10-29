#include<iostream>
#include<vector>

using namespace std;

bool is_exist(const char ELEMENT)
  {
    char vowels [10]= {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
  for(int idx = 0; idx  < 10; idx++)
    {
      if(vowels[idx] == ELEMENT)
          return true;
    }
  return false;
  }
  
std::vector<int> vowelIndices(std::string word)
{
  std::vector<int> res; 
  for(int idx = 0; idx < int(word.size()); idx++)
    {
      if(is_exist(word[idx]))
        res.push_back(idx + 1);
    }
    for(int idx : res)
    {
        cout<<idx<<'\n';
    }
	return res;
}

int main(void)
{
    vowelIndices("super");
    return 0;
}