/**
 * @file templateFunClass.cpp
 * create a template function inside class and find the largest and smallest number among 3 numbers.
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

class LargestNumber{
private:
    double a, b, c;
public:

///for finding largest number
    template<typename T>
    T largestNum(T a, T b, T c){
        this->a = a;
        this->b = b;
        this->c = c;

        if(a>b && a>c){
            return a;
        }else if(b>a && b>c){
            return b;
        }else{
            return c;
        }

    }

///for finding smallest number

    template<typename T>
    T smallestNum(T a, T b, T c){
        this->a = a;
        this->b = b;
        this->c = c;

        if(a<b && a<c){
            return a;
        }else if(b<a && b<c){
            return b;
        }else{
            return c;
        }
    }

};

int main(){
    double x, y, z, l,s;
    cin >> x >> y>> z;
    LargestNumber largest;
    l = largest.largestNum(x, y, z);
    cout << "Largest Number is: " << l << endl;
    LargestNumber smallest;
    s = smallest.smallestNum(x,y,z);
    cout << "Smallest Number is: " << s << endl;

    return 0;
}