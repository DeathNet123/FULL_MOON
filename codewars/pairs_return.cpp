#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<ctime>
#include<utility>   //For the Pairs

using namespace std;

//Function
pair<string, string> capitalize(const string &s); //Pairs Important

int main(void)
{
    pair<string, string> result;
    string s = "abcdef";

    result = capitalize(s);
    cout<<"First: "<<result.first<<'\n';
    cout<<"Second: "<<result.second<<'\n';
    return 0;
}

pair<string, string> capitalize(const string &s)
{
    pair<string, string> return_pair;
    int size = s.size(), idx;
    string first_string = s, second_string = s;

    for(idx = 0; idx < size; idx++)
    {
        if(idx % 2 == 0)
        {
            first_string[idx] = toupper(first_string[idx]);
        }
        else if (idx % 2 != 0)
        {
            second_string[idx] = toupper(second_string[idx]);
        }            
    }

    return_pair.first = first_string;
    return_pair.second = second_string;

    return return_pair;
}