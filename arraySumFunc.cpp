/**
 * @file arraySumFunc.cpp
 * write a program that return sum of all array elements in main function from user defined function.
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

int arraySum(int *ar, int *siz){
    int sum = 0;

    while(ar != siz){
        sum = sum + *ar;
        *ar++;
    }
    return sum;
};

int main(){
    int arr[] = {2, 3, 4, 5, 7, 12};
    int sum = arraySum(arr, arr+sizeof(arr)/sizeof(arr[0]));
    cout << "size of array: " << sizeof(arr) << endl;
    cout << "Total = " << sum << endl;

    return 0;
}