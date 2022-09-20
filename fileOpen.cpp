/**
 * @file fileOpen.cpp
 * trying to open a file using ifstream
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream readFile;
    readFile.open("FileDay.txt");
    char s;
    vector<string> vs;
    string st;
    cout << "Opening from a file" << endl;
    while(!readFile.eof()){
        readFile.get(s);
        cout << s;
        if(s!='\n'){
            st +=s;
        }else{
            vs.push_back(st);
            st="";
        }
    }

    cout <<"After storing the file text into a vector" <<endl;
    for(auto u : vs){
        cout << u << endl;
    }

    readFile.close();

    return 0;
}