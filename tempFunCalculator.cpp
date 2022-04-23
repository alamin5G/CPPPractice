/**
 * @file tempFunCalculator.cpp
 * converting add(int a, int b) into template function 
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
A adds(A x, A y){
    return x+y;
}

template<typename S>
S subtract(S x, S y){
    return x-y;
}

template<typename M>
M multiplication(M a, M b){
    return a*b;
}

template<typename D>
D division(D a, D b){
    return a/b;
}

int main(){

    cout << "Two numbers addition is : " << adds(5.5, 5.7) << endl;
    cout << "Two numbers substract is : " << subtract(5.5, 5.7) << endl;
    cout << "Two numbers multiply is : " << multiplication(5.6, 5.7) << endl;
    cout << "Two numbers divided is : " << division(5.6, 2.5) << endl;
    return 0;
}