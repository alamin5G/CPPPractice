/**
 * @file operatorOverloadingFor2Objects.cpp
 * operator overloading for 2 objects
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
class Department{
    int credit;
    public:
    Department(){
        credit = 0;
    }
    Department(int a){
        credit = a;
    }
    Department operator+(Department cse){
        Department c;
        c.credit = credit + cse.credit;
        return c;
    }
    void display(){
        cout << credit << endl;
    }
};

int main(){
    Department cse(25);
    Department bsn(18);
    Department eng(17);
    Department total;
    total = cse + bsn + eng;
    total.display();
    return 0;
}