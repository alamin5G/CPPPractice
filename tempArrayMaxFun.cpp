/**
 * @file tempArrayMaxFun.cpp
 * find the max/min elements from an array using template function.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

template <typename A>
A maxArrayElement(A *arr, int sizeOfArray)
{
    A max = 0.0;
    int i;
    for (i = 0; i < sizeOfArray; i++)
    {
       if(arr[i]>max){
           max = arr[i];
       }
    }
    return max;
}
//TODO - find the min array elements using Template function;
int main()
{
    double max; // you can use here also int variable; if you want to take return an int value;
    printf("How many array elements you want to take input?\n");
    int n;
    cin >> n;
    double arr[n]; //set your preferable data type int or double;
    for (auto i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cin >> arr[i];
    }
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << len << endl; // checking the length of an array;
    max = maxArrayElement(arr, len); // calling the template function;
    cout << "Max array is : " << max << endl;
    
    return 0;
}
