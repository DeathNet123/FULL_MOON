#include<iostream>
#include<vector>

using namespace std;

string is_sorted_and_how(vector<int> array);
bool is_accending(vector<int> array);
bool is_decending(vector<int> array);

int main(void)
{
    cout<<is_sorted_and_how({1, 2, 3});
    cout<<is_sorted_and_how({3, 2, 1});
    cout<<is_sorted_and_how({6, 1, 8});

    
    return 0;
}

string is_sorted_and_how(vector<int> array)
{
    if(is_accending(array))
        return "yes, ascending";
    else if(is_decending(array))
        return "yes, decending";
    return "no";
}

bool is_decending(vector<int> array)
{
    int idx, kdx; //Counter Variable..

    for(idx = 0; idx < int(array.size()); idx++)
    {
        for(kdx = 0; kdx < int(array.size() - 1); kdx++)
        {
            if(array[kdx] < array[kdx + 1])
                return false;
        }
    }

    return true;
}

bool is_accending(vector<int> array)
{
    int idx, kdx; //Counter Variable..

    for(idx = 0; idx < int(array.size()); idx++)
    {
        for(kdx = 0; kdx < int(array.size() - 1); kdx++)
        {
            if(array[kdx] > array[kdx + 1])
                return false;
        }
    }

    return true;
}