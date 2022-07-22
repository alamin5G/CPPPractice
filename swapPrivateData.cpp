/**
 * @file swapPrivateData.cpp
 * swap private data member of two object using class and friend function
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class swaps{
    int data;
    public: 
    swaps(){
        data = 0;
    }
    swaps(int a){
        data = a;
    }

    friend void swapData(swaps &first, swaps &last){
        int t;
        t = first.data;
        first.data = last.data;
        last.data = t;
    }
    void getData(){
        cout << data << endl;
    }
};
int main(){
    swaps first = swaps(10);
    swaps second = swaps(20);
    cout << "first object ";
    first.getData();
    cout << "second object ";
    second.getData();
    cout << endl;
    swapData(first, second);
    cout << "After swaping : \n" <<endl;
    cout << "first object ";
    first.getData();
    cout << "second object ";
    second.getData();
    cout << endl;

    return 0;
}