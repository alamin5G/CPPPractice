/**
 * @file objectAsFunctionArgument.cpp
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
    int id;
    string name;
    public:
    void input(){
        cin >> id;
        cin.ignore();
        getline(cin, name);

    }
    void output(Student st){
        Student pt;
        pt.name = st.name;
        pt.id = st.id;
        cout << pt.name << endl;
        cout << pt.id << endl;
    }
};
int main(){
    Student st, pt;
    st.input(); // taking input for st object;
    st.output(pt); // trying to show data without taking input in pt object. 
    // pt is totally empty, let's see what happen. 
    pt.output(st); // this is the actual way; taking input in st and assigning into pt;

}