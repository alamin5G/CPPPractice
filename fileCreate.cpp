/**
 * @file fileCreate.cpp
 * just create a file using ofstream (create and write)
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream newFile("FileName.txt");
    if(newFile.is_open()){
        newFile << "Welcome to IUBAT\n";
        newFile << "Here we would like to create a routine\n";
        newFile << "Sat\nSun\nMon\nTue\nWed\nThu\nFri\n";
        newFile.close();
    }else{
        cout << "File Does not exist!" <<endl;
    }
}