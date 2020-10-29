//Programmer: Arslan Iftikhar..
//Date: 10/29/2020..
/*This programs take the array sort the array and left the even numbers untouched..*/
#include<iostream>
#include<vector>
#define EVEN_KING -9999999
using namespace std;

vector<int> sortArray(vector<int> array);

int main(void)
{
    sortArray({3, 5, 8, 10, 11, 1, 0, 7, 2, 17, 15});
    return 0;

}

vector<int> sortArray(vector<int> array)
{
    int idx, kdx; //Counter Variable..
    int size = array.size(), temp;
    vector<int> temp_array;
    vector<int> odd_array;

    for(idx = 0; idx < size; idx++)
    {
        if (array[idx] % 2 == 0 || array[idx] == 0)
        {
            temp_array.push_back(EVEN_KING);
        }
        else if(array[idx] % 2 != 0)
        {
            odd_array.push_back(array[idx]);
            temp_array.push_back(array[idx]);
        }
        
    }

    for(idx = 0; idx < odd_array.size(); idx++)
    {
        for(kdx = 0; kdx < odd_array.size() - 1; kdx++)
        {
            if(odd_array[kdx] > odd_array[kdx + 1])
            {
                temp = odd_array[kdx];
                odd_array[kdx] = odd_array[kdx + 1];
                odd_array[kdx + 1] = temp;
            }
        }
    }

    for(int idx = 0, kdx = 0; idx < temp_array.size(); idx++)
    {
        if(temp_array[idx] != EVEN_KING)
        {
            temp_array[idx] = odd_array[kdx];
            kdx++;
        }
    }

    for(int idx = 0; idx < size; idx++)
    {
        if(temp_array[idx] != EVEN_KING)
        array[idx] = temp_array[idx];
    }
    for(int c : array)
    {
        cout << c << '\n';
    }

    return array;
}