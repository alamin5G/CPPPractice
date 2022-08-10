/**
 * @file operatorOverloadingWithBinary+.cpp
 * operator overloading with binary + operator
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
class Add{
    int a;
    public:
    Add(){
        a=0;
    }
    Add(int a){
        this->a = a;
    }
    Add operator+(Add add){
        Add ad;
        ad.a = a + add.a;
        return ad;
    }
    void show(){
        cout << a <<endl;
    }
};
int main(){
    Add a(10);
    Add b(15);
    Add c;
    c = b + a;
    c.show();
    return 0;
}