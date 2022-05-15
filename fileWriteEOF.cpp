/**
 * @file fileWriteEOF.cpp
 * how to write continuasly client name or any names in an existing file or new file. 
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
    string fName, lName;
    ofstream nameWriter;

    nameWriter.open("FilName.txt", ios::out|ios::app);//If file name exist nor new file will be created
    while(cin >> fName >> lName ){
        nameWriter << fName << " " << lName << endl;
    }
    nameWriter.close();

    //to stop the looping process (or If you don't have any data to type) press ctrl+z;

    return 0;
}