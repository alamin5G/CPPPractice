/**
 * @file tempArrSumFunc.cpp
 * create a template function where you can calculate the sum of array elements and return it to the main function.
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

template<typename A>
A ArraySum(A *arr, A *sizeOfArr){
    double sum = 0;
    while(arr!=sizeOfArr){
        sum = sum + *arr;
        *arr++;
    }
    return sum;
}

int main(){

    int sum;
    int ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sum = ArraySum(ar, ar+sizeof(ar)/sizeof(ar[0]));
    cout << "The sum = " << sum << endl;
    sum = 0;
    cout << "How many array elements you want to input?" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cin >> arr[i];
    }

    sum = ArraySum(arr, arr+sizeof(arr)/sizeof(arr[0]));
    cout << "User Sum = " << sum << endl;
    

}