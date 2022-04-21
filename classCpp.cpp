/**
 * @file classCpp.cpp
 * practicing class and object
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-21
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Students
{

private:
    int id,  semester;
    double sgpa;
    string name;

public:
    void setName(string name){
        this-> name = name;
    }
    string getName(){
        return name;
    }
    void setSemester(int semester)
    {
        this->semester = semester;
    }
    int getSemester()
    {
        return semester;
    }
    void setSgpa(double sgpa)
    {
        this->sgpa = sgpa;
    }
    double getSgpa()
    {
        return sgpa;
    }

    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }
};

int main()
{
    Students alamin;
    alamin.setName("Alamin");
    alamin.setId(34);
    alamin.setSemester(2);
    alamin.setSgpa(3.55);

    cout << "Name: "<< alamin.getName()<<endl;
    cout << "Id : " << alamin.getId()<< endl;
    cout << "Semester : " << alamin.getSemester()<< endl;
    cout << "SGPA : " << alamin.getSgpa()<< endl;

    return 0;
}
