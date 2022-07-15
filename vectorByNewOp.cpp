/**
 * @file vectorByNewOp.cpp
 * write a function that creates a vector aof  user-given size M using new operator.
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
void vectors(int n);
int main(){
    int m;
    cout << "Enter your size: ";
    cin >> m;
    vectors(m);
    return 0;
}

void vectors(int n){
    int *v;
    v = new int [n];
    cout << "Enter " << n << " int number: " << endl;
    for(auto i=0; i<n; i++){
        cin >> v[i];
    }
    cout << "See the vector output" << endl;
    for(auto i = 0; i<n; i++){
        if(i==n-1){
            cout << v[i] << "." << endl;
        }else{
            cout << v[i] << ", ";
        }
    }
}
