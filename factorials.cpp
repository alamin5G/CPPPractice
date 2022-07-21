/**
 * @file factorial.cpp
 * calculating factorial of a numbers.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
long factorial(int n){
    if(n==0){
        return 1;
    }else{
        return (n*factorial(n-1));
    }
}
int main(){
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is = " << factorial(n) << endl;

    return 0;
}