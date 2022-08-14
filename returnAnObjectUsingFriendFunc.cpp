/**
 * @file returnAnObjectUsingFriendFunc.cpp
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-09
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Student
{
    int mark;

public:
    void setInfo()
    {
        cin >> mark;
    }

    Student marks(Student one){
        Student temp;
        temp.mark = mark + one.mark;
        return temp;
    }

    void getInfo(){
        cout << mark << endl;
    }
    
};

int main()
{
    Student alamin;
    alamin.setInfo();

    Student rakib;
    rakib.setInfo();
    Student temp;
    cout << endl;
    temp =  rakib.marks(alamin);
    temp.getInfo();
}