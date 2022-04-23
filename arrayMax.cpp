/**
 * @file arrayMax.cpp
 * find the array max and min elements using userdefined function
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

int maxArray(int *arr, int sizeOfArr){
    int i, j, max, temp;

    for(i=0; i<sizeOfArr; i++){
        for(j=i+1; j<sizeOfArr; j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[0];
}

int minArray(int *arr, int sizeOfArr){
    int i, j, max, temp;

    for(i=0; i<sizeOfArr; i++){
        for(j=i+1; j<sizeOfArr; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[0];
}



int main(){
    int max, min;
    int arr[5] = {5, 9, 92, 2, 88};
    max = maxArray(arr, sizeof(arr)/sizeof(arr[0]));
    cout << "max number is: " << max << endl;
    min = minArray(arr, sizeof(arr)/sizeof(arr[0]));
    cout << "min number is: " << min << endl;

    return 0;
}