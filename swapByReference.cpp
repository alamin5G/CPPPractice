/**
 * @file swapByReference.cpp
 * write a function using reference variables as arguments to
 * swap the values of a pair of integers.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b);
int main()
{
    int x, y;
    cin >> x >> y;
    cout << "x= " << x << " y= " << y << " Before swap." <<endl;
    swap(&x, &y);
    cout << "x= " << x << " y= " << y << " After swap." << endl;
    return 0;
}

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b; 
    *b = t;
}