/**
 * @file map.cpp
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string, string> phoneBook;
    int n;
    cin >> n;
    string name, number;
    for(auto i=0; i<n; i++){
        cin >> name;
        cin >> number;
        phoneBook[name] = number;
    }
    
    map<string, string>::iterator it;
    string search;
    while(cin>>search){
        it = phoneBook.find(search);
        
        if(it != phoneBook.end()){
            cout << it->first << "=" << it->second << endl;
        }else{
            cout << "Not found" <<endl;
        }
    }

    return 0;
}