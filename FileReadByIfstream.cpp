/**
 * @file FileReadByIfstream.cpp
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
    string text;
    int i=0;
    ifstream existingFileRead("FileName.txt");
    if(existingFileRead.is_open()){
        while(getline(existingFileRead, text)){
            cout << text << endl;
        }
        existingFileRead.close();
    }else{
        cout << "Something wrong there!" << endl;
    }
    return 0;
}