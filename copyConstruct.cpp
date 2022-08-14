/**
 * @file copyConstruct.cpp
 * copy constructor basic practice
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class CopyCons{
    int a;
    public:
    CopyCons(int a){
        this-> a = a;
    }

    CopyCons(CopyCons &b){
        a = b.a;
    }
    void show(){
        cout << a << endl;
    }
};
int main(){
    CopyCons a(12);
    CopyCons b(a);
    b.show();
    return 0;
}