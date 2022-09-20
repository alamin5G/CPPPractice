/**
 * @file ceilFunc.cpp
 * ceil func
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    float a = 3.2;
    float b = -3.2;
    //if i take it under ceil function
    //then what will be the expected output?
    int ac = ceil(a); //output 4
    int bc = ceil(b); //output -3
    cout << ac << endl;
    cout << bc << endl;

    //so, we can say ceil is working for highest value;
    return 0;
}