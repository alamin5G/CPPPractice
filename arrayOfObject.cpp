/**
 * @file arrayOfObject.cpp
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
class Student{
    string name;
    int id;
    string phone;

    public:
    void input(){
        cin.ignore();
        getline(cin, name);
        cin >> id;
        cin >> phone;
    }

    void output(){
        cout << name << endl;
        cout << id << endl;
        cout << phone << endl;
    }
};

int main(){
    int n;
    cin >> n;
    cout << "Enter the information: " << endl;
    Student st[n];
    for(int i=0; i<n; i++){
        st[i].input();
    }
    cout << endl;
    cout << "Showing information: " << endl;
    for(int i=0; i<n; i++){
        st[i].output();
    }
}