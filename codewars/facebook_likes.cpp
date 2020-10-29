/*
You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. 
We want to create the text that should be displayed next to such an item.

Implement a function likes :: [String] -> String, which must take in input array, containing the names of people who like an item. 
It must return the display text as shown in the examples:
likes {} // must be "no one likes this"
likes {"Peter"} // must be "Peter likes this"
likes {"Jacob", "Alex"} // must be "Jacob and Alex like this"
likes {"Max", "John", "Mark"} // must be "Max, John and Mark like this"
likes {"Alex", "Jacob", "Mark", "Max"} // must be "Alex, Jacob and 2 others like this"
*/

#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>


using namespace std;

string likes(const vector<string> &names);

int main(void)
{
    vector<string> names {"Alex", "Jacob", "Mark", "Max"};
    cout<< likes({"Peter", "Alex", "Robert"})<<'\n';
    cout<<likes(names)<<'\n';   
    
}
string likes(const vector<string> &names)
{
    string temp_string;
    if(names.size() == 0)
        return "no one likes this";
    else if(names.size() == 1)
    {
        temp_string = names[0] + " likes this";
        return temp_string;
    }
    else if(names.size() == 2)
    {
        temp_string = names[0]+ " and " + names[1] + " like this";
        return temp_string;
    }
    else if(names.size() == 3)
    {
        temp_string = names[0];
        for(int idx = 1; idx < names.size() - 1; idx++)
        {
            temp_string = temp_string + ", " + names[idx];
        }
        temp_string = temp_string + " and " + names[names.size()-1]  + " like this"; 
        return temp_string;
    }
    else
    {
        int temp_hold = names.size() - 2;
        string killer = to_string(temp_hold);
        temp_string = names[0] + ", " + names[1] + " and " + killer + " others like this";
        return temp_string;
    }
    return "";
    
}

/*
Alternative solution...
string likes(const vector<string> &names){
  switch(names.size()){
    case 0: return "no one likes this";
    case 1: return names[0] + " likes this";
    case 2: return names[0] + " and " + names[1] + " like this";
    case 3: return names[0] + ", " + names[1] + " and " + names[2] + " like this";
    default: return names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
  }
}
*/