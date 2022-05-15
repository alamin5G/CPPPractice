/**
 * @file fileRead.cpp
 * how to read data from an existing file.
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
    ifstream fileRead("FilName.txt");
    string data;
    while(getline(fileRead, data)) {
        cout << data <<endl;
    }
    fileRead.close();
    return 0;
}