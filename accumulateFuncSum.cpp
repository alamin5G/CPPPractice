/**
 * @file accumulateFuncSum.cpp
 * accumulate function using for summation 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>

using namespace std;
//mul function is user defined function, 
//I am invoke the accumulate function here to multiply the each elements with its neighbors. 
int mul(int x, int y){
    return x * y;
}

int main(){
    int n;
    cin >> n;

    vector<int> vi;
    int sum=1;
    for(auto i=1; i<=n; i++){
        vi.push_back(i);
    }

    cout << "Sum of 1 to " << n<< " : " << accumulate(vi.begin(), vi.end(), sum)-1 << endl;

    int a;
    cin >> a;
    int b;
    vector<int> v;
    for(auto i=1; i<=a; i++){
        cin >> b;
        v.push_back(b);

    }

    cout << "Multiplication of the element each other: " << accumulate(v.begin(), v.end(), sum, mul) << endl;

    return 0;
}