/**
 * @file vectorTest.cpp
 * 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;

    vec.push_back(13);
    vec.push_back(15);
    vec.push_back(21);

    for(int i = 0; i<vec.size(); i++ ){
        cout << vec[i] << endl;
    }

    return 0;
}
