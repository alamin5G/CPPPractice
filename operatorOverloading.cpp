/**
 * @file operatorOverloading.cpp
 * operator overloading with unary ++ operator
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class Calculation{
    int a;
    public:
    Calculation(int x){
        a = x;
    }

    void operator++(){
        a++;
    }
    void operator+(){
        a+=5;
    }
    void getData(){
        cout << a << endl;
    }
};
int main(){
    Calculation c = Calculation(15);
    +c;
    c.getData();
}