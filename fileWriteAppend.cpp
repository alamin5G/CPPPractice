/**
 * @file fileWriteAppend.cpp
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-05-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream nameWriter;
    nameWriter.open("clientName.txt", ios::out|ios::app);
    string firstName, lastName;
    cin >> firstName >> lastName;
    nameWriter << firstName << " " << lastName << endl;
    nameWriter.close();
    
    return 0;
}