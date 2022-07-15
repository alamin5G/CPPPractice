/**
 * @file fileWrite.cpp
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
    ofstream file;
    file.open("student.txt");
    string messages;
    getline(cin, messages);
    file << messages << "\n\nContent is written by Md. Alamin.\n";
    file.close();
    return 0;
}