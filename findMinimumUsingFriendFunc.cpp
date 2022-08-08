/**
 * @file findMinimumUsingFriendFunc.cpp
 * 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class A;
class B{
    int a;
    public:
    void setValue(int x){
        a = x;
    }
    friend int getMin(A, B);
    
};
class A{
    int a; 
    public:
    void setValue(int y){
        a = y;
    }
    friend int getMin(A, B);
};
int getMin(A min, B max){
    if(min.a < max.a){
        return min.a;
    }else{
        return max.a;
    }
}
int main(){
A max;
B min;

min.setValue(15);
max.setValue(17);
cout << "Minimum : " << getMin(max, min) << endl;

}