/**
 * @file templateFunction2.cpp
 * create template function to find large and small number
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

template<typename T>
T maxNumber(T a, T b){
    return a>b?a:b;
}

template<typename T>
T minNumber(T a, T b){
    return a<b?a:b;
}

int main(){

    double a, b, m, n;
    cin >> a >> b;
    m = maxNumber(a, b);
    cout << "Max Number is : " << m << endl;
    n = minNumber(a, b);
    cout << "Min Number is : " << n << endl;

    return 0;
}

