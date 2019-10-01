//
// Created by sanch on 10/1/2019.
//

#include "ShellSort.h"
using  namespace std;

template <typename T>
auto ShellSort(vector<T> &vector1, T n)
{
    T i, j, k, temp;
    // Gap 'i' between index of the element to be compared, initially n/2.
    for(i = n/2; i > 0; i = i/2)
    {
        for(j = i; j < n; j++)
        {
            for(k = j-i; k >= 0; k = k-i)
            {
                // If value at higher index is greater, then break the loop.
                if(vector1[k+i] >= vector1[k])
                    break;
                    // Switch the values otherwise.
                else
                {
                    temp = vector1[k];
                    vector1[k] = vector1[k+i];
                    vector1[k+i] = temp;
                }
            }
        }
    }
}